#include <iostream>
#include <list>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "Console.hpp"

#include "SalaAula.hpp"

int main() {
    
    // Criando disciplinas
    Disciplina dis1 {"Matemática",nullptr, 40, nullptr};
    Disciplina* dis2 = new Disciplina{"Matemática",nullptr, 40, nullptr};
    
    SalaAula sala{"Lab Info 1", 40};
    dis1.setSalaAula(&sala);
    dis2->setSalaAula(&sala);

    std::list<Disciplina*> disSala = sala.getDisciplinas();
    std::list<Disciplina*>::iterator it;
    for(it = disSala.begin(); it != disSala.end(); it++)
        std::cout << (*it)->getNome() << std::endl;

    delete dis2;
    std::cout << "Fim do Programa" << std::endl;

    // Liberando a memória alocada dinamicamente
    
    delete dis2;

    return 0;
}