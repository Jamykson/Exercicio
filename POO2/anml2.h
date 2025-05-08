#ifndef ANML_H
#define ANML_H

#include <string>

class Animal{

    private:

        std::string nome;
        std::string tipo;

    public:

        void setNome(std::string n);
        void setTipo(std::string t);

        std::string getNome();
        std::string getTipo();

};

#endif