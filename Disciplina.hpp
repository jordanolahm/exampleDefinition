#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "ConteudoMinistrado.hpp"

class SalaAula;//Forward Declaration

class Disciplina{
	public:
		
		Disciplina(std::string nome, SalaAula* sala, unsigned short int cargaHoraria,Pessoa* Professor);
		
		~Disciplina();

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int carga);

		Pessoa* getProfessor();
        void setProfessor(Pessoa* prof);

		void setSalaAula(SalaAula* sala);
        SalaAula* getSalaAula();

		unsigned long int getIdDisciplina(); 
		void setIdDisciplina(unsigned long int id );

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

		void adicionarConteudoMinistrado(unsigned long id, std::string conteudo, unsigned short cargaHorariaConteudo);
        void imprimirConteudosMinistrados();
		
		//obter lista conteudos ministrados
		std::list<ConteudoMinistrado*>& getConteudos();

		//obter conteudo pelo id
		void removerConteudoMinistrado(unsigned long id);

		//limpar todos conteudos ministrados
		void limparConteudos();

	private:
		std::string nome;
		unsigned short int cargaHoraria;
		Pessoa* professor;
		SalaAula* sala;
		// unsigned long int idDisciplina; 
		std::list<ConteudoMinistrado*> conteudos;
		// std::list<std::string*> conteudosMinistrados;
};
#endif