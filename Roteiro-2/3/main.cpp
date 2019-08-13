#include <iostream>

#include "Funcionario.h"
#include "Consultor.h"

int main(){
    Funcionario *fulano1 = new Funcionario("99812", "Saulo", 1000);
    Consultor *fulano2 = new Consultor("76512", "Pablo", fulano1->getSalario());

    std::cout << fulano1->getSalario() << "\n";
    std::cout << fulano2->getSalario() << "\n";

    delete fulano1;
    delete fulano2;

}
