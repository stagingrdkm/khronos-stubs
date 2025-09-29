// SPDX-License-Identifier: Apache-2.0

// Don't define GL_GLEXT_PROTOTYPES, we don't want to give the false impression the platform implements any of these
// GLES2/3 extensions, instead require clients to use the function pointer approach to get any extensions they want.
// #define GL_GLEXT_PROTOTYPES 1

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#include <GLES3/gl3.h>
#include <GLES3/gl31.h>
#include <GLES3/gl32.h>


