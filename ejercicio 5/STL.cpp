//
// Created by Roberto C on 17/12/24.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>

namespace STL {
    // Función que muestra el uso de un vector
    void vectorExample() {
        // Creamos un vector de enteros
        std::vector<int> numeros;

        // Agregamos elementos al vector
        numeros.push_back(10);  // Añade 10 al final del vector
        numeros.push_back(20);  // Añade 20 al final del vector
        numeros.push_back(30);  // Añade 30 al final del vector

        // Imprimimos los elementos del vector
        std::cout << "Vector: ";
        for (int num : numeros) {  // Iteramos sobre el vector
            std::cout << num << " ";  // Mostramos cada elemento
        }
        std::cout << std::endl;
    }

    // Función que muestra el uso de un mapa (map) con claves y valores
    void mapExample() {
        // Creamos un mapa de nombres (como claves) y edades (como valores)
        std::map<std::string, int> edades;

        // Insertamos algunos elementos en el mapa
        edades["Roberto"] = 25;
        edades["Miguel"] = 30;
        edades["Pablo"] = 35;

        // Imprimimos las claves y valores del mapa
        std::cout << "Map (nombres y edades):\n";
        for (const auto& par : edades) {  // Iteramos sobre el mapa
            std::cout << par.first << ": " << par.second << " años\n";  // Imprimimos clave y valor
        }
    }

    // Función que muestra el uso de un conjunto (set), donde solo se almacenan valores únicos
    void setExample() {
        // Creamos un set de enteros
        std::set<int> numerosUnicos;

        // Insertamos elementos en el set
        numerosUnicos.insert(10);  // Añade 10
        numerosUnicos.insert(20);  // Añade 20
        numerosUnicos.insert(10);  // Este no se agregará porque el 10 ya existe en el set

        // Imprimimos los elementos del set (solo se mostrarán valores únicos)
        std::cout << "Set (números únicos): ";
        for (int num : numerosUnicos) {  // Iteramos sobre el set
            std::cout << num << " ";  // Mostramos cada elemento único
        }
        std::cout << std::endl;
    }

    // Función que ejecuta todos los ejemplos de contenedores STL
    void ejecutarSTL() {
        std::cout << "---- Ejercicio 5: STL ----\n";
        vectorExample();  // Ejecutamos el ejemplo del vector
        mapExample();     // Ejecutamos el ejemplo del mapa
        setExample();     // Ejecutamos el ejemplo del set
    }
}


