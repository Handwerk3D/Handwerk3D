# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("Handwerk3D")

# Include sub-projects.
add_subdirectory ("MathEngine")
target_include_directories(MathEngine PRIVATE "MathEngine/include")
target_include_directories(MathEngine PRIVATE "MathEngine/src")
