
#include <iostream>
#include <string>
#include "triangulo.h"
#include "rombo.h"
#include "circulo.h"
#include "rectangulo.h"
#include "hexagono.h"
using namespace std;
using namespace Geometria;


int main() {
    cout << "Area del circulo: " << calcularAreaCirculo(5) << endl;
    cout << "Area del triangulo: " << calcularAreaTriangulo(9,3) << endl;
    cout << "Area del rombo: " << calcularAreaRombo(5,3) << endl;
    cout << "Area del rectangulo: " << calcularAreaRectangulo(8,4) << endl;
    cout << "Area del hexagono: " << calcularAreaHexagono(7,2) << endl;
    return 0;
}