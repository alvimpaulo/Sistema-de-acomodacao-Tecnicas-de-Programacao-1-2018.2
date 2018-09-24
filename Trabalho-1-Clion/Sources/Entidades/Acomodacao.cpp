//
// Created by oetch on 16/09/2018.
//

#include "../../Headers/Entidades/Acomodacao.h"

Acomodacao::Acomodacao(){

}

void Acomodacao::setIdentificador(Identificador identificador){
    this->identificador = identificador;
}

void Acomodacao::setTipo(Tipo_Acomodacao tipo){
    this->tipo = tipo;
}

void Acomodacao::setCapacidade(Capacidade_De_Acomodacao capacidade){
    this->capacidade = capacidade;
}

void Acomodacao::setDataInicio(Data dataInicio){
    this->dataInicio = dataInicio;
}

void Acomodacao::setDataTermino(Data dataTermino){
    this->dataTermino = dataTermino;
}

void Acomodacao::setCidade(Cidade cidade){
    this->cidade = cidade;
}

void Acomodacao::setEstado(Estado estado){
    this->estado = estado;
}

void Acomodacao::setDiaria(Diaria diaria){
    this->diaria = diaria;
}