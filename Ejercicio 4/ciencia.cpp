
#include "ciencia.h"

namespace Ciencia {
    namespace Fisica
    {
        const double L = 299792458; //km/s
        double calcularEnergia(double masa) {
            return masa * L * L;
        }
    }
}
