#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED
#include<string>

class Figura{
    protected:
        std::string nome;
    public:
        virtual double calcularArea() = 0;
        virtual std::string getNome() = 0;
};


#endif // FIGURAGEOMETRICA_H_INCLUDED
