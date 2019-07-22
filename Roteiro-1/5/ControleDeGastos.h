#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <string>
#include "Despesa.h"

class controleDeGastos{
    private:
        Despesa des[10];

    public:
        void set_despesa(double v, std::string tipo, int posicao);

        double calcularTotalDeDespesas();
        bool existeDespesaDpTipo(std::string tipo);
};
#endif
