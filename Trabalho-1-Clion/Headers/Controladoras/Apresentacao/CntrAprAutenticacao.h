//
// Created by paulo on 16-Nov-18.
//

#ifndef TRABALHO_1_CLION_CNTRAPRAUTENTICACAO_H
#define TRABALHO_1_CLION_CNTRAPRAUTENTICACAO_H


#include "../../Interfaces/Apresentacao/InterAprAutenticacao.h"

class CntrAprAutenticacao: public InterAprAutenticacao{
private:
    InterServAutenticacao* interServAutenticacao;
protected:
public:
    CntrAprAutenticacao();
    void autenticar(Identificador &identificador) override;
    void setCntrsServAutenticacao(InterServAutenticacao* interServAutenticacao) override;
    virtual ~CntrAprAutenticacao();
};


#endif //TRABALHO_1_CLION_CNTRAPRAUTENTICACAO_H
