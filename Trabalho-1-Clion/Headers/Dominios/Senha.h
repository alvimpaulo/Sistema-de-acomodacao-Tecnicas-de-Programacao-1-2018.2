//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_SENHA_H
#define TRABALHO_1_CLION_SENHA_H

#include <string>
#include <regex>
#include <stdexcept>

class Senha {
public:
    std::string getSenha(){
        return senha;
    }
    void setSenha(std::string novaSenha);

private:
    bool validar(std::string senha);
    std::string senha;
};


#endif //TRABALHO_1_CLION_SENHA_H
