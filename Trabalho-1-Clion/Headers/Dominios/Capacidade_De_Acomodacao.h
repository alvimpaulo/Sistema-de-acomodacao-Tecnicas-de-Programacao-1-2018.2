//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_CAPACIDADE_DE_ACOMODACAO_H
#define TRABALHO_1_CLION_CAPACIDADE_DE_ACOMODACAO_H
#include <string>
#include <regex>
#include <stdexcept>

class Capacidade_De_Acomodacao {
public:
    std::string getCapacidade_de_Acomodacao() const{
        return capacidade_de_acomodacao;
    }
    void setCapacidade_De_Acomodacao(std::string novaCapacidade);

private:
    bool validar(std::string capacidade);
    std::string capacidade_de_acomodacao;
};


#endif //TRABALHO_1_CLION_CAPACIDADE_DE_ACOMODACAO_H
