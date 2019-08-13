#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"

using namespace std;

int main(){
	Circulo	*c1 = new Circulo("Joao", 4);
	Circulo *c2 = new Circulo("Maria", 12);

	cout << c1->calcularArea() << "\n";
	cout << c2->calcularArea() << "\n";

	Quadrado *q1 = new Quadrado("Jose", 20);
	Triangulo *t1 = new Triangulo("Pedro", 5, 2);

	cout << q1->calcularArea() << endl;
	cout << t1->calcularArea() << endl;

}
