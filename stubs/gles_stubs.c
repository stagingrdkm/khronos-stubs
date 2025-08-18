// SPDX-License-Identifier: Apache-2.0

#define GL_GLEXT_PROTOTYPES 1

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

void glEGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
}

void glEGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
}

void glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha)
{
}

void glBlendFuncSeparateOES(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
}

void glBlendEquationOES(GLenum mode)
{
}

void glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{
}

void glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
{
}

void glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{
}

void glDrawTexsvOES(const GLshort *coords)
{
}

void glDrawTexivOES(const GLint *coords)
{
}

void glDrawTexxvOES(const GLfixed *coords)
{
}

void glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
}

void glDrawTexfvOES(const GLfloat *coords)
{
}

void glAlphaFuncxOES(GLenum func, GLfixed ref)
{
}

void glClearColorxOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
}

void glClearDepthxOES(GLfixed depth)
{
}

void glClipPlanexOES(GLenum plane, const GLfixed *equation)
{
}

void glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
}

void glDepthRangexOES(GLfixed n, GLfixed f)
{
}

void glFogxOES(GLenum pname, GLfixed param)
{
}

void glFogxvOES(GLenum pname, const GLfixed *param)
{
}

void glFrustumxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
}

void glGetClipPlanexOES(GLenum plane, GLfixed *equation)
{
}

void glGetFixedvOES(GLenum pname, GLfixed *params)
{
}

void glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed *params)
{
}

void glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed *params)
{
}

void glLightModelxOES(GLenum pname, GLfixed param)
{
}

void glLightModelxvOES(GLenum pname, const GLfixed *param)
{
}

void glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
}

void glLightxvOES(GLenum light, GLenum pname, const GLfixed *params)
{
}

void glLineWidthxOES(GLfixed width)
{
}

void glLoadMatrixxOES(const GLfixed *m)
{
}

void glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
}

void glMaterialxvOES(GLenum face, GLenum pname, const GLfixed *param)
{
}

void glMultMatrixxOES(const GLfixed *m)
{
}

void glMultiTexCoord4xOES(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
}

void glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
}

void glOrthoxOES(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f)
{
}

void glPointParameterxvOES(GLenum pname, const GLfixed *params)
{
}

void glPointSizexOES(GLfixed size)
{
}

void glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
}

void glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
}

void glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
}

void glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
}

void glTexEnvxvOES(GLenum target, GLenum pname, const GLfixed *params)
{
}

void glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
}

void glTexParameterxvOES(GLenum target, GLenum pname, const GLfixed *params)
{
}

void glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
}

void glGetLightxvOES(GLenum light, GLenum pname, GLfixed *params)
{
}

void glGetMaterialxvOES(GLenum face, GLenum pname, GLfixed *params)
{
}

void glPointParameterxOES(GLenum pname, GLfixed param)
{
}

void glSampleCoveragexOES(GLclampx value, GLboolean invert)
{
}

void glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed *params)
{
}

void glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
}

void glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed *params)
{
}

GLboolean glIsRenderbufferOES(GLuint renderbuffer)
{
   return (GLboolean)0;
}

void glBindRenderbufferOES(GLenum target, GLuint renderbuffer)
{
}

void glDeleteRenderbuffersOES(GLsizei n, const GLuint *renderbuffers)
{
}

void glGenRenderbuffersOES(GLsizei n, GLuint *renderbuffers)
{
}

void glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint *params)
{
}

GLboolean glIsFramebufferOES(GLuint framebuffer)
{
   return (GLboolean)0;
}

void glBindFramebufferOES(GLenum target, GLuint framebuffer)
{
}

void glDeleteFramebuffersOES(GLsizei n, const GLuint *framebuffers)
{
}

void glGenFramebuffersOES(GLsizei n, GLuint *framebuffers)
{
}

GLenum glCheckFramebufferStatusOES(GLenum target)
{
   return (GLenum)0;
}

void glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
}

void glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
}

void glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint *params)
{
}

void glGenerateMipmapOES(GLenum target)
{
}

GLboolean glUnmapBufferOES(GLenum target)
{
   return (GLboolean)0;
}

void glGetBufferPointervOES(GLenum target, GLenum pname, void **params)
{
}

void glCurrentPaletteMatrixOES(GLuint matrixpaletteindex)
{
}

void glLoadPaletteFromModelViewMatrixOES(void)
{
}

void glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
}

void glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const void *pointer)
{
}

GLbitfield glQueryMatrixxOES(GLfixed *mantissa, GLint *exponent)
{
   return (GLbitfield)0;
}

void glClearDepthfOES(GLclampf depth)
{
}

void glClipPlanefOES(GLenum plane, const GLfloat *equation)
{
}

void glDepthRangefOES(GLclampf n, GLclampf f)
{
}

void glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
}

void glGetClipPlanefOES(GLenum plane, GLfloat *equation)
{
}

void glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
}

void glTexGenfOES(GLenum coord, GLenum pname, GLfloat param)
{
}

void glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat *params)
{
}

void glTexGeniOES(GLenum coord, GLenum pname, GLint param)
{
}

void glTexGenivOES(GLenum coord, GLenum pname, const GLint *params)
{
}

void glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat *params)
{
}

void glGetTexGenivOES(GLenum coord, GLenum pname, GLint *params)
{
}

void glBindVertexArrayOES(GLuint array)
{
}

void glDeleteVertexArraysOES(GLsizei n, const GLuint *arrays)
{
}

void glGenVertexArraysOES(GLsizei n, GLuint *arrays)
{
}

GLboolean glIsVertexArrayOES(GLuint array)
{
   return (GLboolean)0;
}

void glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
}

void glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glResolveMultisampleFramebufferAPPLE(void)
{
}

GLsync glFenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
   return (GLsync)0;
}

GLboolean glIsSyncAPPLE(GLsync sync)
{
   return (GLboolean)0;
}

void glDeleteSyncAPPLE(GLsync sync)
{
}

GLenum glClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
   return (GLenum)0;
}

void glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
}

void glGetInteger64vAPPLE(GLenum pname, GLint64 *params)
{
}

void glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values)
{
}

void glInsertEventMarkerEXT(GLsizei length, const GLchar *marker)
{
}

void glPushGroupMarkerEXT(GLsizei length, const GLchar *marker)
{
}

void glPopGroupMarkerEXT(void)
{
}

void glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum *attachments)
{
}

void glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
}

void glMultiDrawArraysEXT(GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount)
{
}

void glMultiDrawElementsEXT(GLenum mode, const GLsizei *count, GLenum type, const void * const *indices, GLsizei primcount)
{
}

void glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
}

GLenum glGetGraphicsResetStatusEXT(void)
{
   return (GLenum)0;
}

void glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data)
{
}

void glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat *params)
{
}

void glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint *params)
{
}

void glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
}

void glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
}

void glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
}

void glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
}

void glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
}

void glClipPlanefIMG(GLenum p, const GLfloat *eqn)
{
}

void glClipPlanexIMG(GLenum p, const GLfixed *eqn)
{
}

void glDeleteFencesNV(GLsizei n, const GLuint *fences)
{
}

void glGenFencesNV(GLsizei n, GLuint *fences)
{
}

GLboolean glIsFenceNV(GLuint fence)
{
   return (GLboolean)0;
}

GLboolean glTestFenceNV(GLuint fence)
{
   return (GLboolean)0;
}

void glGetFenceivNV(GLuint fence, GLenum pname, GLint *params)
{
}

void glFinishFenceNV(GLuint fence)
{
}

void glSetFenceNV(GLuint fence, GLenum condition)
{
}

void glGetDriverControlsQCOM(GLint *num, GLsizei size, GLuint *driverControls)
{
}

void glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei *length, GLchar *driverControlString)
{
}

void glEnableDriverControlQCOM(GLuint driverControl)
{
}

void glDisableDriverControlQCOM(GLuint driverControl)
{
}

void glExtGetTexturesQCOM(GLuint *textures, GLint maxTextures, GLint *numTextures)
{
}

void glExtGetBuffersQCOM(GLuint *buffers, GLint maxBuffers, GLint *numBuffers)
{
}

void glExtGetRenderbuffersQCOM(GLuint *renderbuffers, GLint maxRenderbuffers, GLint *numRenderbuffers)
{
}

void glExtGetFramebuffersQCOM(GLuint *framebuffers, GLint maxFramebuffers, GLint *numFramebuffers)
{
}

void glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint *params)
{
}

void glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
}

void glExtGetTexSubImageQCOM(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void *texels)
{
}

void glExtGetBufferPointervQCOM(GLenum target, void **params)
{
}

void glExtGetShadersQCOM(GLuint *shaders, GLint maxShaders, GLint *numShaders)
{
}

void glExtGetProgramsQCOM(GLuint *programs, GLint maxPrograms, GLint *numPrograms)
{
}

GLboolean glExtIsProgramBinaryQCOM(GLuint program)
{
   return (GLboolean)0;
}

void glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar *source, GLint *length)
{
}

void glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
}

void glEndTilingQCOM(GLbitfield preserveMask)
{
}

