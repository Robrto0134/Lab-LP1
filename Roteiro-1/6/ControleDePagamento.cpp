#include "ControleDePagamento.h"

    void controleDePagamento::set_Pagamentos(double v, std::string nome, int pos){
        p[pos].set_valorDoPagamento(v);
        p[pos].set_nomeDoFuncionario(nome);
    }

    double controleDePagamento::calculaTotalDePagamentos(){
        int i;
        double total = 0;
        for(i = 0; i < 5; i++){
            total += p[i].get_valorDoPagamento();
        }
        return total;
    }
    bool controleDePagamento::exsitePagamentoParaFuncionario(std::string nome){
        int i;
        for(i = 0; i < 5; i++){
            if(nome == p[i].get_nomeDoFuncionario())
                return true;
            }
        return false;
    }
