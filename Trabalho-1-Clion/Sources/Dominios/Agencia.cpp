//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Agencia.h"

Agencia::Agencia() {
    setAgenciaNum("00000");
}

Agencia::~Agencia() {

}

void Agencia::setAgenciaNum(std::string novoAgenciaNum) throw (std::invalid_argument){
    std::regex agenciaNumRegex(R"(\d{5})");

    if(std::regex_match(novoAgenciaNum, agenciaNumRegex))
        agenciaNum = novoAgenciaNum;
    else
        throw std::invalid_argument ("Numero de agencia fora do padrao");
}