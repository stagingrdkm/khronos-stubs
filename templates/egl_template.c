// SPDX-License-Identifier: Apache-2.0

// Don't define EGL_EGLEXT_PROTOTYPES, we don't want to give the false impression the platform implements any of these
// EGL extensions, instead require clients to use the function pointer approach to get any extensions they want.
// #define EGL_EGLEXT_PROTOTYPES

#include <EGL/egl.h>
#include <EGL/eglext.h>

