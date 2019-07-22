#include "Despesa.h"

void Despesa::set_valor(double valor){
    this->valor = valor;
}
void Despesa::set_tipoDeGasto(std::string t){
    tipoDeGasto = t;
}

double Despesa::get_valor(){
    return valor;
}
std::string Despesa::get_tipoDeGasto(){
    return tipoDeGasto;
}
