#include "contenedores.h"

namespace Contenedores {
    void agregarNumeros() {
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    }
    void agregarEdades() {
        std::map<std::string, int> edad;
        edad["Pedro"] = 12;
    }
}
