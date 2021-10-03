cmake_minimum_required(VERSION 3.1)

project(macro-fractal-calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE=Release)

add_executable(macro-fractal-calculator main.cpp main.cpp)

if(UNIX)
        message("UNIX")
endif()
