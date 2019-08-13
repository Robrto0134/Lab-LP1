#include <iostream>
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include "Trabalhador.h"

int main()
{
	TrabalhadorAssalariado t1("Junior", 750);
    TrabalhadorPorHora t2("Atonio", 200);

    std::cout << t1.calcularPagamentoSemanal() << std::endl;
    std::cout << t2.calcularPagamentoSemanal(20) << std::endl;
    std::cout << t2.calcularPagamentoSemanal(30) << std::endl;
}
