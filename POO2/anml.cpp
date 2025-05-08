#include "anml2.h"

void Animal::setNome(std::string n){
    nome = n;
}
void Animal::setTipo(std::string t){
    tipo = t;
}

std::string Animal::getNome(){
    return nome;
}
std::string Animal::getTipo(){
    return tipo;
}