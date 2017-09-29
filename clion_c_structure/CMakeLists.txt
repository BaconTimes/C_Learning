cmake_minimum_required(VERSION 3.8)
project(clion_c_structure)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c list.c list.h)
add_executable(clion_c_structure ${SOURCE_FILES})