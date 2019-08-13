#include "Endereco.h"

using namespace std;

Endereco::~Endereco(){  }

Endereco::Endereco(){
    rua = cep = bairro = cidade = estado = " ";
    numero = 0;
}

Endereco::Endereco(string r, string c, string b, string ci, string e, int n){
    rua = r;
    cep = c;
    bairro = b;
    cidade = ci;
    estado = e;
    numero = n;
}

string Endereco::toString(){
    return rua + " " + cep + " " + bairro + " " + cidade + " " + estado + " " + to_string(numero);
}
