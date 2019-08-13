#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#include <vector>

class MesaDeRestaurante{
		private:
				std::vector<Pedido*> pedido;

		public:
				~MesaDeRestaurante();
				void adicionaPedido(Pedido *p);
				void zeraPedidos();
				double calculaTotal();
				std::vector<Pedido*> getPedido();

};

#endif
