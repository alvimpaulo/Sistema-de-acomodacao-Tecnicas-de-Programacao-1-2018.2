//
// Created by paulo on 16-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_NUM_CONTA_CORRENTE_H
#define TRABALHO_1_CLION_TESTE_NUM_CONTA_CORRENTE_H

#include <iostream>
#include "../../Dominios/Num_Conta_Corrente.h"
#include <stdexcept>

class Teste_Num_Conta_Corrente {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;
    int rodar();

private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;

    int estado;
    Num_Conta_Corrente *numContaCorrente;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_NUM_CONTA_CORRENTE_H
