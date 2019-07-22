#include "Empregado.h"

using namespace std;

    Empregado::Empregado(){}

    Empregado::Empregado(string nome, string sobrenome, float salario){
        this->nome = nome;
        this->sobrenome = sobrenome;
        this->salario = salario;
    }

    void Empregado::set_nome(string nome){
        this->nome = nome;
    }
    void Empregado::set_sobrenome(string sobrenome){
        this-> sobrenome = sobrenome;
    }
    void Empregado::set_salario(float salario){
        this->salario = salario;
    }

    string Empregado::get_nome(){
        return nome;
    }
    string Empregado::get_sobrenome(){
        return sobrenome;
    }
    float Empregado::get_salario(){
        return salario;
    }

    float Empregado::salarioAnual(){
        return salario * 12;
    }
    void Empregado::aumento(int percentual){
        salario += salario*(percentual/100.0);
    }
