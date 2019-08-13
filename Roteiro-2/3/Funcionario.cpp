#include "Funcionario.h"

using namespace std;

    Funcionario::Funcionario(){
        setNome("");
        setMatricula("");
        setSalario(0);
    }

    Funcionario::Funcionario(string m, string n, double s){
        setNome(n);
        setMatricula(m);
        setSalario(s);
    }

    Funcionario::~Funcionario() {}
    string Funcionario::getMatricula(){
        return matricula;
    }
    string Funcionario::getNome(){
        return nome;
    }
    double Funcionario::getSalario(){
        return salario;
    }

    void Funcionario::setMatricula(string m){
        matricula = m;
    }
    void Funcionario::setNome(string n){
        nome = n;
    }
    void Funcionario::setSalario(double s){
        salario = s;
    }
