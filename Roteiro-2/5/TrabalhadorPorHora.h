#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
		private:
				double valorDaHora;

  	public:
				TrabalhadorPorHora(std::string n, double v);
				double calcularPagamentoSemanal(int h);
};

#endif
