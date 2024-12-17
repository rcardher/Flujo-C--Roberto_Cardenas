//
// Created by Roberto C on 17/12/24.
//
#include <iostream>
#include "Matematicas.h"

int main() {
    int num1, num2;

    std::cout << "Ejercicio 1: Utilización de un espacio de nombres 'Matemáticas'\n";
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    // Uso de las funciones del espacio de nombres Matematicas
    std::cout << "La suma de los números es: " << Matematicas::suma(num1, num2) << std::endl;
    std::cout << "La resta de los números es: " << Matematicas::resta(num1, num2) << std::endl;

    return 0;
}
