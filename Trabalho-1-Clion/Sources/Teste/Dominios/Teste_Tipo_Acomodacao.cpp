//
// Created by oetch on 08/09/2018.
//

#include <stdexcept>
#include "../../../Headers/Teste/Dominios/Teste_Tipo_Acomodacao.h"

const std::string Teste_Tipo_Acomodacao::VALOR_VALIDO = "flaT";
const std::string Teste_Tipo_Acomodacao::VALOR_CARACTERE_INVALIDO = "C4s4";
const std::string Teste_Tipo_Acomodacao::VALOR_COMPRIMENTO_INVALIDO = "Apartamento123";

int Teste_Tipo_Acomodacao::rodar(){
    configurar();

    casoSucesso();
    casoFalhaCaratereInvalido();
    casoFalhaComprimentoInvalido();

    desconfigurar();

    return estado;
}

void Teste_Tipo_Acomodacao::configurar(){
    tipo_acomodacao = new Tipo_Acomodacao;
    estado = SUCESSO;
}

void Teste_Tipo_Acomodacao::desconfigurar(){
    delete tipo_acomodacao;
}

void Teste_Tipo_Acomodacao::casoSucesso(){
    try {
        tipo_acomodacao->setTipoAcomodacao(VALOR_VALIDO);
        std::string tmpStr = VALOR_VALIDO;
        std::transform(tmpStr.begin(), tmpStr.end(), tmpStr.begin(), ::tolower);
        tmpStr[0] = std::toupper(tmpStr[0]);
        if(tipo_acomodacao->getTipoAcomodacao() != tmpStr){
            estado |= FALHA_GERAL;
        }
    }
    catch(std::invalid_argument e){
        estado |= FALHA_GERAL;
    }
}

void Teste_Tipo_Acomodacao::casoFalhaCaratereInvalido(){
    try {
        tipo_acomodacao->setTipoAcomodacao(VALOR_CARACTERE_INVALIDO);
        estado |= FALHA_CARACTERE_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}

void Teste_Tipo_Acomodacao::casoFalhaComprimentoInvalido(){
    try{
        tipo_acomodacao->setTipoAcomodacao(VALOR_COMPRIMENTO_INVALIDO);
        estado |= FALHA_COMPRIMENTO_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}