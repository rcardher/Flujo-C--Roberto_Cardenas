//
// Created by Roberto C on 17/12/24.
//
#include <iostream>
#include "ejercicio 1/Matematicas.h"
#include "ejercicio 2/Geometria.h"
#include "ejercicio 3/Geometria2.h"

int main() {
    // Ejercicio 1: Utilización completa de un espacio de nombres
    int a = 10, b = 5;
    std::cout << "Ejercicio 1: \n";
    std::cout << "Suma de " << a << " y " << b << " = " << Matematicas::suma(a, b) << std::endl;
    std::cout << "Resta de " << a << " y " << b << " = " << Matematicas::resta(a, b) << "\n\n";

    // Ejercicio 2: Espacio de nombres repartido entre diferentes archivos
    std::cout << "Ejercicio 2: \n";
    double base = 5.0, altura = 10.0;
    std::cout << "Área del triángulo con base " << base << " y altura " << altura << " = "
              << Geometria::calcularAreaTriangulo(base, altura) << std::endl;

    Geometria::Circulo circulo(7.0);
    std::cout << "Área del círculo con radio 7.0 = " << circulo.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo con radio 7.0 = " << circulo.calcularPerimetro() << "\n\n";

    // Ejercicio 3: Relación entre clase y espacio de nombres
    std::cout << "Ejercicio 3: \n";
    Geometria::Circulo circulo2(10.0);
    std::cout << "Área del círculo con radio 10.0 = " << circulo2.calcularArea() << std::endl;
    std::cout << "Perímetro del círculo con radio 10.0 = " << circulo2.calcularPerimetro() << "\n\n";

    return 0;
}


