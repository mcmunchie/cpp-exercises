cmake_minimum_required(VERSION 3.21)
project(small_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(small_project main.cpp Friend.cpp Person.cpp Friend.h Person.h)
