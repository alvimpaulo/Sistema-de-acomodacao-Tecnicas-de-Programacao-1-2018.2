//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Num_Conta_Corrente.h"

bool Num_Conta_Corrente::validar(std::string numConta) {
    std::regex contaRegex(R"(\d{6})");

    if(std::regex_match(numConta, contaRegex))
        return true;
    else
        return false;
}

void Num_Conta_Corrente::setNum_Conta_Corrente(std::string novoNumConta) {
    if(validar(novoNumConta)){
        numConta = novoNumConta;
    } else{
        throw std::invalid_argument(novoNumConta + " Nao eh um numero de conta valido");
    }

}
