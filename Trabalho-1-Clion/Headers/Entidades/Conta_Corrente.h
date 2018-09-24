//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_CONTA_CORRENTE_H
#define TRABALHO_1_CLION_CONTA_CORRENTE_H

#include "../../Headers/Dominios/Num_Conta_Corrente.h"
#include "../../Headers/Dominios/Agencia.h"
#include "../../Headers/Dominios/Banco.h"

class Conta_Corrente {
public:
    Conta_Corrente();

    void setNumero(Num_Conta_Corrente numero);
    Num_Conta_Corrente getNumero() const{
        return numero;
    }

    void setAgencia(Agencia agencia);
    Agencia getAgencia() const{
        return agencia;
    }

    void setBanco(Banco banco);
    Banco getBanco() const{
        return banco;
    }

protected:
private:
    Num_Conta_Corrente numero;
    Agencia agencia;
    Banco banco;
};


#endif //TRABALHO_1_CLION_CONTA_CORRENTE_H
