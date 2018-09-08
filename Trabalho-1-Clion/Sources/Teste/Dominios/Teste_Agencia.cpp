//
// Created by oetch on 08/09/2018.
//

#include "../../../Headers/Teste/Dominios/Teste_Agencia.h"

const std::string Teste_Agencia::VALOR_VALIDO = "01234";
const std::string Teste_Agencia::VALOR_CARACTERE_INVALIDO = "01F34";
const std::string Teste_Agencia::VALOR_COMPRIMENTO_INVALIDO = "012345";

int Teste_Agencia::rodar(){
    configurar();

    casoSucesso();
    casoFalhaCaratereInvalido();
    casoFalhaComprimentoInvalido();

    desconfigurar();

    return estado;
}

void Teste_Agencia::configurar(){
    agencia = new Agencia;
    estado = SUCESSO;
}

void Teste_Agencia::desconfigurar(){
    delete agencia;
}

void Teste_Agencia::casoSucesso(){
    try {
        agencia->setAgenciaNum(VALOR_VALIDO);
        if(agencia->getAgenciaNum() != VALOR_VALIDO){
            estado |= FALHA_GERAL;
        }
    }
    catch(std::invalid_argument e){
        estado |= FALHA_GERAL;
    }
}

void Teste_Agencia::casoFalhaCaratereInvalido(){
    try {
        agencia->setAgenciaNum(VALOR_CARACTERE_INVALIDO);
        estado |= FALHA_CARACTERE_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}

void Teste_Agencia::casoFalhaComprimentoInvalido(){
    try{
        agencia->setAgenciaNum(VALOR_COMPRIMENTO_INVALIDO);
        estado |= FALHA_COMPRIMENTO_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}