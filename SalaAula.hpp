#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"

class SalaAula{
	//infere a classe e todos os metodos
	friend class Disciplina; 

	//infere somente o setSalaAula
	friend void Disciplina::setSalaAula(SalaAula* salaAula);

	public:
		SalaAula(const std::string nome, unsigned int capacidade);

		~SalaAula(); //destrutor
		
		std::string getNome() const;
		void setNome(std::string nome);

		unsigned int getCapacidade() const;
		void setCapcidade(unsigned int capacidade);

        const std::list<Disciplina*>& getDisciplinas() const;

		void adicionarDisciplina(Disciplina* disciplina); 
		void removerDisciplina(Disciplina* disciplina); 

	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif