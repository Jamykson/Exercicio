#include <iostream>
#include "anml.h"

int main(){

    Animal bicho;

    bicho.nome = "Serpente";
    bicho.tipo = "Reptil";

    std::cout << bicho.nome << " é um " << bicho.tipo << std::endl;
    return 0;
}