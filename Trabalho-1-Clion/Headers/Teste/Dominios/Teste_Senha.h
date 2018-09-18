//
// Created by paulo on 16-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_SENHA_H
#define TRABALHO_1_CLION_TESTE_SENHA_H

#include <iostream>
#include "../../Dominios/Senha.h"
#include "../Teste.h"
#include <stdexcept>

class Teste_Senha: public Teste{

public:
    void mensagemSucesso(){
        std::cout << "Sucesso Senha" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Senha" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;


    Senha *senha;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_SENHA_H
