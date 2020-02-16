# CMakeList.txt : CMake project for MathEngine, include source and define
# project specific logic here.
#

cmake_minimum_required (VERSION 3.8)

# project info
project (MathEngine VERSION 0.0.0)

# Add source to this project's executable.
add_library (MathEngine SHARED src/Vector3.cpp)

# TODO: Add tests and install targets if needed.
