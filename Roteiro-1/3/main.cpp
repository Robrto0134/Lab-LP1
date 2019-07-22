#include <iostream>
#include "Empregado.h"

using namespace std;

int main(void){
    string nome, sobrenome;
    float salario;
    int percentual;


    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    cout << "Digite o sobrenome do funcionario: ";
    cin >> sobrenome;
    cout << "Digite o salario do funcionario: ";
    cin >> salario;

    Empregado e1 = Empregado(nome, sobrenome, salario);

    cout << "O salario do funcionario " << e1.get_nome() << " " << e1.get_sobrenome() <<
            " é " << e1.get_salario() << " e anual é igual a " << e1.salarioAnual() << endl;

    cout << endl << e1.salarioAnual() << endl << endl;

    cout << "Qual o percentual do aumento do funcionario " << e1.get_nome() <<
            " " << e1.get_sobrenome() << "? ";
    cin >> percentual;

    e1.aumento(percentual);

    cout << "O salario do funcionario " << e1.get_nome() << " " << e1.get_sobrenome() <<
            " é " << e1.get_salario() << " e anual é igual a " << e1.salarioAnual() << endl;
}
