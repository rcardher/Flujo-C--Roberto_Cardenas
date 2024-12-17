//
// Created by Roberto C on 17/12/24.
//

#include "Geometria2.h"

namespace Geometria {

    // Constructor
    Circulo::Circulo(double r) : radio(r) {}

    // Método para calcular el área
    double Circulo::calcularArea() const {
        return PI * std::pow(radio, 2);
    }

    // Método para calcular el perímetro
    double Circulo::calcularPerimetro() const {
        return 2 * PI * radio;
    }

    // Getter para el radio
    double Circulo::getRadio() const {
        return radio;
    }

}

