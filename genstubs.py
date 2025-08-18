import shutil
from pycparser import c_ast, parse_file, c_generator



def gen_stubs_from_headers(include_path, template_file, output_filename):
    """
    Generate stub functions from the given C header files and write them to the output file.

    :param include_path: Path to the directory containing the C header files.
    :param template_file: The template file containing the function declarations.
    :param output_filename: The file where the generated stubs will be written.
    """

    generator = c_generator.CGenerator()

    decls = []
    names = set([])

    ast = parse_file(template_file,
                     use_cpp=True,
                     cpp_args=[f'-I{include_path}', '-Ifakelibc/include'])

    for node in ast.ext:
        if isinstance(node.type, c_ast.FuncDecl):
            func = node.type
            if isinstance(func.type, c_ast.TypeDecl):
                fnname = func.type.declname
                if fnname.startswith('egl') or fnname.startswith('gl'):
                    if fnname not in names:
                        names.add(fnname)
                        decls.append(node)

    shutil.copy(template_file, output_filename)

    with open(output_filename, 'a+') as output_file:
        for decl in decls:
            output_file.write(generator.visit(decl))
            return_type = decl.type.type.type.names[0]
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

