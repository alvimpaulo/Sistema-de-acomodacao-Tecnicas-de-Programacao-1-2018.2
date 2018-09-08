#include <iostream>
#include "Headers/Teste/Dominios/Teste_Agencia.h"
#include "Headers/Teste/Dominios/Teste_Data.h"
#include "Headers/Teste/Dominios/Teste_Data_De_Validade.h"
#include "Headers/Teste/Dominios/Teste_Diaria.h"
#include "Headers/Teste/Dominios/Teste_Estado.h"
#include "Headers/Teste/Dominios/Teste_Tipo_Acomodacao.h"


int main() {

    Teste_Agencia testeAgencia;
    Teste_Data testeData;
    Teste_Data_De_Validade testeDataDeValidade;
    Teste_Diaria testeDiaria;
    Teste_Estado testeEstado;
    Teste_Tipo_Acomodacao testeTipoAcomodacao;

    if(testeAgencia.rodar() == Teste_Agencia::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }

    if(testeData.rodar() == Teste_Data::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }

    if(testeDataDeValidade.rodar() == Teste_Data_De_Validade::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }

    if(testeDiaria.rodar() == Teste_Diaria::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }

    if(testeEstado.rodar() == Teste_Estado::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }

    if(testeTipoAcomodacao.rodar() == Teste_Tipo_Acomodacao::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }


    return 0;
}