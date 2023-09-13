#include "ConteudoMinistrado.hpp"

unsigned int ConteudoMinistrado::proxId{0};

ConteudoMinistrado::ConteudoMinistrado(unsigned long id, std::string descricao, unsigned short cargaHorariaConteudo):
    descricao{descricao}, cargaHorariaConteudo{cargaHorariaConteudo}, id{id}{
}

std::string& ConteudoMinistrado::getDescricao(){
	return descricao;
}

unsigned short ConteudoMinistrado::getCargaHorariaConteudo(){
	return cargaHorariaConteudo;
}

unsigned int ConteudoMinistrado::getId(){
	return id;
}