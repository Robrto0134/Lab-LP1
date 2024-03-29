#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

		RestauranteCaseiro::~RestauranteCaseiro(){
				for (int i = 0; i < mesa.size(); i++){
						delete mesa[i];
				}
		}

		RestauranteCaseiro::RestauranteCaseiro(std::vector<MesaDeRestaurante *> m){
				mesa = m;
		}

		void RestauranteCaseiro::adicionaPedido(Pedido *p, int m){
				mesa[m]->adicionaPedido(p);
		}

		double RestauranteCaseiro::calculaTotalRestaurante(){
				double total = 0;
				for (MesaDeRestaurante *m : mesa){
						total += m->calculaTotal();
				}
		}

		void RestauranteCaseiro::adicionaMesa(MesaDeRestaurante *m){
				mesa.push_back(m);
		}

		std::vector<MesaDeRestaurante *> RestauranteCaseiro::getMesa(){
				return mesa;
		}
