
cmake_minimum_required(VERSION 3.10)
project(cpp_demo)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib_add)
add_executable(cpp_demo main.cpp)  #生成一个可执行的文件

target_link_libraries(cpp_demo lib_add)
