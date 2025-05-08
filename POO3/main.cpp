#include<iostream>
#include "circulo.h"

int main(){
    Circulo bola;
    int raio;

    std::cin>> raio;
    bola.setRaio(raio);

    std::cout<<"Area: "<< bola.getArea() << std::endl << "Circunferencia: "<< bola.getCircunferencia();

}