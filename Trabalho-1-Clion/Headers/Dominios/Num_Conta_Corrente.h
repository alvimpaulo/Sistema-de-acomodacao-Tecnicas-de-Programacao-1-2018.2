//
// Created by paulo on 04-Sep-18.
//
//todo: documentar
#ifndef TRABALHO_1_CLION_NUM_CONTA_CORRENTE_H
#define TRABALHO_1_CLION_NUM_CONTA_CORRENTE_H

#include <string>
#include <regex>
#include <stdexcept>

class Num_Conta_Corrente {
public:
    std::string getNum_Conta_Corrente() const{
        return numConta;
    }
    void setNum_Conta_Corrente(std::string novoNumConta);

private:
    bool validar(std::string numConta);
    std::string numConta;
};


#endif //TRABALHO_1_CLION_NUM_CONTA_CORRENTE_H
