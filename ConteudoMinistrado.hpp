#ifndef CONTEUDO_MINISTRADO_HPP
#define CONTEUDO_MINISTRADO_HPP

#include<string>

class ConteudoMinistrado{
    public:
        ConteudoMinistrado(unsigned long id, std::string descricao, unsigned short cargaHorariaConteudo);

        std::string& getDescricao();
        unsigned short getCargaHorariaConteudo();
        unsigned int getId();
    private:
        static unsigned int proxId;

        std::string descricao;
        unsigned short cargaHorariaConteudo;
        unsigned long id;
};
#endif