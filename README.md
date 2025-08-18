# EGL / OpenGL ES Stub Libraries

This repo contains the standardised khronos headers for EGL and OpenGL ES 1.x, 2.x and 3.x.  From these headers
stub libraries are generated for use in the "App SDK".  This allows clients to build and link against the stub
library(s) without needing to have the actual EGL or OpenGL ES libraries installed on their system.

At runtime the stub libraries will be replaced with the actual EGL and OpenGL ES libraries, so clients can use
the same code to build and run on any platform that supports EGL and OpenGL ES.

### Headers
The headers are sourced from the official Khronos repositories:
* [Khronos EGL Registry](https://registry.khronos.org/EGL/)
* [Khronos OpenGL ES Registry](https://registry.khronos.org/OpenGL/index_es.php#headers)

### Libraries
The libraries are named and versioned according to [2.1.2.2. Naming](https://registry.khronos.org/implementers_guide.html#libnames)
and therefore follow the pattern `libEGL.so`, `libGLESv1_CM.so` and `libGLESv2.so` for the respective libraries.

### Build
The libraries are built using the `CMake` build system.  To build the libraries, run the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

### Stub Generation
The stub libraries are generated using the `genstubs.py` script.  This script will (re)generate the source code in the
stubs directory, which can then be built using the `CMake` build system.

