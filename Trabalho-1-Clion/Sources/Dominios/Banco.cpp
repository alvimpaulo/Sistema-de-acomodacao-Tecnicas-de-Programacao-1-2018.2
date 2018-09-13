//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Banco.h"


void Banco::setBancoNum(std::string novoBancoNum) {
    std::regex bancoNumRegex(R"(\d{3})");

    if(std::regex_match(novoBancoNum, bancoNumRegex)) {
        bancoNum = novoBancoNum;
    }
    else {
        throw std::invalid_argument("Numero do banco fora do padrao");
    }
}

Banco::Banco() {
    bancoNum = "000";
}
