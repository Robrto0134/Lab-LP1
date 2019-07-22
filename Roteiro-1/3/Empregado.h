#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

class Empregado{
    private:
        std::string nome;
        std::string sobrenome;
        float salario;

    public:
        Empregado();
        Empregado(std::string nome, std::string sobrenome, float salario);

        void set_nome(std::string nome);
        void set_sobrenome(std::string sobrenome);
        void set_salario(float salario);

        std::string get_nome();
        std::string get_sobrenome();
        float get_salario();

        float salarioAnual();
        void aumento(int percentual);

};
#endif
