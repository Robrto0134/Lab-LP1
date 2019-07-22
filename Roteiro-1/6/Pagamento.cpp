#include "Pagamento.h"

    void Pagamento::set_valorDoPagamento(double valor){
        valorDoPagamento = valor;
    }
    void Pagamento::set_nomeDoFuncionario(std::string nome){
        nomeDoFuncionario = nome;
    }

    double Pagamento::get_valorDoPagamento(){
        return valorDoPagamento;
    }
    std::string Pagamento::get_nomeDoFuncionario(){
        return nomeDoFuncionario;
    }
