cmake_minimum_required(VERSION 3.7.0)
project(cppchallenger)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -fexceptions -g -Wall")

include_directories(include)
include_directories(boost-cmake/boost/boost_1_64_0)

add_subdirectory(boost-cmake)

add_subdirectory(chapter_01/problem_01)
add_subdirectory(chapter_01/problem_02)
add_subdirectory(chapter_01/problem_03)
