#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice{
    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;

    public:
        Invoice();
        Invoice(int a, int q, double p, std::string d);

        void set_num(int a);
	      void set_desc(std::string d);
        void set_quant(int q);
	      void set_preco(double p);

        int get_num();        
        std::string get_desc();
        int get_quant();
        double get_preco();

        double getInvoiceAmount();
};
#endif
