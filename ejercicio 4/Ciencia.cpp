//
// Created by Roberto C on 17/12/24.
//

#include "Ciencia.h"

namespace Ciencia {
    namespace Física { // Definimos un subespacio dentro de "Ciencia" llamado "Física"

        // Función para calcular la energía utilizando la fórmula: E = mc^2
        // Recibe la masa como parámetro y usa la constante velocidad de la luz definida en Ciencia
        double calcularEnergia(double masa) {
            return masa * velocidad_de_luz * velocidad_de_luz; // Aplicamos la fórmula E = mc^2
        }
    }
}


