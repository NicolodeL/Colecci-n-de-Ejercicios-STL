

#include "hexagono.h"
namespace Geometria {
    double calcularAreaHexagono(double lado, double apotema) {
        return ((lado * 6) * apotema) / 2;
    }
}