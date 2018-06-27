# CMakeList.txt : CMake project for CMakeProjectDemo, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(LIBRARY_NAME electricity)
# Add source to this project's executable.
add_library (${LIBRARY_NAME} "voltage.cpp" "voltage.h")

target_include_directories (${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries (${LIBRARY_NAME} calc)