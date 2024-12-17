//
// Created by Roberto C on 17/12/24.
//

#ifndef GEOMETRIA2_H
#define GEOMETRIA2_H

#include <cmath>  // Para PI y funciones matemáticas como sqrt

namespace Geometria {

    const double PI = 3.14159265358979323846;  // Constante PI

    class Circulo {
    private:
        double radio;  // Atributo: radio del círculo

    public:
        // Constructor
        Circulo(double r);

        // Métodos para calcular área y perímetro
        double calcularArea() const;
        double calcularPerimetro() const;

        // Getter para el radio (opcional)
        double getRadio() const;
    };
}

#endif  // GEOMETRIA2_H

