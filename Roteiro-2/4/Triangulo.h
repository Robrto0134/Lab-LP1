#ifndef Triangulo_H
#define Triangulo_H

#include <string>
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica{
		private:
				double base, altura;
		public:
				Triangulo(std::string n, double b, double h);
				double calcularArea();
};

#endif
