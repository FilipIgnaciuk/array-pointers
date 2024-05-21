cmake_minimum_required(VERSION 3.27)
project(array_pointer)

set(CMAKE_CXX_STANDARD 17)

add_executable(array_pointer main.cpp
        array.cpp
        array.h)
