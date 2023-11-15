cmake_minimum_required(VERSION 3.26)
project(Colecci_n_de_Ejercicios_STL)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio_1
        "Ejercicio 1/main.cpp"
        "Ejercicio 1/matematicas.cpp"
        "Ejercicio 1/matematicas.h"
        "Ejercicio 1/matematicas.cpp"
)
add_executable (Ejercicio_2
        "Ejercicio 2/main.cpp"
        "Ejercicio 2/triangulo.cpp"
        "Ejercicio 2/triangulo.h"
        "Ejercicio 2/circulo.cpp"
        "Ejercicio 2/circulo.h"
        "Ejercicio 2/rombo.cpp"
        "Ejercicio 2/rombo.h"
        "Ejercicio 2/rectangulo.cpp"
        "Ejercicio 2/rectangulo.h"
        "Ejercicio 2/hexagono.cpp"
        "Ejercicio 2/hexagono.h")
add_executable(Ejercicio_3
        "Ejercicio 3/main.cpp"
        "Ejercicio 3/circulo.cpp"
        "Ejercicio 3/circulo.h"
)
add_executable(Ejercicio_4
        "Ejercicio 4/main.cpp"
        "Ejercicio 4/ciencia.cpp"
        "Ejercicio 4/ciencia.h")


