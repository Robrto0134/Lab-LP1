#include <cmath>
#include "Circulo.h"

Circulo::Circulo(std::string n, double r){
		nome = n;
		raio = r;
}

double Circulo::calcularArea(){
		return M_PI * raio * raio;
}
