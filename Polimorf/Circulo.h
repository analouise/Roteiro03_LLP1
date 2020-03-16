#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include"Figura.h"

class Circulo: public Figura{
    private:
        double raio;
    public:
        Circulo();
        Circulo(double raio, std::string nome);
        void setRaio(double raio);
        double getRaio();
        double calcularArea();
        std::string getNome();
};



#endif // CIRCULO_H_INCLUDED
