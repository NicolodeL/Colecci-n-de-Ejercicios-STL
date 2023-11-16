#include "contenedores.h"

namespace Contenedores {
    void agregarNumeros(std::vector<int>& vec) {
        vec.push_back(6);
    }
    void agregarEdades(const std::string& nombre , int edades) {
        std::map<std::string, int> edad;
        edad["Pedro"] = 12;
    }
    void eliminarEdad(const std::string& nombre) {
        std::map<std::string, int> edad;
        edad.erase(nombre);
    }
    void agregarConjunto() {
        std::set<int> conjunto {1, 2, 3, 4, 5};
        conjunto.insert(6);
    }
    void eliminarDelConjunto(int elemento) {
        std::set<int> conjunto {1, 2, 3, 4, 5};
        conjunto.erase(elemento);
    }
}
