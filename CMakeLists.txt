cmake_minimum_required(VERSION 3.28)
project(advanced_C C)

# Specify the C standard
set(CMAKE_C_STANDARD 11)

# Add the main executable
add_executable(advanced_C
        main.c
        storage-class-chall/display.c
)

# Add the executable for the storage-class-chall directory
add_executable(storage_class_chall
        storage-class-chall/main.c
        storage-class-chall/util.c
)
