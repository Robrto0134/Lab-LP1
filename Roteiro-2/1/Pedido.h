#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <string>

class Pedido{
		public:
				int numero, quantidade;
				std::string descricao;
				double preco;

				Pedido(int num, int quant, std::string des, double price);
				std::string toString();
};

#endif
