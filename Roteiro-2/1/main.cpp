#include <iostream>

#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"
#include "Pedido.h"

using namespace std;

int main()
{


	MesaDeRestaurante *m1 = new MesaDeRestaurante;
	MesaDeRestaurante *m2 = new MesaDeRestaurante;

	Pedido *p1 = new Pedido(1,1,"Macarrão", 12);
	Pedido *p2 = new Pedido(2,1,"Suco", 7);

	m1->adicionaPedido(p1);
	m1->adicionaPedido(p1);
	m1->adicionaPedido(p2);

	cout << (m1->getPedido()[0])->toString() << endl;
	cout << (m1->getPedido()[1])->toString() << "\n\n";



	RestauranteCaseiro *restaurante = new RestauranteCaseiro({m1, m2});

	restaurante->adicionaPedido(p2, 1);

	cout << m2->getPedido()[0]->toString() << endl;
	cout << restaurante->calculaTotalRestaurante() << endl;
	restaurante->getMesa()[0]->zeraPedidos();
	restaurante->getMesa()[1]->zeraPedidos();

	cout << restaurante->calculaTotalRestaurante() << endl;

	delete restaurante;

}
