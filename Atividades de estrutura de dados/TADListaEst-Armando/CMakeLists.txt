cmake_minimum_required(VERSION 3.23)
project(TADListaEst C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(TADListaEst
        lista.c
        lista.h
        prog.c)
