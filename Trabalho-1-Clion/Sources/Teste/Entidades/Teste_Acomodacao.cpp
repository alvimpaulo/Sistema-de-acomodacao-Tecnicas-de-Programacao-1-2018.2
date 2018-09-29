//
// Created by oetch on 16/09/2018.
//

#include "../../../Headers/Teste/Entidades/Teste_Acomodacao.h"

int Teste_Acomodacao::rodar(){
    configurar();

    casoSucesso();

    desconfigurar();

    return estado;
}

void Teste_Acomodacao::configurar(){
    acomodacao = new Acomodacao;
    estado = SUCESSO;
}

void Teste_Acomodacao::casoSucesso(){
    Identificador identificador;
    Tipo_Acomodacao tipo;
    Capacidade_De_Acomodacao capacidade;
    Data dataInicio;
    Data dataTermino;
    Nome cidade;
    Estado estado;
    Diaria diaria;

    identificador.setIdentificador("abcde");
    tipo.setTipoAcomodacao("Casa");
    capacidade.setCapacidade_De_Acomodacao("1");
    dataInicio.setData("29/fev/2012");
    dataTermino.setData("29/fev/2012");
    cidade.setNome("Paulo Alvim.Alv");
    estado.setEstado("BA");
    diaria.setDiaria("1224.50");

    try {
        acomodacao->setDiaria(diaria);
        acomodacao->setTipo(tipo);
        acomodacao->setCapacidade(capacidade);
        acomodacao->setDataInicio(dataInicio);
        acomodacao->setDataTermino(dataTermino);
        acomodacao->setCidade(cidade);
        acomodacao->setEstado(estado);
        acomodacao->setDiaria(diaria);
    } catch (std::exception &e){
        this->estado = FALHA;
    }
}