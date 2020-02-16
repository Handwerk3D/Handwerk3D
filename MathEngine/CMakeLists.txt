# CMakeList.txt : CMake project for MathEngine, include source and define
# project specific logic here.
#

cmake_minimum_required (VERSION 3.9)
target_include_directories(Handwerk3D PRIVATE MathEngine/include)
target_include_directories(Handwerk3D PRIVATE MathEngine/src)
target_sources(Handwerk3D PRIVATE "MathEngine/src/Vector3.cpp")
