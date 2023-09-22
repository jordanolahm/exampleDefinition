#ifndef PESSOA_H
#define PESSOA_H

#include <cstdint>
#include <string>

class Pessoa {
   public:
  
    Pessoa( const std::string& nome, const uint64_t cpf, unsigned short idade);

    ~Pessoa(); // Destrutor

    uint64_t getCpf() const;
    void setCpf(uint64_t novoCpf);

    std::string getNome() const;
    void setNome(std::string novoNome);

    unsigned short int getIdade() const;
    void setIdade(unsigned short novaIdade);

   private:
    bool validarCPF(uint64_t cpfTeste);

    std::string nome;
    uint64_t cpf;
    uint8_t idade;
};
#endif