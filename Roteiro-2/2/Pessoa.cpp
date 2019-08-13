#include "Pessoa.h"

using namespace std;

    Pessoa::~Pessoa(){}

    Pessoa::Pessoa(string n){
        setNome(n);
    }

    Pessoa::Pessoa(string n, Endereco e, string t){
        setNome(n);
        setEndereco(e);
        setTelefone(t);
    }

    void Pessoa::setNome(string n){
        nome = n;
    }
    void Pessoa::setTelefone(string t){
        telefone = t;
    }
    void Pessoa::setEndereco(Endereco e){
        endereco = e;
    }

    string Pessoa::getNome(){
        return nome;
    }
    string Pessoa::getTelefone(){
        return telefone;
    }
    Endereco Pessoa::getEndereco(){
    	return endereco;
    }
