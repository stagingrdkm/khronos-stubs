// SPDX-License-Identifier: Apache-2.0

// Don't define GL_GLEXT_PROTOTYPES, we don't want to give the false impression the platform implements any of these
// GLES extensions, instead require clients to use the function pointer approach to get any extensions they want.
// #define GL_GLEXT_PROTOTYPES 1

#include <GLES/gl.h>
#include <GLES/glext.h>

