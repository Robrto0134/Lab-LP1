#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(){}

Pessoa::Pessoa(string nome, int idade, string telefone){
    set_nome(nome);
    set_idade(idade);
    set_telefone(telefone);
}

void Pessoa::set_nome(string nome){
  this->nome = nome;
}
void Pessoa::set_idade(int idade){
    this->idade = idade;
}
void Pessoa::set_telefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::get_nome(){
    return nome;
}
int Pessoa::get_idade(){
    return idade;
}
string Pessoa::get_telefone(){
    return telefone;
}
