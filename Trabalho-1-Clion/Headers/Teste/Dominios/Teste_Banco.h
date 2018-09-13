//
// Created by paulo on 13-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_BANCO_H
#define TRABALHO_1_CLION_TESTE_BANCO_H

#include <iostream>
#include "../../Dominios/Banco.h"
#include <stdexcept>


class Teste_Banco {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 0;
    int rodar();

private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;

    int estado;
    Banco *banco;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_BANCO_H
