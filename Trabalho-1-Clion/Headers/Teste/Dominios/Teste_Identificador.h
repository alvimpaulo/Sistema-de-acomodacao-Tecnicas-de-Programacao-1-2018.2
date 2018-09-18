//
// Created by paulo on 15-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_IDENTIFICADOR_H
#define TRABALHO_1_CLION_TESTE_IDENTIFICADOR_H

#include <iostream>
#include "../../Dominios/Identificador.h"
#include "../Teste.h"
#include <stdexcept>

class Teste_Identificador: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Numero do Cartao" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Numero do Cartao" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_INVALIDO;


    Identificador *identificador;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
};


#endif //TRABALHO_1_CLION_TESTE_IDENTIFICADOR_H
