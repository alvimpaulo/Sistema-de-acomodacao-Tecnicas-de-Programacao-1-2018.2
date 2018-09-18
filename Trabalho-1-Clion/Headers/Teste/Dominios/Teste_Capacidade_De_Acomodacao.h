//
// Created by paulo on 15-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_CAPACIDADE_DE_ACOMOCADAO_H
#define TRABALHO_1_CLION_TESTE_CAPACIDADE_DE_ACOMOCADAO_H

#include <iostream>
#include "../../Dominios/Capacidade_De_Acomodacao.h"
#include "../Teste.h"
#include <stdexcept>

class Teste_Capacidade_De_Acomodacao: public Teste{

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

    Capacidade_De_Acomodacao *capacidade;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();

};


#endif //TRABALHO_1_CLION_TESTE_CAPACIDADE_DE_ACOMOCADAO_H
