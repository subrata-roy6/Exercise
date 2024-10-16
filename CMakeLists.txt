cmake_minimum_required(VERSION 3.29)
project(Exercise C)

set(CMAKE_C_STANDARD 11)

add_executable(Exercise main.c
        Problem1.c
        Problem2.c
        Problem3.c
        problem4.c
        Problem5.c
        Problem6.c
        Problem7.c)
add_executable(Problem1 Problem1.c)
add_executable(Problem2 Problem2.c)
add_executable(Problem3 Problem3.c)
add_executable(Problem4 Problem4.c)
add_executable(Problem5 Problem5.c)
add_executable(Problem6 Problem6.c)
add_executable(Problem7 Problem7.c)

