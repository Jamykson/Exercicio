#ifndef CIRCULO_H
#define CIRCULO_H

#include <cmath> 

class Circulo{

    private:
        int raio;
    public:
        void setRaio(int r);

        int getArea();
        int getCircunferencia();

};
#endif