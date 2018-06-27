# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProjectDemo")

# Include sub-projects.
add_subdirectory ("CMakeProjectDemo")
add_subdirectory ("calc")
add_subdirectory ("electronics")
