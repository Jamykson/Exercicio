#ifndef ALUNO_H
#define ALUNO_H

#include<string>
class Aluno{

    private:
        int matricula;

    public:

        std::string nome;
        std::string curso;        
        int idade;
        int periodo;

    void setMatricula(int m);
    int getMatricula();
};
#endif