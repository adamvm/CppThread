cmake_minimum_required(VERSION 3.5)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(intro)

add_executable(
    intro
    main.cpp
)

target_compile_features(intro PRIVATE cxx_lambda_init_captures)