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

void Teste_Acomodacao::desconfigurar(){
    delete acomodacao;
}

void Teste_Acomodacao::casoSucesso(){

}