cmake_minimum_required(VERSION 3.29)
project(AXorPlus)

set(CMAKE_CXX_STANDARD 20)

add_executable(AXorPlus src/main.cpp
        src/AXorPlus.cpp
        inc/AXorPlus.h)
