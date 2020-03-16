
#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
#include "Figura.h"

class Triangulo: public Figura{
    private:
        double base;
        double altura;
    public:
        Triangulo();
        Triangulo(double base, double altura, std::string nome);
        void setBase(double base);
        void setAltura(double altura);
        double getBase();
        double getAltura();
        double calcularArea();
        std::string getNome();
};



#endif // TRIANGULO_H_INCLUDED
