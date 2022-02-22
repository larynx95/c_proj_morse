cmake_minimum_required(VERSION 3.14.5)
project(morse)
add_executable(morse main.c code.c)
target_link_libraries(morse winmm)