//
// Created by oetch on 08/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_DATA_DE_VALIDADE_H
#define TRABALHO_1_CLION_TESTE_DATA_DE_VALIDADE_H


#include "../../Dominios/Data_De_Validade.h"
#include "../Teste.h"

/**
 * @class Teste_Data_De_Validade Teste_Data_De_Validade.h
 * @brief Classe que testa a classe Data_De_Validade
 * @details
 */
class Teste_Data_De_Validade: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Data de Validade" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Data de Validade" << std::endl;
    }
protected:
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_COMPRIMENTO_INVALIDO;
    static const std::string VALOR_INTERVALO_MES_INVALIDO;

    Data_De_Validade *data_de_validade;

    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
    void casoFalhaCaratereInvalido();
    void casoFalhaComprimentoInvalido();
    void casoFalhaIntervaloMesInvalido();
};


#endif //TRABALHO_1_CLION_TESTE_DATA_DE_VALIDADE_H
