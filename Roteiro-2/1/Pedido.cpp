#include "Pedido.h"
#include <string>

using namespace std;

		Pedido::Pedido(int num, int quant, string des, double price){
				numero = num;
				quantidade = quant;
				descricao = des;
				preco = price;
		}

		string Pedido::toString(){
				return to_string(numero) + " " + to_string(quantidade) + " " + descricao + " " + to_string(preco) ;
		}
