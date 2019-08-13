#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro{
		private:
				std::vector<MesaDeRestaurante*> mesa;

		public:
				virtual ~RestauranteCaseiro();
				RestauranteCaseiro(std::vector<MesaDeRestaurante*> m);
				void adicionaMesa(MesaDeRestaurante *m);
				void adicionaPedido(Pedido *p, int m);
				double calculaTotalRestaurante();
				std::vector<MesaDeRestaurante*> getMesa();
};

#endif
