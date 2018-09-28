//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_IDENTIFICADOR_H
#define TRABALHO_1_CLION_IDENTIFICADOR_H

#include <regex>
#include <stdexcept>
#include <string>

class Identificador {
public:
    void setIdentificador(std::string novoIdentificador);
    std::string getIdentificador(){
        return identificador;
    }

private:
    std::string identificador;
    bool validar(std::string identificador);


};


#endif //TRABALHO_1_CLION_IDENTIFICADOR_H
