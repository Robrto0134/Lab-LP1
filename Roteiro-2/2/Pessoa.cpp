#include "Pessoa.h"

using namespace std;

    Pessoa::~Pessoa(){}

    Pessoa::Pessoa(string n){
        setNome(n);
    }

    Pessoa::Pessoa(string n, Endereco end, string tel){
        setNome(n);
        setEndereco(end);
        setTelefone(tel);
    }

    void Pessoa::setNome(string n){
        nome = n;
    }
    void Pessoa::setTelefone(string tel){
        telefone = tel;
    }
    void Pessoa::setEndereco(Endereco end){
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
