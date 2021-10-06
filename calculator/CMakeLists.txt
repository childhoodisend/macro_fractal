cmake_minimum_required(VERSION 3.1)

project(macro-fractal-calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")
set(LD_LIBRARY_PATH = "")

find_package(Boost 1.71.0 COMPONENTS filesystem REQUIRED )
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

include_directories(executors)

add_executable(macro-fractal-calculator main.cpp

        calc_params.h
        base_calculator.cpp base_calculator.h
        executors/mandelbrot_calculator.cpp executors/mandelbrot_calculator.h)

target_link_libraries(macro-fractal-calculator PUBLIC ${Boost_LIBRARIES})