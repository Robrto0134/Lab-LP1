#include <iostream>

#include "CadastroDePessoas.h"
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main()
{
    CadastroDePessoas *cp = new CadastroDePessoas();

    Endereco e1("Beco", "30201-666", "Vale", "Jampa", "Paraiba", 50);
    Endereco e2("Ladeira", "58031-000", "Mangabeira", "Jampa", "Paraiba", 100);

    cp->cadastrarPessoa(new Pessoa("Fernando", e1, "98888-8888"));
    cp->cadastrarPessoa(new Pessoa("Joselino", e2, "98799-9999"));

    cout << cp->getPessoa()[0]->getNome() << "\n";
    cout << cp->getPessoa()[0]->getEndereco().toString() << "\n";
    cout << cp->getPessoa()[1]->getNome() << "\n";
    cout << cp->getPessoa()[1]->getEndereco().toString() << "\n";

    delete cp;

}
