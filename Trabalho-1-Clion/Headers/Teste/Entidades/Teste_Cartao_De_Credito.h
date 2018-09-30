//
// Created by oetch on 16/09/2018.
//

//todo: Documentar
#ifndef TRABALHO_1_CLION_TESTE_CARTAO_DE_CREDITO_H
#define TRABALHO_1_CLION_TESTE_CARTAO_DE_CREDITO_H

#include "../Teste.h"
#include "../../Entidades/Cartao_De_Credito.h"
/**
 * @class Teste_Cartao_De_Credito Teste_Cartao_De_Credito.h
 * @brief Classe que testa a classe Cartao_De_Credito.
 * @details
 */
class Teste_Cartao_De_Credito: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Cartao de Credito" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Cartao de Credito" << std::endl;
    }
    int rodar();
private:
    static const std::string VALOR_VALIDO;

    Cartao_De_Credito *cartaoDeCredito = new Cartao_De_Credito();
    void configurar();
    void desconfigurar();
    void casoSucesso();
};


#endif //TRABALHO_1_CLION_TESTE_CARTAO_DE_CREDITO_H
