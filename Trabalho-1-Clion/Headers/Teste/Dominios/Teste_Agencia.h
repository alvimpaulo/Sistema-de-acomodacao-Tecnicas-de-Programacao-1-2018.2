//
// Created by paulo on 08-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_AGENCIA_H
#define TRABALHO_1_CLION_TESTE_AGENCIA_H
#include <string>
#include <iostream>
#include "../../Dominios/Agencia.h"
#include "../Teste.h"

class Teste_Agencia: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Agencia" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Agencia" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_COMPRIMENTO_INVALIDO;

    Agencia *agencia;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
    void casoFalhaCaratereInvalido();
    void casoFalhaComprimentoInvalido();
};
#endif //TRABALHO_1_CLION_TESTE_AGENCIA_H
