#include <iostream>
#include <list>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "Console.hpp"

#include "SalaAula.hpp"

int main(){
    // Pessoa prof1{"João", 11111111111, 40};
    // Disciplina dis1{"C++", nullptr};
    // dis1.setProfessor(&prof1);

    // dis1.adicionarConteudoMinistrado("Ponteiros", 4);
    // dis1.adicionarConteudoMinistrado("Referencias", 2);

    // Console::imprimirDadosDisciplina(dis1);

    Disciplina dis1("c++", nullptr); 
    Disciplina dis2(new Disciplina("Java", nullptr));

    SalaAula sala("lab info", 40); 
    dis1.setSalaAula(&sala); 
    dis2.setSalaAula(&sala); 


    std::list<Disciplina*> disSala = sala.getDisciplinas(); 
    std::list<Disciplina*> :: iterator it; 
    
    for(it = disSala.begin(); it != disSala.end(); it++) {
        std::cout << (*it)->getNome() << '\n';
    }

    delete dis2; 
    std:: cout << "Fim do programa \n"; 

    return 0;
}