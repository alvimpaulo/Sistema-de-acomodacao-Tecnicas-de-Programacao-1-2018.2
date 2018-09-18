//
// Created by paulo on 15-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_NOME_H
#define TRABALHO_1_CLION_TESTE_NOME_H
#include <iostream>
#include "../../Dominios/Nome.h"
#include "../Teste.h"
#include <stdexcept>

class Teste_Nome: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Nome" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Nome" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;


    Nome *nome;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();

};


#endif //TRABALHO_1_CLION_TESTE_NOME_H
