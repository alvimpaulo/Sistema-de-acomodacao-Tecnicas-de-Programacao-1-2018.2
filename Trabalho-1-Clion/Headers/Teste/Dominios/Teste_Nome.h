//
// Created by paulo on 15-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_NOME_H
#define TRABALHO_1_CLION_TESTE_NOME_H
#include <iostream>
#include "../../Dominios/Nome.h"
#include <stdexcept>

class Teste_Nome {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;
    int rodar();

private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;

    int estado;
    Nome *nome;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();

};


#endif //TRABALHO_1_CLION_TESTE_NOME_H
