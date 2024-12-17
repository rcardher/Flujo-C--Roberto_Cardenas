//
// Created by Roberto C on 17/12/24.
//

#include "Geometria2.h" // Incluimos el encabezado que define la clase Circulo y sus métodos
#include <cmath> // Para utilizar la constante PI y la función std::pow

namespace Geometria {

    // Se inicializa el radio del círculo con el valor pasado como parámetro
    Circulo::Circulo(double r) : radio(r) {}

    // Método para calcular el área del círculo
    // Usamos la fórmula del área: Área = PI * radio^2
    double Circulo::calcularArea() const {
        // Calcula y devuelve el área usando la constante PI y la función std::pow para elevar el radio al cuadrado
        return PI * std::pow(radio, 2);
    }

    // Método para calcular el perímetro del círculo
    // La fórmula es: Perímetro = 2 * PI * radio
    double Circulo::calcularPerimetro() const {
        // Calcula y devuelve el perímetro utilizando la constante PI
        return 2 * PI * radio;
    }

    // Retorna el valor del radio del círculo
    double Circulo::getRadio() const {
        return radio;
    }

}


