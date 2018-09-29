//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_AGENCIA_H
#define TRABALHO_1_CLION_AGENCIA_H


#include <string>
#include <stdexcept>
#include <regex>

class Agencia {
public:
    Agencia();
    std::string getAgenciaNum() const{
        return agenciaNum;
    }
    void setAgenciaNum(std::string);

protected:

private:
    std::string agenciaNum;
};


#endif //TRABALHO_1_CLION_AGENCIA_H
