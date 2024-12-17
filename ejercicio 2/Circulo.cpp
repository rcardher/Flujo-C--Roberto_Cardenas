//
// Created by Roberto C on 17/12/24.
//

#include "Geometria.h"
#include <cmath> // Incluimos cmath para usar la constante M_PI

// Definición del espacio de nombres "Geometria"
namespace Geometria {

    // Función que calcula el área de un círculo
    // Fórmula: área = π * radio^2
    double calcularAreaCirculo(double radio) {
        return M_PI * radio * radio;
    }
}


