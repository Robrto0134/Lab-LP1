#include "Invoice.h"

using namespace std;

    Invoice::Invoice(){
        numero = 0;
        descricao = "/0";
        quantidade = 0;
        preco = 0;
    }
    Invoice::Invoice(int n, int q, double p, string d)
            :Invoice()  
    {
        numero = n;
        descricao = d;
        if(q > 0)
        quantidade = q;
        if(p > 0)
            preco = p;
    }
    
    void Invoice::set_num(int n){
        numero = n;
    }
    int Invoice::get_num(){
        return numero;
    }
    void Invoice::set_desc(string d){
        descricao = d;
    }
    string Invoice::get_desc(){
        return descricao;
    }
    void Invoice::set_quant(int q){
        quantidade = q;
    }
    int Invoice::get_quant(){
        return quantidade;
    }
    void Invoice::set_preco(double p){
            preco = p;
    }
    double Invoice::get_preco(){
        return preco;
    }
    double Invoice::getInvoiceAmount(){
        return quantidade*preco;
    }