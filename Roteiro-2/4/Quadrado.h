#ifndef Quadrado_H
#define Quadrado_H

#include <string>
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{
		private:
				double lado;
		public:
				Quadrado(std::string n, double l);
				double calcularArea();
};

#endif
