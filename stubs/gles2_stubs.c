/*
 * If not stated otherwise in this file or this component's LICENSE file the
 * following copyright and licenses apply:
 *
 * Copyright 2025 Sky UK
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// This file contains generated function stubs from Khronos OpenGL ES 2 & 3 headers.

// Don't define GL_GLEXT_PROTOTYPES, we don't want to give the false impression the platform implements any of these
// GLES2/3 extensions, instead require clients to use the function pointer approach to get any extensions they want.
// #define GL_GLEXT_PROTOTYPES 1

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#include <GLES3/gl3.h>
#include <GLES3/gl31.h>
#include <GLES3/gl32.h>


void glActiveTexture(GLenum texture)
{
}

void glAttachShader(GLuint program, GLuint shader)
{
}

void glBindAttribLocation(GLuint program, GLuint index, const GLchar *name)
{
}

void glBindBuffer(GLenum target, GLuint buffer)
{
}

void glBindFramebuffer(GLenum target, GLuint framebuffer)
{
}

void glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
}

void glBindTexture(GLenum target, GLuint texture)
{
}

void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
}

void glBlendEquation(GLenum mode)
{
}

void glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
}

void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
}

void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
}

void glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage)
{
}

void glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
{
}

GLenum glCheckFramebufferStatus(GLenum target)
{
   return (GLenum)0;
}

void glClear(GLbitfield mask)
{
}

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
}

void glClearDepthf(GLfloat d)
{
}

void glClearStencil(GLint s)
{
}

void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
}

void glCompileShader(GLuint shader)
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

GLuint glCreateProgram(void)
{
   return (GLuint)0;
}

GLuint glCreateShader(GLenum type)
{
   return (GLuint)0;
}

void glCullFace(GLenum mode)
{
}

void glDeleteBuffers(GLsizei n, const GLuint *buffers)
{
}

void glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers)
{
}

void glDeleteProgram(GLuint program)
{
}

void glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers)
{
}

void glDeleteShader(GLuint shader)
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

void glDepthRangef(GLfloat n, GLfloat f)
{
}

void glDetachShader(GLuint program, GLuint shader)
{
}

void glDisable(GLenum cap)
{
}

void glDisableVertexAttribArray(GLuint index)
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

void glEnableVertexAttribArray(GLuint index)
{
}

void glFinish(void)
{
}

void glFlush(void)
{
}

void glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
}

void glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
}

void glFrontFace(GLenum mode)
{
}

void glGenBuffers(GLsizei n, GLuint *buffers)
{
}

void glGenerateMipmap(GLenum target)
{
}

void glGenFramebuffers(GLsizei n, GLuint *framebuffers)
{
}

void glGenRenderbuffers(GLsizei n, GLuint *renderbuffers)
{
}

void glGenTextures(GLsizei n, GLuint *textures)
{
}

void glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
}

void glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
{
}

void glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders)
{
}

GLint glGetAttribLocation(GLuint program, const GLchar *name)
{
   return (GLint)0;
}

void glGetBooleanv(GLenum pname, GLboolean *data)
{
}

void glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
}

GLenum glGetError(void)
{
   return (GLenum)0;
}

void glGetFloatv(GLenum pname, GLfloat *data)
{
}

void glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params)
{
}

void glGetIntegerv(GLenum pname, GLint *data)
{
}

void glGetProgramiv(GLuint program, GLenum pname, GLint *params)
{
}

void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
}

void glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetShaderiv(GLuint shader, GLenum pname, GLint *params)
{
}

void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
}

void glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision)
{
}

void glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source)
{
}

const GLubyte *glGetString(GLenum name)
{
   return 0;
}

void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
}

void glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetUniformfv(GLuint program, GLint location, GLfloat *params)
{
}

void glGetUniformiv(GLuint program, GLint location, GLint *params)
{
}

GLint glGetUniformLocation(GLuint program, const GLchar *name)
{
   return (GLint)0;
}

void glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params)
{
}

void glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params)
{
}

void glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer)
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

GLboolean glIsFramebuffer(GLuint framebuffer)
{
   return (GLboolean)0;
}

GLboolean glIsProgram(GLuint program)
{
   return (GLboolean)0;
}

GLboolean glIsRenderbuffer(GLuint renderbuffer)
{
   return (GLboolean)0;
}

GLboolean glIsShader(GLuint shader)
{
   return (GLboolean)0;
}

GLboolean glIsTexture(GLuint texture)
{
   return (GLboolean)0;
}

void glLineWidth(GLfloat width)
{
}

void glLinkProgram(GLuint program)
{
}

void glPixelStorei(GLenum pname, GLint param)
{
}

void glPolygonOffset(GLfloat factor, GLfloat units)
{
}

void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels)
{
}

void glReleaseShaderCompiler(void)
{
}

void glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glSampleCoverage(GLfloat value, GLboolean invert)
{
}

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryFormat, const void *binary, GLsizei length)
{
}

void glShaderSource(GLuint shader, GLsizei count, const GLchar * const *string, const GLint *length)
{
}

void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
}

void glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
}

void glStencilMask(GLuint mask)
{
}

void glStencilMaskSeparate(GLenum face, GLuint mask)
{
}

void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
}

void glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
}

void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels)
{
}

void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
}

void glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
}

void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
}

void glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
}

void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels)
{
}

void glUniform1f(GLint location, GLfloat v0)
{
}

void glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
{
}

void glUniform1i(GLint location, GLint v0)
{
}

void glUniform1iv(GLint location, GLsizei count, const GLint *value)
{
}

void glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
}

void glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
{
}

void glUniform2i(GLint location, GLint v0, GLint v1)
{
}

void glUniform2iv(GLint location, GLsizei count, const GLint *value)
{
}

void glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
}

void glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
{
}

void glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
}

void glUniform3iv(GLint location, GLsizei count, const GLint *value)
{
}

void glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
}

void glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
{
}

void glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
}

void glUniform4iv(GLint location, GLsizei count, const GLint *value)
{
}

void glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUseProgram(GLuint program)
{
}

void glValidateProgram(GLuint program)
{
}

void glVertexAttrib1f(GLuint index, GLfloat x)
{
}

void glVertexAttrib1fv(GLuint index, const GLfloat *v)
{
}

void glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
}

void glVertexAttrib2fv(GLuint index, const GLfloat *v)
{
}

void glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
}

void glVertexAttrib3fv(GLuint index, const GLfloat *v)
{
}

void glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
}

void glVertexAttrib4fv(GLuint index, const GLfloat *v)
{
}

void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer)
{
}

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glReadBuffer(GLenum src)
{
}

void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices)
{
}

void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels)
{
}

void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels)
{
}

void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data)
{
}

void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data)
{
}

void glGenQueries(GLsizei n, GLuint *ids)
{
}

void glDeleteQueries(GLsizei n, const GLuint *ids)
{
}

GLboolean glIsQuery(GLuint id)
{
   return (GLboolean)0;
}

void glBeginQuery(GLenum target, GLuint id)
{
}

void glEndQuery(GLenum target)
{
}

void glGetQueryiv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
}

GLboolean glUnmapBuffer(GLenum target)
{
   return (GLboolean)0;
}

void glGetBufferPointerv(GLenum target, GLenum pname, void **params)
{
}

void glDrawBuffers(GLsizei n, const GLenum *bufs)
{
}

void glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
}

void glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
}

void *glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
   return 0;
}

void glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
}

void glBindVertexArray(GLuint array)
{
}

void glDeleteVertexArrays(GLsizei n, const GLuint *arrays)
{
}

void glGenVertexArrays(GLsizei n, GLuint *arrays)
{
}

GLboolean glIsVertexArray(GLuint array)
{
   return (GLboolean)0;
}

void glGetIntegeri_v(GLenum target, GLuint index, GLint *data)
{
}

void glBeginTransformFeedback(GLenum primitiveMode)
{
}

void glEndTransformFeedback(void)
{
}

void glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
}

void glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
}

void glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar * const *varyings, GLenum bufferMode)
{
}

void glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name)
{
}

void glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer)
{
}

void glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params)
{
}

void glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params)
{
}

void glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
}

void glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
}

void glVertexAttribI4iv(GLuint index, const GLint *v)
{
}

void glVertexAttribI4uiv(GLuint index, const GLuint *v)
{
}

void glGetUniformuiv(GLuint program, GLint location, GLuint *params)
{
}

GLint glGetFragDataLocation(GLuint program, const GLchar *name)
{
   return (GLint)0;
}

void glUniform1ui(GLint location, GLuint v0)
{
}

void glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
}

void glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
}

void glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
}

void glUniform1uiv(GLint location, GLsizei count, const GLuint *value)
{
}

void glUniform2uiv(GLint location, GLsizei count, const GLuint *value)
{
}

void glUniform3uiv(GLint location, GLsizei count, const GLuint *value)
{
}

void glUniform4uiv(GLint location, GLsizei count, const GLuint *value)
{
}

void glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value)
{
}

void glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value)
{
}

void glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value)
{
}

void glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
}

const GLubyte *glGetStringi(GLenum name, GLuint index)
{
   return 0;
}

void glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
}

void glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar * const *uniformNames, GLuint *uniformIndices)
{
}

void glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params)
{
}

GLuint glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName)
{
   return (GLuint)0;
}

void glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params)
{
}

void glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName)
{
}

void glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
}

void glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount)
{
}

void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount)
{
}

GLsync glFenceSync(GLenum condition, GLbitfield flags)
{
   return (GLsync)0;
}

GLboolean glIsSync(GLsync sync)
{
   return (GLboolean)0;
}

void glDeleteSync(GLsync sync)
{
}

GLenum glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
   return (GLenum)0;
}

void glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
}

void glGetInteger64v(GLenum pname, GLint64 *data)
{
}

void glGetSynciv(GLsync sync, GLenum pname, GLsizei count, GLsizei *length, GLint *values)
{
}

void glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data)
{
}

void glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params)
{
}

void glGenSamplers(GLsizei count, GLuint *samplers)
{
}

void glDeleteSamplers(GLsizei count, const GLuint *samplers)
{
}

GLboolean glIsSampler(GLuint sampler)
{
   return (GLboolean)0;
}

void glBindSampler(GLuint unit, GLuint sampler)
{
}

void glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
}

void glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param)
{
}

void glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
}

void glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param)
{
}

void glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params)
{
}

void glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params)
{
}

void glVertexAttribDivisor(GLuint index, GLuint divisor)
{
}

void glBindTransformFeedback(GLenum target, GLuint id)
{
}

void glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids)
{
}

void glGenTransformFeedbacks(GLsizei n, GLuint *ids)
{
}

GLboolean glIsTransformFeedback(GLuint id)
{
   return (GLboolean)0;
}

void glPauseTransformFeedback(void)
{
}

void glResumeTransformFeedback(void)
{
}

void glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary)
{
}

void glProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length)
{
}

void glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
}

void glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments)
{
}

void glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
}

void glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
}

void glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei count, GLint *params)
{
}

void glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
}

void glDispatchComputeIndirect(GLintptr indirect)
{
}

void glDrawArraysIndirect(GLenum mode, const void *indirect)
{
}

void glDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect)
{
}

void glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
}

void glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params)
{
}

GLuint glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar *name)
{
   return (GLuint)0;
}

void glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name)
{
}

void glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params)
{
}

GLint glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar *name)
{
   return (GLint)0;
}

void glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
}

void glActiveShaderProgram(GLuint pipeline, GLuint program)
{
}

GLuint glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar * const *strings)
{
   return (GLuint)0;
}

void glBindProgramPipeline(GLuint pipeline)
{
}

void glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines)
{
}

void glGenProgramPipelines(GLsizei n, GLuint *pipelines)
{
}

GLboolean glIsProgramPipeline(GLuint pipeline)
{
   return (GLboolean)0;
}

void glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params)
{
}

void glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
}

void glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
}

void glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
}

void glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
}

void glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
}

void glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
}

void glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
}

void glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
}

void glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
}

void glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
}

void glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
}

void glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
}

void glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
}

void glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
}

void glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
}

void glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value)
{
}

void glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
}

void glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
}

void glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
}

void glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value)
{
}

void glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
}

void glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
}

void glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
}

void glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value)
{
}

void glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
{
}

void glValidateProgramPipeline(GLuint pipeline)
{
}

void glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog)
{
}

void glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
}

void glGetBooleani_v(GLenum target, GLuint index, GLboolean *data)
{
}

void glMemoryBarrier(GLbitfield barriers)
{
}

void glMemoryBarrierByRegion(GLbitfield barriers)
{
}

void glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
}

void glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val)
{
}

void glSampleMaski(GLuint maskNumber, GLbitfield mask)
{
}

void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params)
{
}

void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params)
{
}

void glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
}

void glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
}

void glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
}

void glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
}

void glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
}

void glBlendBarrier(void)
{
}

void glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
}

void glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled)
{
}

void glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf)
{
}

void glDebugMessageCallback(GLDEBUGPROC callback, const void *userParam)
{
}

GLuint glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog)
{
   return (GLuint)0;
}

void glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar *message)
{
}

void glPopDebugGroup(void)
{
}

void glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar *label)
{
}

void glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label)
{
}

void glObjectPtrLabel(const void *ptr, GLsizei length, const GLchar *label)
{
}

void glGetObjectPtrLabel(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label)
{
}

void glGetPointerv(GLenum pname, void **params)
{
}

void glEnablei(GLenum target, GLuint index)
{
}

void glDisablei(GLenum target, GLuint index)
{
}

void glBlendEquationi(GLuint buf, GLenum mode)
{
}

void glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
}

void glBlendFunci(GLuint buf, GLenum src, GLenum dst)
{
}

void glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
}

void glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
}

GLboolean glIsEnabledi(GLenum target, GLuint index)
{
   return (GLboolean)0;
}

void glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex)
{
}

void glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex)
{
}

void glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex)
{
}

void glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
}

void glPrimitiveBoundingBox(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
}

GLenum glGetGraphicsResetStatus(void)
{
   return (GLenum)0;
}

void glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data)
{
}

void glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat *params)
{
}

void glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint *params)
{
}

void glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint *params)
{
}

void glMinSampleShading(GLfloat value)
{
}

void glPatchParameteri(GLenum pname, GLint value)
{
}

void glTexParameterIiv(GLenum target, GLenum pname, const GLint *params)
{
}

void glTexParameterIuiv(GLenum target, GLenum pname, const GLuint *params)
{
}

void glGetTexParameterIiv(GLenum target, GLenum pname, GLint *params)
{
}

void glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint *params)
{
}

void glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *param)
{
}

void glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *param)
{
}

void glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params)
{
}

void glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint *params)
{
}

void glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer)
{
}

void glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
}

void glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
}

