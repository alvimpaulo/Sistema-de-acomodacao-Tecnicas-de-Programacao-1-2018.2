//
// Created by oetch on 08/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_DATA_DE_VALIDADE_H
#define TRABALHO_1_CLION_TESTE_DATA_DE_VALIDADE_H


#include "../../Dominios/Data_De_Validade.h"

class Teste_Data_De_Validade {
public:
    static const int SUCESSO = 0;
    static const int FALHA_CARACTERE_INVALIDO = 1;
    static const int FALHA_COMPRIMENTO_INVALIDO = 2;
    static const int FALHA_INTERVALO_MES_INVALIDO = 4;
    static const int FALHA_GERAL = -1;

    int rodar();

protected:
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_COMPRIMENTO_INVALIDO;
    static const std::string VALOR_INTERVALO_MES_INVALIDO;
    int estado;
    Data_De_Validade *data_de_validade;

    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalhaCaratereInvalido();
    void casoFalhaComprimentoInvalido();
    void casoFalhaIntervaloMesInvalido();
};


#endif //TRABALHO_1_CLION_TESTE_DATA_DE_VALIDADE_H
