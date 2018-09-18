//
// Created by paulo on 13-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_BANCO_H
#define TRABALHO_1_CLION_TESTE_BANCO_H

#include <iostream>
#include "../../Dominios/Banco.h"
#include "../Teste.h"
#include <stdexcept>


class Teste_Banco: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Banco" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Banco" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;

    Banco *banco;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_BANCO_H
