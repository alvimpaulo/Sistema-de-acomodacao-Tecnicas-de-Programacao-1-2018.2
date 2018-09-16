//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Identificador.h"



bool Identificador::validar(std::string identificador) {
    std::regex identificadorRegex(R"([a-z]{5})");

    if(std::regex_match(identificador, identificadorRegex)) {
        return true;
    }
    else
        return false;
}

void Identificador::setIdentificador(std::string novoIdentificador) {
    if(validar(novoIdentificador)){
        identificador = novoIdentificador;
    } else{
        throw std::invalid_argument(novoIdentificador + " Esta fora do padrao de identificador");
    }
}
