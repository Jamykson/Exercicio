#include<iostream>
#include<string>
#include "anml2.h"

int main(){

    Animal bicho;
    std::string novoNome, novoTipo;

    std::cin >> novoNome >> novoTipo;
    
    bicho.setNome(novoNome);
    bicho.setTipo(novoTipo);

    std::cout <<"Nome: "<< bicho.getNome() << "\nTipo: "<< bicho.getTipo() << std::endl; 

}