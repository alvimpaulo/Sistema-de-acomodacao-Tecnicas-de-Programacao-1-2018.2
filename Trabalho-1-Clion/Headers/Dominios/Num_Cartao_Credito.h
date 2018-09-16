//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_NUM_CARTAO_CREDITO_H
#define TRABALHO_1_CLION_NUM_CARTAO_CREDITO_H

#include <string>
#include <regex>
#include <stdexcept>

class Num_Cartao_Credito {
public:
    std::string getNum_Cartao(){
        return numCartao;
    }
    void setNum_Cartao(std::string novoNumCartao);

private:
    bool validar(std::string numCartao);
    std::string numCartao;
};


#endif //TRABALHO_1_CLION_NUM_CARTAO_CREDITO_H
