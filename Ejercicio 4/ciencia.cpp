
#include "ciencia.h"
#include <cmath>


namespace Ciencia {
    namespace Fisica
    {
        const double L = 299792458; //km/s
        double calcularEnergia(double masa) {
            return masa * L * L;
        }
    }
    namespace Quimica {
        double  calcularMoles(double masa, double masaMolar) {
            return masa / masaMolar;
        }
        const double avogadro = 6.02214076e23;
    }
    namespace Biologia{
        int longitudARN(const std::string& cadenaARN) {
            return cadenaARN.size();
        }
        const double c = 299792458; //km/s
    }

}
