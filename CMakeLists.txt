cmake_minimum_required(VERSION 3.29)
project(Flujo_C__Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

include_directories("ejercicio 1")

add_executable(Flujo_C__Roberto_Cardenas
    "ejercicio 1/Matematicas.cpp"
    "ejercicio 1/Matematicas.h"
    main.cpp
        "ejercicio 2/Circulo.cpp"
        "ejercicio 2/Triangulo.cpp"
        "ejercicio 3/Geometria2.cpp")
