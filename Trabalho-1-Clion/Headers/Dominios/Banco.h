//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_BANCO_H
#define TRABALHO_1_CLION_BANCO_H

#include <string>
#include <regex>

class Banco {
public:

    Banco();
    std::string getBancoNum() const{
        return bancoNum;
    }
    void setBancoNum(std::string);

private:
    std::string bancoNum;
};


#endif //TRABALHO_1_CLION_BANCO_H
