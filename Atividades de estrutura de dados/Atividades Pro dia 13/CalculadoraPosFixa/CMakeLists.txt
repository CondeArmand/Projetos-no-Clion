cmake_minimum_required(VERSION 3.23)
project(CalculadoraPosFixa C)

set(CMAKE_C_STANDARD 99)

add_executable(CalculadoraPosFixa main.c CalculadoraPF.c CalculadoraPF.h)
