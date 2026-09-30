cmake_minimum_required(VERSION 3.25)
project(movie_system)

set(CMAKE_CXX_STANDARD 17)

# 这行就是告诉 CLion 把 main.cpp 编译成一个叫做 movie_system 的可执行程序
add_executable(movie_system main.cpp main.h)