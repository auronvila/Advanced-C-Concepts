cmake_minimum_required(VERSION 3.28)
project(advanced_C C)

# Specify the C standard
set(CMAKE_C_STANDARD 11)

# Add executables
add_executable(advanced_C
        main.c
        header.c
        storage-class-chall/main.c
)
