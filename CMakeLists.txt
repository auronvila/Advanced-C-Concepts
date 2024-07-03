cmake_minimum_required(VERSION 3.28)
project(advanced_C C)

set(CMAKE_C_STANDARD 11)

add_executable(advanced_C main.c
        header.c
)
