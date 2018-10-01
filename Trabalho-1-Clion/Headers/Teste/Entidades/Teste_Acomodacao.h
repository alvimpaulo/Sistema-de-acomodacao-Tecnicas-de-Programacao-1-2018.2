//
// Created by oetch on 16/09/2018.
//

//todo: Documentar
#ifndef TRABALHO_1_CLION_TESTE_ACOMODACAO_H
#define TRABALHO_1_CLION_TESTE_ACOMODACAO_H

#include <iostream>
#include <stdexcept>
#include <exception>
#include "../../Entidades/Acomodacao.h"
#include "../Teste.h"
#include "Teste_Entidades.h"

/**
 * @class Teste_Acomodacao Teste_Acomodacao.h
 * @brief Classe que testa a classe Acomodacao.
 * @details
 */
class Teste_Acomodacao: public Teste_Entidades{
public:
    void mensagemSucesso() override {
        std::cout << "Sucesso Acomodação" << std::endl;
    }
    void mensagemFalha() override {
        std::cout << "Falha Acomodação" << std::endl;
    }
private:
    static const std::string VALOR_VALIDO;

    Acomodacao *acomodacao;

    void configurar() override;
    void desconfigurar() override {
        delete acomodacao;
    }
    void casoSucesso() override;

};


#endif //TRABALHO_1_CLION_TESTE_ACOMODACAO_H
