//
// Created by paulo on 16-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_SENHA_H
#define TRABALHO_1_CLION_TESTE_SENHA_H

#include <iostream>
#include "../../Dominios/Senha.h"
#include <stdexcept>

class Teste_Senha {

public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;
    int rodar();

private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;

    int estado;
    Senha *senha;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_SENHA_H
