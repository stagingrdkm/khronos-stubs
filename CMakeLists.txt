# If not stated otherwise in this file or this component's LICENSE file the
# following copyright and licenses apply:
#
# Copyright 2025 Sky
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.10)
project(KhronosStubs C)

include_directories(include)

add_compile_options(-Wno-unused-parameter)

# Stub EGL library
add_library(EGL SHARED stubs/egl_stubs.c)
set_target_properties(EGL PROPERTIES VERSION 1 SOVERSION 1)

# Stub OpenGLESv1 library
add_library(GLESv1_CM SHARED stubs/gles_stubs.c)
set_target_properties(GLESv1_CM PROPERTIES VERSION 1 SOVERSION 1)

# Stub OpenGLES 2.x and 3.x library
add_library(GLESv2 SHARED stubs/gles2_stubs.c)
set_target_properties(GLESv2 PROPERTIES VERSION 2 SOVERSION 2)



# Install the header files
install(
        DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/include/"
        DESTINATION "include"
        FILES_MATCHING PATTERN "*.h"
)

# Install the library files
install(
        TARGETS EGL GLESv1_CM GLESv2
        LIBRARY DESTINATION "lib"
)

# Install the pkgconfig files
install(
        FILES "${CMAKE_CURRENT_SOURCE_DIR}/share/pkgconfig/egl.pc"
              "${CMAKE_CURRENT_SOURCE_DIR}/share/pkgconfig/glesv2.pc"
              "${CMAKE_CURRENT_SOURCE_DIR}/share/pkgconfig/glesv1_cm.pc"
        DESTINATION "lib/pkgconfig"
)

# TODO: Install a FindXXX.cmake files