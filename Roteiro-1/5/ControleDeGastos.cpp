#include "ControleDeGastos.h"

void controleDeGastos::set_despesa(double v, std::string tipo, int posicao){
    des[posicao].set_valor(v);
    des[posicao].set_tipoDeGasto(tipo);
}

double controleDeGastos::calcularTotalDeDespesas(){
    int i;
    double total = 0;
    for(i = 0; i < 10; i++){
        total += des[i].get_valor();
    }
    return total;
}
bool controleDeGastos::existeDespesaDpTipo(std::string tipo){
    int i;
    for(i = 0; i < 10; i++){
        if(tipo == des[i].get_tipoDeGasto())
            return true;
    }
    return false;
}
