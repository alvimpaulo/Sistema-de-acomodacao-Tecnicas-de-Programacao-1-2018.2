//
// Created by oetch on 16/09/2018.
//

//todo: Documentar
#ifndef TRABALHO_1_CLION_TESTE_CONTA_CORRENTE_H
#define TRABALHO_1_CLION_TESTE_CONTA_CORRENTE_H

#include <iostream>
#include "../Teste.h"
#include "../../Entidades/Conta_Corrente.h"

/**
 * @class Teste_Conta_Corrente Teste_Conta_Corrente.h
 * @brief Classe que testa a classe Conta_Corrente.
 * @details
 */
class Teste_Conta_Corrente: public Teste{
public:
    void mensagemSucesso() override {
        std::cout << "Sucesso Conta Corrente" << std::endl;
    }
    void mensagemFalha() override {
        std::cout << "Falha Conta Corrente" << std::endl;
    }
    int rodar() override;
private:
    static const std::string VALOR_VALIDO;

    Conta_Corrente *contaCorrente;
    void configurar() override{
        contaCorrente = new Conta_Corrente();
        estado = SUCESSO;
    }
    void desconfigurar() override{
        delete contaCorrente;
    }
    void casoSucesso() override;
};


#endif //TRABALHO_1_CLION_TESTE_CONTA_CORRENTE_H
