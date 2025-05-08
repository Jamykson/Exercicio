#ifndef ANML_H
#define ANML_H

#include <string>

class Animal{

    private:

        std::string nome;
        std::string tipo;

    public:

        void setNome(int n){
            nome = n;
        }
        void setTipo(int t){
            tipo = t;
        }

        std::string getNome(){
            return nome;
        }
        std::string getTipo(){
            return tipo;
        }

}

#endif