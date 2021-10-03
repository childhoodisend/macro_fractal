cmake_minimum_required(VERSION 3.1)

project(macro-fractal-calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(LD_LIBRARY_PATH = "")

find_package(Boost 1.65.1 COMPONENTS filesystem REQUIRED )
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})


add_executable(macro-fractal-calculator main.cpp)
target_link_libraries(macro-fractal-calculator PUBLIC ${Boost_LIBRARIES})