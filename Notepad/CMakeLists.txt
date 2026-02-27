cmake_minimum_required(VERSION 4.1)
project(Notepad)

set(CMAKE_CXX_STANDARD 20)

add_executable(Notepad main.cpp
        test.c
        run.c)
