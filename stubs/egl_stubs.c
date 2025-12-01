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

// This file contains generated function stubs from Khronos EGL headers.

// Don't define EGL_EGLEXT_PROTOTYPES, we don't want to give the false impression the platform implements any of these
// EGL extensions, instead require clients to use the function pointer approach to get any extensions they want.
// #define EGL_EGLEXT_PROTOTYPES

#include <EGL/egl.h>
#include <EGL/eglext.h>

EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config)
{
   return (EGLBoolean)0;
}

EGLBoolean eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target)
{
   return (EGLBoolean)0;
}

EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list)
{
   return (EGLContext)0;
}

EGLSurface eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list)
{
   return (EGLSurface)0;
}

EGLSurface eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list)
{
   return (EGLSurface)0;
}

EGLSurface eglCreateWindowSurface(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list)
{
   return (EGLSurface)0;
}

EGLBoolean eglDestroyContext(EGLDisplay dpy, EGLContext ctx)
{
   return (EGLBoolean)0;
}

EGLBoolean eglDestroySurface(EGLDisplay dpy, EGLSurface surface)
{
   return (EGLBoolean)0;
}

EGLBoolean eglGetConfigAttrib(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value)
{
   return (EGLBoolean)0;
}

EGLBoolean eglGetConfigs(EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config)
{
   return (EGLBoolean)0;
}

EGLDisplay eglGetCurrentDisplay(void)
{
   return (EGLDisplay)0;
}

EGLSurface eglGetCurrentSurface(EGLint readdraw)
{
   return (EGLSurface)0;
}

EGLDisplay eglGetDisplay(EGLNativeDisplayType display_id)
{
   return (EGLDisplay)0;
}

EGLint eglGetError(void)
{
   return (EGLint)0;
}

__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char *procname)
{
   return (__eglMustCastToProperFunctionPointerType)0;
}

EGLBoolean eglInitialize(EGLDisplay dpy, EGLint *major, EGLint *minor)
{
   return (EGLBoolean)0;
}

EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx)
{
   return (EGLBoolean)0;
}

EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value)
{
   return (EGLBoolean)0;
}

const char *eglQueryString(EGLDisplay dpy, EGLint name)
{
   return 0;
}

EGLBoolean eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value)
{
   return (EGLBoolean)0;
}

EGLBoolean eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
   return (EGLBoolean)0;
}

EGLBoolean eglTerminate(EGLDisplay dpy)
{
   return (EGLBoolean)0;
}

EGLBoolean eglWaitGL(void)
{
   return (EGLBoolean)0;
}

EGLBoolean eglWaitNative(EGLint engine)
{
   return (EGLBoolean)0;
}

EGLBoolean eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
   return (EGLBoolean)0;
}

EGLBoolean eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
   return (EGLBoolean)0;
}

EGLBoolean eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
   return (EGLBoolean)0;
}

EGLBoolean eglSwapInterval(EGLDisplay dpy, EGLint interval)
{
   return (EGLBoolean)0;
}

EGLBoolean eglBindAPI(EGLenum api)
{
   return (EGLBoolean)0;
}

EGLenum eglQueryAPI(void)
{
   return (EGLenum)0;
}

EGLSurface eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list)
{
   return (EGLSurface)0;
}

EGLBoolean eglReleaseThread(void)
{
   return (EGLBoolean)0;
}

EGLBoolean eglWaitClient(void)
{
   return (EGLBoolean)0;
}

EGLContext eglGetCurrentContext(void)
{
   return (EGLContext)0;
}

EGLSync eglCreateSync(EGLDisplay dpy, EGLenum type, const EGLAttrib *attrib_list)
{
   return (EGLSync)0;
}

EGLBoolean eglDestroySync(EGLDisplay dpy, EGLSync sync)
{
   return (EGLBoolean)0;
}

EGLint eglClientWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
   return (EGLint)0;
}

EGLBoolean eglGetSyncAttrib(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLAttrib *value)
{
   return (EGLBoolean)0;
}

EGLImage eglCreateImage(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLAttrib *attrib_list)
{
   return (EGLImage)0;
}

EGLBoolean eglDestroyImage(EGLDisplay dpy, EGLImage image)
{
   return (EGLBoolean)0;
}

EGLDisplay eglGetPlatformDisplay(EGLenum platform, void *native_display, const EGLAttrib *attrib_list)
{
   return (EGLDisplay)0;
}

EGLSurface eglCreatePlatformWindowSurface(EGLDisplay dpy, EGLConfig config, void *native_window, const EGLAttrib *attrib_list)
{
   return (EGLSurface)0;
}

EGLSurface eglCreatePlatformPixmapSurface(EGLDisplay dpy, EGLConfig config, void *native_pixmap, const EGLAttrib *attrib_list)
{
   return (EGLSurface)0;
}

EGLBoolean eglWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags)
{
   return (EGLBoolean)0;
}

