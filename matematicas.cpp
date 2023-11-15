//
// Created by nicol on 15/11/2023.
//
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


namespace Matematicas {
    int suma(int a , int b){
        return a + b;
    }
    int resta(int a , int b){
        return a - b;
    }
    int multiplicacion(int a , int b){
        return a * b;
    }
    double division(int a , int b){
        return static_cast<double>(a) / b;
    }
    double raizCuadrada(int a){
        return sqrt(a);
    }
    double potencia(int a , int b){
        return pow(a,b);
    }
    double logaritmo(int a){
        return log(a);
    }

};
