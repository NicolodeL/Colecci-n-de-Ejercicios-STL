
#include <iostream>
#include <string>
#include "triangulo.h"
#include "circulo.h"
using namespace std;
using namespace Geometria;


int main() {
    cout << "Area del circulo: " << calcularAreaCirculo(5) << endl;
    cout << "Area del triangulo: " << calcularAreaTriangulo(9,3) << endl;
    return 0;
}