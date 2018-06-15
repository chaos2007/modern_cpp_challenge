cmake_minimum_required(VERSION 3.7.0)
project(cppchallenger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -fexceptions -g -Wall")

include_directories(include)

add_subdirectory(chapter_01/problem_01)
