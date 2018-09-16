//
// Created by paulo on 15-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_NUM_CARTAO_H
#define TRABALHO_1_CLION_TESTE_NUM_CARTAO_H

#include <iostream>
#include "../../Dominios/Num_Cartao_Credito.h"
#include <stdexcept>

class Teste_Num_Cartao {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;
    int rodar();

private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;

    int estado;
    Num_Cartao_Credito *numCartao;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_NUM_CARTAO_H
