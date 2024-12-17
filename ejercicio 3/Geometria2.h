//
// Created by Roberto C on 17/12/24.
//

#ifndef GEOMETRIA2_H
#define GEOMETRIA2_H

#include <cmath>  // Incluimos la librería cmath para funciones matemáticas como sqrt y PI

namespace Geometria {

    // Definimos la constante PI
    const double PI = 3.14159265358979323846;

    // Definimos la clase Circulo
    class Circulo {
    private:
        double radio;  // Atributo privado que almacena el valor del radio del círculo

    public:
        // Constructor que inicializa el radio con el valor pasado como argumento
        Circulo(double r);

        // Método para calcular el área del círculo
        // La fórmula es: Área = PI * radio^2
        double calcularArea() const;

        // Método para calcular el perímetro del círculo
        // La fórmula es: Perímetro = 2 * PI * radio
        double calcularPerimetro() const;

        // Método get para obtener el valor del radio del círculo
        double getRadio() const;
    };
}

#endif


