#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(void){
    string nome, telefone;
    int idade;
    Pessoa p1 = Pessoa("Ricardo", 20, "988344422");

    cout << "Nome: " << p1.get_nome() << endl;
    cout << "Idade: " << p1.get_idade() << endl;
    cout << "Telefone: " << p1.get_telefone() << endl;

    return 0;
}
