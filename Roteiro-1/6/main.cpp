#include <iostream>
#include <string>
#include "ControleDePagamento.h"

using namespace std;

int main(void){
    controleDePagamento cp;
    string nome;
    double valor;
    int i;

    for(i = 0; i < 5; i++){
        cout << "Digite o valor do pagamento do " << i+1 << "º funcionario: ";
        cin >> valor;
        cout << "Digite o nome do " << i+1 << "º funcionario: ";
        cin >> nome;
        cp.set_Pagamentos(valor, nome, i);
    }

    cout << "Total dos pagamentos: "<< cp.calculaTotalDePagamentos() << endl;

    cout << endl << "Digite o nome do funcionario a ser pesquisado: ";
    cin >> nome;

    if(cp.exsitePagamentoParaFuncionario(nome))
        cout << "Pagamento para " << nome << " encontrado." << endl;
    else
        cout << "Pagamento para " << nome << " não encontrado." << endl;
    return 0;
}
