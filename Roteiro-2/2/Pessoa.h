#ifndef Pessoa_H
#define Pessoa_H

#include "Endereco.h"

class Pessoa{
    private:
        std::string nome, telefone;
        Endereco endereco;

    public:
        Pessoa(std::string n);
        Pessoa(std::string n, Endereco end, std::string tel);
        virtual ~Pessoa();

        void setNome(std::string n);
        void setTelefone(std::string tel);
        void setEndereco(Endereco end);

        std::string getNome();
        std::string getTelefone();
        Endereco getEndereco();
};
#endif
