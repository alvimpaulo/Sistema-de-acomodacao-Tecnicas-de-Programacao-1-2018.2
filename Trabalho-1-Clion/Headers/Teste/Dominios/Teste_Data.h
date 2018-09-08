//
// Created by oetch on 08/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_DATA_H
#define TRABALHO_1_CLION_TESTE_DATA_H


#include <string>
#include "../../Dominios/Data.h"

class Teste_Data {
public:
    static const int SUCESSO = 0;
    static const int FALHA_CARACTERE_INVALIDO = 1;
    static const int FALHA_COMPRIMENTO_INVALIDO = 2;
    static const int FALHA_INTERVALO_ANO_INVALIDO = 4;
    static const int FALHA_INTERVALO_MES_INVALIDO = 8;
    static const int FALHA_INTERVALO_DIA_MES_QUALQUER_INVALIDO = 16;
    static const int FALHA_INTERVALO_DIA_FEVEREIRO_NORMAL_INVALIDO = 32;
    static const int FALHA_INTERVALO_DIA_FEVEREIRO_BIXESTO_INVALIDO = 64;
    static const int FALHA_GERAL = -1;

    int rodar();

protected:
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_COMPRIMENTO_INVALIDO;
    static const std::string VALOR_INTERVALO_ANO_INVALIDO;
    static const std::string VALOR_MES_INVALIDO;
    static const std::string VALOR_INTERVALO_DIA_MES_QUALQUER_INVALIDO;
    static const std::string VALOR_INTERVALO_DIA_FEVEREIRO_NORMAL_INVALIDO;
    static const std::string VALOR_INTERVALO_DIA_FEVEREIRO_BIXESTO_INVALIDO;
    int estado;
    Data *data;

    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalhaCaratereInvalido();
    void casoFalhaComprimentoInvalido();
    void casoFalhaIntervaloAnoInvalido();
    void casoFalhaMesInvalido();
    void casoFalhaIntervaloDiaMesQualquerInvalido();
    void casoFalhaIntervaloDiaFevereiroNormalInvalido();
    void casoFalhaIntervaloDiaFevereiroBixestoInvalido();
};


#endif //TRABALHO_1_CLION_TESTE_DATA_H
