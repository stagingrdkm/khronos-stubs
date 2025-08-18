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