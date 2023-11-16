//
// Created by nicol on 15/11/2023.
//

#ifndef COLECCI_N_DE_EJERCICIOS_STL_CIENCIA_H
#define COLECCI_N_DE_EJERCICIOS_STL_CIENCIA_H

namespace Ciencia {
    namespace Fisica {
        extern const double L;
        double calcularEnergia(double masa);
    }
    namespace Quimica {
        double calcularMoles(double Moles, double masaMolar);
        extern const double avogadro;
    }

}


#endif //COLECCI_N_DE_EJERCICIOS_STL_CIENCIA_H
