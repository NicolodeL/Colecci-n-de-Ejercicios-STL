#include "contenedores.h"
using namespace std;
using namespace Contenedores;


int main() {
//VECTOR
    std::vector<int> numeros {1, 2, 3, 4, 5};
    std::cout << "Contenido del vector antes de llamar a agregarNumeros: ";
    for (int valor : numeros) {
        std::cout << valor << " ";
    }
    agregarNumeros(numeros);

    std::cout << "\nContenido del vector despues de llamar a agregarNumeros: ";
    for (int valor : numeros) {
        std::cout << valor << " ";
    }
//Map
    Contenedores::agregarEdades("Pedro" , 12);
    Contenedores::eliminarEdad("Pedro");
//Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    std::cout << "Contenido del conjunto antes de la eliminacion: ";
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
    conjunto.erase(1);
    std::cout << "Contenido del conjunto despues de la eliminacion: ";
    for (const auto& elemento : conjunto) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;

    return 0;
}
