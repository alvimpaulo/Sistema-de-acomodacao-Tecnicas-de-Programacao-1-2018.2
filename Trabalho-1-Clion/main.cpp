#include <iostream>
#include "Headers/Teste/Dominios/Teste_Data.h"
#include "Headers/Teste/Dominios/Teste_Data_De_Validade.h"
#include "Headers/Teste/Dominios/Teste_Diaria.h"
#include "Headers/Teste/Dominios/Teste_Estado.h"
#include "Headers/Teste/Dominios/Teste_Tipo_Acomodacao.h"
#include "Headers/Teste/Dominios/Teste_Banco.h"


int main() {

    Teste_Data testeData;
    Teste_Data_De_Validade testeDataDeValidade;
    Teste_Diaria testeDiaria;
    Teste_Estado testeEstado;
    Teste_Tipo_Acomodacao testeTipoAcomodacao;
    Teste_Banco testeBanco;




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

    if(testeBanco.rodar() == Teste_Banco::SUCESSO){
        std::cout << "SUCESSO" << std::endl;
    } else{
        std::cout << "FALHA" << std::endl;
    }


    return 0;
}