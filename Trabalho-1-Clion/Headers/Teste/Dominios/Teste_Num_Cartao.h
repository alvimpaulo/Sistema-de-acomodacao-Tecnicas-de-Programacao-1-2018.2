//
// Created by paulo on 15-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_NUM_CARTAO_H
#define TRABALHO_1_CLION_TESTE_NUM_CARTAO_H

#include <iostream>
#include "../../Dominios/Num_Cartao_Credito.h"
#include "../Teste.h"
#include <stdexcept>

class Teste_Num_Cartao: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Capacidade de Acomodação" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Capacidade de Acomodação" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;


    Num_Cartao_Credito *numCartao;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_NUM_CARTAO_H
