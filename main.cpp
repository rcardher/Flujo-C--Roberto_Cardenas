//
// Created by Roberto C on 17/12/24.
//
#include <iostream>
#include "ejercicio 1/Matematicas.h"   // Ejercicio 1
#include "ejercicio 2/Geometria.h"     // Ejercicio

int main() {
    int num1, num2;

    // ----------------- Ejercicio 1 -----------------
    std::cout << "Ejercicio 1: Utilización de un espacio de nombres 'Matemáticas'\n";
    std::cout << "Ingresa el primer número: ";
    std::cin >> num1;

    std::cout << "Ingresa el segundo número: ";
    std::cin >> num2;

    std::cout << "La suma de los números es: " << Matematicas::suma(num1, num2) << std::endl;
    std::cout << "La resta de los números es: " << Matematicas::resta(num1, num2) << std::endl;

    // ----------------- Ejercicio 2 -----------------
    double base, altura, radio;

    std::cout << "\nEjercicio 2: Espacio de nombres 'Geometría' dividido en archivos\n";

    // Triángulo
    std::cout << "Ingresa la base del triángulo: ";
    std::cin >> base;

    std::cout << "Ingresa la altura del triángulo: ";
    std::cin >> altura;

    std::cout << "El área del triángulo es: "
              << Geometria::calcularAreaTriangulo(base, altura) << std::endl;

    // Círculo
    std::cout << "Ingresa el radio del círculo: ";
    std::cin >> radio;

    std::cout << "El área del círculo es: "
              << Geometria::calcularAreaCirculo(radio) << std::endl;

    return 0;
}

