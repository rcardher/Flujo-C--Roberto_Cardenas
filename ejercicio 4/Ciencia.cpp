//
// Created by Roberto C on 17/12/24.
//

#include "Ciencia.h"

namespace Ciencia {
    namespace Física {
        double calcularEnergia(double masa) {
            return masa * velocidad_de_luz * velocidad_de_luz; // E = mc^2
        }
    }
}

