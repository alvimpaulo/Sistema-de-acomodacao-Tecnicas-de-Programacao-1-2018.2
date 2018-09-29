//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_ACOMODACAO_H
#define TRABALHO_1_CLION_ACOMODACAO_H

#include "../../Headers/Dominios/Identificador.h"
#include "../../Headers/Dominios/Tipo_Acomodacao.h"
#include "../../Headers/Dominios/Capacidade_De_Acomodacao.h"
#include "../../Headers/Dominios/Data.h"
#include "../../Headers/Dominios/Nome.h"
#include "../../Headers/Dominios/Estado.h"
#include "../../Headers/Dominios/Diaria.h"


class Acomodacao {
public:

    void setIdentificador(Identificador identificador){
        this->identificador = identificador;
    }
    Identificador getIdentificador() const{
        return identificador;
    }

    void setTipo(Tipo_Acomodacao tipo){
        this->tipo = tipo;
    }
    Tipo_Acomodacao getTipo() const{
        return tipo;
    }

    void setCapacidade(Capacidade_De_Acomodacao capacidade){
        this->capacidade = capacidade;
    }
    Capacidade_De_Acomodacao getCapacidade() const{
        return capacidade;
    }

    void setDataInicio(Data dataInicio){
        this->dataInicio = dataInicio;
    }
    Data getDataInicio() const{
        return dataInicio;
    }

    void setDataTermino(Data dataTermino){
        this->dataTermino = dataTermino;
    }
    Data getDataTermino() const{
        return dataTermino;
    }

    void setCidade(Nome cidade){
        this->cidade = cidade;
    }
    Nome getCidade() const{
        return cidade;
    }

    void setEstado(Estado estado){
        this->estado = estado;
    }
    Estado getEstado() const{
        return estado;
    }

    void setDiaria(Diaria diaria){
        this->diaria = diaria;
    }
    Diaria getDiaria() const{
        return diaria;
    }

protected:
private:
    Identificador identificador;
    Tipo_Acomodacao tipo;
    Capacidade_De_Acomodacao capacidade;
    Data dataInicio;
    Data dataTermino;
    Nome cidade;
    Estado estado;
    Diaria diaria;
};


#endif //TRABALHO_1_CLION_ACOMODACAO_H
