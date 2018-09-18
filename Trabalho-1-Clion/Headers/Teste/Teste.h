//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_DOMINIO_H
#define TRABALHO_1_CLION_TESTE_DOMINIO_H


#include <string>

class Teste {
public:
    static const int SUCESSO = 0;
    static const int FALHA = 1;
    int rodar();
    virtual void mensagemSucesso() = 0;
    virtual void mensagemFalha() = 0;

protected:
    int estado;
private:
    virtual void configurar() = 0;
    virtual void desconfigurar() = 0;

    virtual void casoSucesso() = 0;
    virtual void casoFalha() = 0;
};


#endif //TRABALHO_1_CLION_TESTE_DOMINIO_H
