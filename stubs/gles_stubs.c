// SPDX-License-Identifier: Apache-2.0

// Don't define GL_GLEXT_PROTOTYPES, we don't want to give the false impression the platform implements any of these
// GLES extensions, instead require clients to use the function pointer approach to get any extensions they want.
// #define GL_GLEXT_PROTOTYPES 1

#include <GLES/gl.h>
#include <GLES/glext.h>

void glAlphaFunc(GLenum func, GLfloat ref)
{
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
}

void glClearDepthf(GLfloat d)
{
}

void glClipPlanef(GLenum p, const GLfloat *eqn)
{
}

void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
}

void glDepthRangef(GLfloat n, GLfloat f)
{
}

void glFogf(GLenum pname, GLfloat param)
{
}

void glFogfv(GLenum pname, const GLfloat *params)
{
}

void glFrustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
}

void glGetClipPlanef(GLenum plane, GLfloat *equation)
{
}

void glGetFloatv(GLenum pname, GLfloat *data)
{
}

void glGetLightfv(GLenum light, GLenum pname, GLfloat *params)
{
}

void glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
{
}

void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params)
{
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
}

void glLightModelf(GLenum pname, GLfloat param)
{
}

void glLightModelfv(GLenum pname, const GLfloat *params)
{
}

void glLightf(GLenum light, GLenum pname, GLfloat param)
{
}

void glLightfv(GLenum light, GLenum pname, const GLfloat *params)
{
}

void glLineWidth(GLfloat width)
{
}

void glLoadMatrixf(const GLfloat *m)
{
}

void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
}

void glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)
{
}

void glMultMatrixf(const GLfloat *m)
{
}

void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
}

void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
}

void glOrthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
}

void glPointParameterf(GLenum pname, GLfloat param)
{
}

void glPointParameterfv(GLenum pname, const GLfloat *params)
{
}

void glPointSize(GLfloat size)
{
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
}

void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
}

void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
}

void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
}

void glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params)
{
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
}

void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
}

void glActiveTexture(GLenum texture)
{
}

void glAlphaFuncx(GLenum func, GLfixed ref)
{
}

void glBindBuffer(GLenum target, GLuint buffer)
{
}

void glBindTexture(GLenum target, GLuint texture)
{
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
}

void glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage)
{
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
{
}

void glClear(GLbitfield mask)
{
}

void glClearColorx(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
}

void glClearDepthx(GLfixed depth)
{
}

void glClearStencil(GLint s)
{
}

void glClientActiveTexture(GLenum texture)
{
}

void glClipPlanex(GLenum plane, const GLfixed *equation)
{
}

void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
}

void glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
}

void glColorPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
}

void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data)
{
}

void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data)
{
}

void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
}

void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glCullFace(GLenum mode)
{
}

void glDeleteBuffers(GLsizei n, const GLuint *buffers)
{
}

void glDeleteTextures(GLsizei n, const GLuint *textures)
{
}

void glDepthFunc(GLenum func)
{
}

void glDepthMask(GLboolean flag)
{
}

void glDepthRangex(GLfixed n, GLfixed f)
{
}

void glDisable(GLenum cap)
{
}

void glDisableClientState(GLenum array)
{
}

void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
}

void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices)
{
}

void glEnable(GLenum cap)
{
}

void glEnableClientState(GLenum array)
{
}

void glFinish(void)
{
}

void glFlush(void)
{
}

void glFogx(GLenum pname, GLfixed param)
{
}

void glFogxv(GLenum pname, const GLfixed *param)
{
}

void glFrontFace(GLenum mode)
{
}

void glFrustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
}

void glGetBooleanv(GLenum pname, GLboolean *data)
{
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetClipPlanex(GLenum plane, GLfixed *equation)
{
}

void glGenBuffers(GLsizei n, GLuint *buffers)
{
}

void glGenTextures(GLsizei n, GLuint *textures)
{
}

GLenum glGetError(void)
{
   return (GLenum)0;
}

void glGetFixedv(GLenum pname, GLfixed *params)
{
}

void glGetIntegerv(GLenum pname, GLint *data)
{
}

void glGetLightxv(GLenum light, GLenum pname, GLfixed *params)
{
}

void glGetMaterialxv(GLenum face, GLenum pname, GLfixed *params)
{
}

void glGetPointerv(GLenum pname, void **params)
{
}

const GLubyte *glGetString(GLenum name)
{
   return 0;
}

void glGetTexEnviv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetTexEnvxv(GLenum target, GLenum pname, GLfixed *params)
{
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetTexParameterxv(GLenum target, GLenum pname, GLfixed *params)
{
}

void glHint(GLenum target, GLenum mode)
{
}

GLboolean glIsBuffer(GLuint buffer)
{
   return (GLboolean)0;
}

GLboolean glIsEnabled(GLenum cap)
{
   return (GLboolean)0;
}

GLboolean glIsTexture(GLuint texture)
{
   return (GLboolean)0;
}

void glLightModelx(GLenum pname, GLfixed param)
{
}

void glLightModelxv(GLenum pname, const GLfixed *param)
{
}

void glLightx(GLenum light, GLenum pname, GLfixed param)
{
}

void glLightxv(GLenum light, GLenum pname, const GLfixed *params)
{
}

void glLineWidthx(GLfixed width)
{
}

void glLoadIdentity(void)
{
}

void glLoadMatrixx(const GLfixed *m)
{
}

void glLogicOp(GLenum opcode)
{
}

void glMaterialx(GLenum face, GLenum pname, GLfixed param)
{
}

void glMaterialxv(GLenum face, GLenum pname, const GLfixed *param)
{
}

void glMatrixMode(GLenum mode)
{
}

void glMultMatrixx(const GLfixed *m)
{
}

void glMultiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
}

void glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
}

void glNormalPointer(GLenum type, GLsizei stride, const void *pointer)
{
}

void glOrthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
}

void glPixelStorei(GLenum pname, GLint param)
{
}

void glPointParameterx(GLenum pname, GLfixed param)
{
}

void glPointParameterxv(GLenum pname, const GLfixed *params)
{
}

void glPointSizex(GLfixed size)
{
}

void glPolygonOffsetx(GLfixed factor, GLfixed units)
{
}

void glPopMatrix(void)
{
}

void glPushMatrix(void)
{
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels)
{
}

void glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
}

void glSampleCoveragex(GLclampx value, GLboolean invert)
{
}

void glScalex(GLfixed x, GLfixed y, GLfixed z)
{
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glShadeModel(GLenum mode)
{
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
}

void glStencilMask(GLuint mask)
{
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
}

void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
}

void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
}

void glTexEnvx(GLenum target, GLenum pname, GLfixed param)
{
}

void glTexEnviv(GLenum target, GLenum pname, const GLint *params)
{
}

void glTexEnvxv(GLenum target, GLenum pname, const GLfixed *params)
{
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels)
{
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
}

void glTexParameterx(GLenum target, GLenum pname, GLfixed param)
{
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
}

void glTexParameterxv(GLenum target, GLenum pname, const GLfixed *params)
{
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels)
{
}

void glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
}

void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glPointSizePointerOES(GLenum type, GLsizei stride, const void *pointer)
{
}

