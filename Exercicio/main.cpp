#include <iostream>
#include "aluno.h"
#include <string>

int main(){
    Aluno pessoa;
    int numero;

    std::cout<< "Nome: ";
    std::cin >> pessoa.nome;
    std::cout<< "Curso: ";
    std::cin >> pessoa.curso;
    std::cout<< "Idade: ";
    std::cin >> pessoa.idade;
    std::cout<< "Periodo: ";
    std::cin >> pessoa.periodo;
    std::cout<< "Matricula: ";
    std::cin >> numero;

    pessoa.setMatricula(numero);

    std::cout << "O/A aluno/a "<< pessoa.nome << " tem " << pessoa.idade << " anos " << " e cursa " << pessoa.curso << " no IMD." <<std::endl;
    std::cout << "Ele/a esta no perído "<< pessoa.periodo << " e possui a matrícula " << pessoa.getMatricula()<< ".";
    return 0;