//
// Created by oetch on 30/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_ENTIDADES_H
#define TRABALHO_1_CLION_TESTE_ENTIDADES_H


#include "../Teste.h"

class Teste_Entidades: public Teste{
public:
    int rodar() override;
protected:
private:
    virtual void casoSucesso() = 0;
};


#endif //TRABALHO_1_CLION_TESTE_ENTIDADES_H
