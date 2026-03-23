cmake_minimum_required(VERSION 3.13)

project(control)
set(CMAKE_CXX_STANDARD 11)

add_executable(control control.cpp)
add_executable(selection selection.cpp)
add_executable(grade grade.cpp)
