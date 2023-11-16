#include "ciencia.h"
#include <iostream>
using namespace Ciencia::Fisica;
using namespace std;
using namespace Ciencia::Quimica;
using namespace Ciencia::Biologia;


int main() {
    cout << "La velocidad de la luz es:" << L << "km/s" << endl;
    cout << "La energia de un objeto de 1kg es: " << calcularEnergia(1) << "J" << endl;
    cout << "El numero de Avogadro es: " << avogadro << endl;
    cout << "El numero de moles de 1kg de agua es: " << calcularMoles(1,18) << "mol" << endl;
    std::string cadenaARN = "AUGCCUAGU";
    int longitud = longitudARN(cadenaARN);
    std::cout << "La longitud de la cadena de ARN es: " << longitud << " nucleotidos" << std::endl;
    cout << "La constante de los gases ideales es: " << R << "J/mol/K" << endl;
    return 0;
}