cmake_minimum_required(VERSION 3.29)
project(AXorPlus)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
add_executable(AXorPlus src/main.cpp
        src/AXorPlus.cpp
        include/AXorPlus.h
)
