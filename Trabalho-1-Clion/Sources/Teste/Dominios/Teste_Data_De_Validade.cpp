//
// Created by oetch on 08/09/2018.
//

#include "../../../Headers/Teste/Dominios/Teste_Data_De_Validade.h"


const std::string Teste_Data_De_Validade::VALOR_VALIDO = "12/99";
const std::string Teste_Data_De_Validade::VALOR_CARACTERE_INVALIDO = "*8/84";
const std::string Teste_Data_De_Validade::VALOR_COMPRIMENTO_INVALIDO = "10/2000";
const std::string Teste_Data_De_Validade::VALOR_INTERVALO_MES_INVALIDO = "31/ola/2001";

int Teste_Data_De_Validade::rodar(){
    configurar();

    casoSucesso();
    casoFalhaCaratereInvalido();
    casoFalhaComprimentoInvalido();
    casoFalhaIntervaloMesInvalido();

    desconfigurar();

    return estado;
}

void Teste_Data_De_Validade::configurar(){
    data_de_validade = new Data_De_Validade;
    estado = SUCESSO;
}

void Teste_Data_De_Validade::desconfigurar(){
    delete data_de_validade;
}

void Teste_Data_De_Validade::casoSucesso(){
    try {
        data_de_validade->setData_De_Validade(VALOR_VALIDO);
        if(data_de_validade->getData_De_Validade() != VALOR_VALIDO){
            estado |= FALHA_GERAL;
        }
    }
    catch(std::invalid_argument e){
        estado |= FALHA_GERAL;
    }
}

void Teste_Data_De_Validade::casoFalhaCaratereInvalido(){
    try {
        data_de_validade->setData_De_Validade(VALOR_CARACTERE_INVALIDO);
        estado |= FALHA_CARACTERE_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}

void Teste_Data_De_Validade::casoFalhaComprimentoInvalido(){
    try {
        data_de_validade->setData_De_Validade(VALOR_COMPRIMENTO_INVALIDO);
        estado |= FALHA_COMPRIMENTO_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}

void Teste_Data_De_Validade::casoFalhaIntervaloMesInvalido(){
    try{
        data_de_validade->setData_De_Validade(VALOR_INTERVALO_MES_INVALIDO);
        estado |= FALHA_INTERVALO_MES_INVALIDO;
    }
    catch(std::invalid_argument e){
        return;
    }
}
