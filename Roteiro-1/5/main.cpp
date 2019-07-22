#include <iostream>
#include <string>
#include "ControleDeGastos.h"

using namespace std;

int main(void){
    double v;
    controleDeGastos d;
    std::string tipo;
    int i;

    for(i = 0; i < 10; i++){
      cout << "Digite o valor da " << i+1 << "ª despesa: ";
      cin >> v;
      cout << "Digite o tipo da " << i+1 << "ª despesa: ";
      cin >> tipo;
      d.set_despesa(v, tipo, i);
    }

    cout << "Total das despesas: " << d.calcularTotalDeDespesas() << endl;

    cout << endl << "Tipo de despesa a ser procurada: ";
    cin >> tipo;

    if(d.existeDespesaDpTipo(tipo))
        cout << "Despesa do tipo " << tipo << " encontrada." << endl;
    else
        cout << "Despesa do tipo " << tipo << " não encontrada." << endl;


    return 0;
}
