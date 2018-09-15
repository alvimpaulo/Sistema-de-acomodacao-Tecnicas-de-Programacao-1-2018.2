//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Capacidade_De_Acomodacao.h"

void Capacidade_De_Acomodacao::setCapacidade_De_Acomodacao(std::string novaCapacidade) {
    if(validar(novaCapacidade)){
        capacidade_de_acomodacao = novaCapacidade;
    } else {
        throw std::invalid_argument ("Numero da Capacidade invalido");
    }
}

bool Capacidade_De_Acomodacao::validar(std::string capacidade) {
    std::regex capacidadeRegex(R"([1-9])");

    if(std::regex_match(capacidade, capacidadeRegex))
        return true;
    else
        return false;
}
