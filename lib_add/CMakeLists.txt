
cmake_minimum_required(VERSION 3.10)
project(lib_add)

set(CMAKE_CXX_STANDARD 11)

add_library(lib_add SHARED demo_add.cpp demo_add.h) 
