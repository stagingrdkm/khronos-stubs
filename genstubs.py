import shutil
import re
import io
import tempfile
from pycparser import c_ast, parse_file, c_generator


def comment_remover(text):
    """
    Removes C-style comments from text.

    see https://stackoverflow.com/questions/16836878/pycparser-failed-on-comments
    """
    def replacer(match):
        s = match.group(0)
        if s.startswith('/'):
            return ""
        else:
            return s
    pattern = re.compile(
        r'//.*?$|/\*.*?\*/|\'(?:\\.|[^\\\'])*\'|"(?:\\.|[^\\"])*"',
        re.DOTALL | re.MULTILINE
    )
    return re.sub(pattern, replacer, text)


def gen_stubs_from_headers(include_path, template_file, output_filename):
    """
    Generate stub functions from the given C header files and write them to the output file.

    :param include_path: Path to the directory containing the C header files.
    :param template_file: The template file containing the function declarations.
    :param output_filename: The file where the generated stubs will be written.
    """

    # clang's cpp doesn't seem to strip comments correctly, so we do it ourselves
    with io.open(template_file) as f:
        text = f.read()

    text = comment_remover(text)

    tmp_file = tempfile.NamedTemporaryFile()
    tmp_file.write(text.encode('utf-8'))
    tmp_file.flush()

    generator = c_generator.CGenerator()

    funcs = []
    names = set([])

    ast = parse_file(tmp_file.name,
                     use_cpp=True,
                     cpp_args=[f'-I{include_path}', '-Ifakelibc/include'])

    for node in ast.ext:
        if isinstance(node.type, c_ast.FuncDecl):
            func = node.type
            if isinstance(func.type, c_ast.PtrDecl):
                fnname = func.type.type.declname
            elif isinstance(func.type, c_ast.TypeDecl):
                fnname = func.type.declname
            else:
                print("Error: unknown function type:", func.type)
                continue

            if fnname.startswith('egl') or fnname.startswith('gl'):
                if fnname not in names:
                    names.add(fnname)
                    funcs.append(func)

    shutil.copy(template_file, output_filename)

    with open(output_filename, 'a+') as output_file:
        for func in funcs:
            output_file.write(generator.visit(func))
            if isinstance(func.type, c_ast.PtrDecl):
                output_file.write(f'\n{{\n   return 0;\n}}\n\n')
            else:
                return_type = func.type.type.names[0]
                if return_type == 'void':
                    output_file.write('\n{\n}\n\n')
                else:
                    output_file.write(f'\n{{\n   return ({return_type})0;\n}}\n\n')



if __name__ == "__main__":

    gen_stubs_from_headers(
        'include',
        'templates/egl_template.c',
        'stubs/egl_stubs.c')

    gen_stubs_from_headers(
        'include',
        'templates/gles_template.c',
        'stubs/gles_stubs.c')

    gen_stubs_from_headers(
        'include',
        'templates/gles2_template.c',
        'stubs/gles2_stubs.c')

