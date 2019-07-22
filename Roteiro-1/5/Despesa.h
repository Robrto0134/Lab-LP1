#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa{
    private:
        double valor;
        std::string tipoDeGasto;

    public:
        void set_valor(double valor);
        void set_tipoDeGasto(std::string t);

        double get_valor();
        std::string get_tipoDeGasto();
};
#endif
