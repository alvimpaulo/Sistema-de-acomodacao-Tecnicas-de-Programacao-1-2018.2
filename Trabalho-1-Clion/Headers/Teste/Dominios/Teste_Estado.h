//
// Created by oetch on 08/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_ESTADO_H
#define TRABALHO_1_CLION_TESTE_ESTADO_H


#include "../../Dominios/Estado.h"

class Teste_Estado {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;

    int rodar();

protected:
private:
    static const std::string VALOR_VALIDO;
    static const std::string VALOR_CARACTERE_INVALIDO;
    static const std::string VALOR_COMPRIMENTO_INVALIDO;
    int estado;
    Estado *UF;

    void configurar();
    void desconfigurar();

    void casoSucesso();
    void casoFalha();
    void casoFalhaCaratereInvalido();
    void casoFalhaComprimentoInvalido();
};


#endif //TRABALHO_1_CLION_TESTE_ESTADO_H
