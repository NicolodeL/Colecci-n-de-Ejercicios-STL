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

    std::cout << "\nContenido del vector después de llamar a agregarNumeros: ";
    for (int valor : numeros) {
        std::cout << valor << " ";
    }


    return 0;
}
