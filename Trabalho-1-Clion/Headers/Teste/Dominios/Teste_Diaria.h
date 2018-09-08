//
// Created by oetch on 08/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_DIARIA_H
#define TRABALHO_1_CLION_TESTE_DIARIA_H


#include <string>
#include "../../Dominios/Diaria.h"

class Teste_Diaria {
public:
    static const int SUCESSO = 0;
    static const int FALHA_CARACTERE_INVALIDO = 1;
    static const int FALHA_INTERVALO_INVALIDO = 2;
    static const int FALHA_GERAL = -1;

    int rodar();

protected:
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_INTERVALO_INVALIDO;
    int estado;
    Diaria *diaria;

    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalhaCaratereInvalido();
    void casoFalhaIntervaloInvalido();
};

#endif //TRABALHO_1_CLION_TESTE_DIARIA_H
