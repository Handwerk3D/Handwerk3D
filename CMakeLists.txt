# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.9)

project ("Handwerk3D")

# generate dummy file
file(WRITE dummy.cpp)

# generate build
add_library ("Handwerk3D" SHARED "dummy.cpp")

# Include sub-projects.
include ("MathEngine/CMakeLists.txt")