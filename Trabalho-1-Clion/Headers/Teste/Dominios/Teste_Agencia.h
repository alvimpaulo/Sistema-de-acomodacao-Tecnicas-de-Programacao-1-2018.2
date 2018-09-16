//
// Created by paulo on 08-Sep-18.
//

#ifndef TRABALHO_1_CLION_TESTE_AGENCIA_H
#define TRABALHO_1_CLION_TESTE_AGENCIA_H
#include <string>
#include "../../Dominios/Agencia.h"

class Teste_Agencia{
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;

    int rodar();

private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_COMPRIMENTO_INVALIDO;

    int estado;
    Agencia *agencia;
    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
    void casoFalhaCaratereInvalido();
    void casoFalhaComprimentoInvalido();
};
#endif //TRABALHO_1_CLION_TESTE_AGENCIA_H
