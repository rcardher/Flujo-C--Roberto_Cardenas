//
// Created by Roberto C on 17/12/24.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>

namespace STL {
    void vectorExample() {
        std::vector<int> numeros;
        numeros.push_back(10);
        numeros.push_back(20);
        numeros.push_back(30);

        std::cout << "Vector: ";
        for (int num : numeros) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void mapExample() {
        std::map<std::string, int> edades;
        edades["Roberto"] = 25;
        edades["Miguel"] = 30;
        edades["Pablo"] = 35;

        std::cout << "Map (nombres y edades):\n";
        for (const auto& par : edades) {
            std::cout << par.first << ": " << par.second << " años\n";
        }
    }

    void setExample() {
        std::set<int> numerosUnicos;
        numerosUnicos.insert(10);
        numerosUnicos.insert(20);
        numerosUnicos.insert(10);  // Este no se agregará porque ya existe.

        std::cout << "Set (números únicos): ";
        for (int num : numerosUnicos) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void ejecutarSTL() {
        std::cout << "---- Ejercicio 5: STL ----\n";
        vectorExample();
        mapExample();
        setExample();
    }
}

