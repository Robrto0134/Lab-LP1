#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double v){
    nome = n;
    valorDaHora = v;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int h)
{
    return h >= 40 ? 40*valorDaHora + (h-40)*1.5*valorDaHora : h * valorDaHora;
}
