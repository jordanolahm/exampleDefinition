#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "ConteudoMinistrado.hpp"

class SalaAula;//Forward Declaration

class Disciplina{
	public:
		
		Disciplina(const std::string nome, SalaAula* sala, unsigned short int cargaHoraria,Pessoa* Professor);
		
		~Disciplina();

		std::string getNome() const;
		void setNome(std::string nome);
		
		int getCargaHoraria() const;
		void setCargaHoraria(unsigned int carga);

		Pessoa* getProfessor() const;
        void setProfessor(Pessoa* prof);
		
		SalaAula* getSalaAula() const;
		void setSalaAula(SalaAula* sala);
      

		unsigned long int getIdDisciplina(); 
		void setIdDisciplina(unsigned long int id );

		void imprimirDados(std::string& cabecalho, unsigned int cargaTotalCurso);

		void adicionarConteudoMinistrado(unsigned long id, const std::string conteudo, unsigned short cargaHorariaConteudo);
        void imprimirConteudosMinistrados();
		
		//obter lista conteudos ministrados
		const std::list<ConteudoMinistrado*>& getConteudos() const;

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