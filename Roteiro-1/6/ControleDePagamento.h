#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H
#include <string>
#include "Pagamento.h"

class controleDePagamento{
    private:
        Pagamento p[5];

    public:
        void set_Pagamentos(double v, std::string nome, int pos);

        double calculaTotalDePagamentos();
        bool exsitePagamentoParaFuncionario(std::string nome);
};
#endif
