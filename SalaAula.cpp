#include "SalaAula.hpp"
#include "Disciplina.hpp"
#include <algorithm>

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}

SalaAula::~SalaAula() {
    // No destrutor da SalaAula, informamos às disciplinas que a sala não existe mais.
    for (Disciplina* disciplina : disciplinasMinistradas) {
        disciplina->setSalaAula(nullptr);
    }
}
    
std::string SalaAula::getNome(){
	return this->nome;
}

void SalaAula::setNome(std::string nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade(){
	return this->capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	this->capacidade = capacidade;
}

std::list<Disciplina*>& SalaAula::getDisciplinas(){
    return disciplinasMinistradas;
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina) {
    disciplinasMinistradas.push_back(disciplina);
}

// void SalaAula::removerDisciplina(Disciplina* disciplina) {
//     auto it = std::find(disciplinasMinistradas.begin(), disciplinasMinistradas.end(), disciplina);
//     if (it != disciplinasMinistradas.end()) {
//         disciplinasMinistradas.erase(it);
//     }
// }

void SalaAula::removerDisciplina(Disciplina* disciplina) {
	
	//define iterator
    std::list<Disciplina*>::iterator it{disciplinasMinistradas.begin()}; 
    
	//laço na lista de conteudos
    for(; it != disciplinasMinistradas.end(); it++) {
        if ((*it) == disciplina) {
            disciplinasMinistradas.erase(it);
            return ;
        }
    }
}