//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_ACOMODACAO_H
#define TRABALHO_1_CLION_TESTE_ACOMODACAO_H

#include <iostream>
#include "../../Entidades/Acomodacao.h"
#include "../Teste.h"

class Teste_Acomodacao: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Acomodação" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Acomodação" << std::endl;
    }
    int rodar();
private:
    static const std::string VALOR_VALIDO;

    Acomodacao *acomodacao;
    void configurar();
    void desconfigurar();
    void casoSucesso();
};


#endif //TRABALHO_1_CLION_TESTE_ACOMODACAO_H
