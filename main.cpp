//
// Created by Roberto C on 17/12/24.
//
#include <iostream>
#include "ejercicio 1/Matematicas.h"
#include "ejercicio 2/Geometria.h"
#include "ejercicio 3/Geometria2.h"
#include "ejercicio 4/Ciencia.h"
#include "ejercicio 5/STL.h"

int main() {
    // Ejercicio 1: Utilización completa de un espacio de nombres
    int a = 10, b = 5;
    std::cout << "Ejercicio 1: \n";
    std::cout << "Suma de " << a << " y " << b << " = " << Matematicas::suma(a, b) << std::endl; //Uso de la función suma
    std::cout << "Resta de " << a << " y " << b << " = " << Matematicas::resta(a, b) << "\n\n"; //Uso de la función resta

    // Ejercicio 2: Espacio de nombres repartido entre diferentes archivos
    std::cout << "Ejercicio 2: \n";
    double base = 5.0, altura = 10.0;
    std::cout << "Área del triángulo con base " << base << " y altura " << altura << " = " //Area del triangulo
              << Geometria::calcularAreaTriangulo(base, altura) << std::endl;

    Geometria::Circulo circulo(7.0);
    std::cout << "Área del círculo con radio 7.0 = " << circulo.calcularArea() << std::endl; //Area del circulo
    std::cout << "Perímetro del círculo con radio 7.0 = " << circulo.calcularPerimetro() << "\n\n";

    // Ejercicio 3: Relación entre clase y espacio de nombres
    std::cout << "Ejercicio 3: \n";
    Geometria::Circulo circulo2(10.0); //Creamos un objeto circulo
    std::cout << "Área del círculo con radio 10.0 = " << circulo2.calcularArea() << std::endl; //Calcular el area del circulo
    std::cout << "Perímetro del círculo con radio 10.0 = " << circulo2.calcularPerimetro() << "\n\n"; //Calcular el perimetro

    // Ejercicio 4
    std::cout << "\n---- Ejercicio 4 ----" << std::endl;
    double masa;
    std::cout << "Ingresa la masa (kg): ";
    std::cin >> masa;
    double energia = Ciencia::Física::calcularEnergia(masa);
    std::cout << "Energía (E=mc^2): " << energia << " julios" << std::endl; //Calculamos la energía

    std::cout << "\n---- Ejercicio 5 ----\n";
    STL::ejecutarSTL(); // Ejecutar ejemplos de vector, map y set

    return 0;
}


