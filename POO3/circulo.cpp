#include "circulo.h"

void Circulo::setRaio(int r){
    raio = r;
}

int Circulo::getArea(){
    return M_PI * pow(raio, 2);
}
int Circulo::getCircunferencia(){
    return 2 * M_PI * raio;
}

