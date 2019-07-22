#ifndef PESSOA_H
#define PESSOA_H
#include <string>

class Pessoa{
    private:
        std::string nome;
        int idade;
        std::string telefone;
    public:
        Pessoa();
        Pessoa(std::string nome, int idade, std::string telefone);

        void set_nome(std::string nome);
        void set_idade(int idade);
        void set_telefone(std::string telefone);

        std::string get_nome();
        int get_idade();
        std::string get_telefone();
};
#endif
