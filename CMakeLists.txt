cmake_minimum_required(VERSION 4.0)
project(C_calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(C_calculator
        calculate_results.c
        calculate_results.h
        main.c)
