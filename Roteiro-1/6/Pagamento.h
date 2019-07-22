#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento{
    private:
        double valorDoPagamento;
        std::string nomeDoFuncionario;

    public:
        void set_valorDoPagamento(double valor);
        void set_nomeDoFuncionario(std::string nome);

        double get_valorDoPagamento();
        std::string get_nomeDoFuncionario();
};
#endif
