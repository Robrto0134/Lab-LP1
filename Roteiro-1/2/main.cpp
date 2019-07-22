#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(void){
    string d;
    int n, q;
    float p;

    cout << "Digite o número: ";
    cin >> n;
    cout << "Digite a nome do produto: ";
    cin >> d;
    cout << "Digite a quantidade: ";
    cin >> q;
    cout << "Digite o valor da unidade: ";
    cin >> p;

    Invoice i1 = Invoice(n, q, p, d);

    cout << "Numero: " << i1.get_num() << endl << "Quantidade: " << i1.get_quant() <<
    endl << "Descrição: " << i1.get_desc() << endl << "Preço: " << i1.get_preco() <<
    endl << "Total: " << i1.getInvoiceAmount() << endl;

    return 0;
}
