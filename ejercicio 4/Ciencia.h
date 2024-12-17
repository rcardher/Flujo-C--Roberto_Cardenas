//
// Created by Roberto C on 17/12/24.
//

#ifndef CIENCIA_H
#define CIENCIA_H

namespace Ciencia {
    // Definimos un subespacio de nombres "Física" para organizar conceptos específicos de la física
    namespace Física {
        // Declaramos la constante que representa la velocidad de la luz en metros por segundo
        const double velocidad_de_luz = 3.0e8; // Valor estándar de la velocidad de la luz en m/s

        // Declaramos la función para calcular la energía, que usará la fórmula E = mc^2
        // Recibe la masa como dato
        double calcularEnergia(double masa);
    }
}

#endif // CIENCIA_H






