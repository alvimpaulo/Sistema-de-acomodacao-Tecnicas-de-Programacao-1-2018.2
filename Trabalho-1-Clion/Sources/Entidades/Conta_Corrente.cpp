//
// Created by oetch on 16/09/2018.
//

#include "../../Headers/Entidades/Conta_Corrente.h"

Conta_Corrente::Conta_Corrente(){

}

void Conta_Corrente::setNumero(Num_Conta_Corrente numero){
    this->numero = numero;
}

void Conta_Corrente::setAgencia(Agencia agencia){
    this->agencia = agencia;
}

void Conta_Corrente::setBanco(Banco banco){
    this->banco = banco;
}