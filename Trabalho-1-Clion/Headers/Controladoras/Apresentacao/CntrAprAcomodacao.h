//
// Created by paulo on 16-Nov-18.
//

#ifndef TRABALHO_1_CLION_CNTRAPRACOMODACAO_H
#define TRABALHO_1_CLION_CNTRAPRACOMODACAO_H


#include "../../Dominios/Identificador.h"
#include "../../Interfaces/Apresentacao/InterAprAcomodacao.h"

class CntrAprAcomodacao: public InterAprAcomodacao{
private:
    InterServAcomodacao* interServAcomodacao;
    static const int OPCAO_NAO = 0;
    static const int OPCAO_SIM = 1;
    static const int OPCAO_EDITAR_ACOMODACAO = 1;
    static const int OPCAO_CADASTRAR_ACOMODACAO = 2;
    static const int OPCAO_DESCADASTRAR_ACOMODACAO = 3;
    static const int OPCAO_PESQUISAR_ACOMODACAO = 4;
    static const int OPCAO_SAIR_ACOMODACAO = 5;
protected:
public:
    CntrAprAcomodacao();
    void executar(Identificador &identificador) override;
    void pesquisar(Identificador &identificador);
    void cadastrar(Identificador &identificador);
    void descadastrar(Identificador &identificador);
    void editar(Identificador &identificador);
    void setCntrsServAcomodacao(InterServAcomodacao *cntrsServAcomodacao) override;
    virtual ~CntrAprAcomodacao();
};


#endif //TRABALHO_1_CLION_CNTRAPRACOMODACAO_H
