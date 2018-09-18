#include <iostream>
#include "Headers/Teste/Dominios/Teste_Data.h"
#include "Headers/Teste/Dominios/Teste_Data_De_Validade.h"
#include "Headers/Teste/Dominios/Teste_Diaria.h"
#include "Headers/Teste/Dominios/Teste_Estado.h"
#include "Headers/Teste/Dominios/Teste_Tipo_Acomodacao.h"
#include "Headers/Teste/Dominios/Teste_Banco.h"
#include "Headers/Teste/Dominios/Teste_Agencia.h"
#include "Headers/Teste/Dominios/Teste_Capacidade_De_Acomodacao.h"
#include "Headers/Teste/Dominios/Teste_Nome.h"
#include "Headers/Teste/Dominios/Teste_Identificador.h"
#include "Headers/Teste/Dominios/Teste_Num_Cartao.h"
#include "Headers/Teste/Dominios/Teste_Num_Conta_Corrente.h"
#include "Headers/Teste/Dominios/Teste_Senha.h"



// todo: Testes das Entidades: Todas
// todo: Polimorfismo nos testes
int main() {
    Teste_Agencia testeAgencia;
    Teste_Banco testeBanco;
    Teste_Capacidade_De_Acomodacao testeCapacidadeDeAcomocadao;
    Teste_Diaria testeDiaria;
    Teste_Data testeData;
    Teste_Data_De_Validade testeDataDeValidade;
    Teste_Estado testeEstado;
    Teste_Identificador testeIdentificador;
    Teste_Nome testeNome;
    Teste_Num_Cartao testeNumCartao;
    Teste_Num_Conta_Corrente testeNumContaCorrente;
    Teste_Senha testeSenha;
    Teste_Tipo_Acomodacao testeTipoAcomodacao;

    if(testeAgencia.rodar() == Teste_Agencia::SUCESSO){
        std::cout << "Sucesso Agencia" << std::endl;
    } else {
        std::cout << "Falha Agencia" << std::endl;
    }

    if(testeData.rodar() == Teste_Data::SUCESSO){
        std::cout << "Sucesso Data" << std::endl;
    } else{
        std::cout << "Falha Data" << std::endl;
    }

    if(testeDataDeValidade.rodar() == Teste_Data_De_Validade::SUCESSO){
        std::cout << "Sucesso Data de Validade" << std::endl;
    } else{
        std::cout << "Falha Data de Validade" << std::endl;
    }

    if(testeDiaria.rodar() == Teste_Diaria::SUCESSO){
        std::cout << "Sucesso Diaria" << std::endl;
    } else{
        std::cout << "Falha Diaria" << std::endl;
    }

    if(testeEstado.rodar() == Teste_Estado::SUCESSO){
        std::cout << "Sucesso Estado" << std::endl;
    } else{
        std::cout << "Falha Estado" << std::endl;
    }

    if(testeTipoAcomodacao.rodar() == Teste_Tipo_Acomodacao::SUCESSO){
        std::cout << "Sucesso Tipo de Acomodação" << std::endl;
    } else{
        std::cout << "Falha Tipo de Acomodação" << std::endl;
    }

    if(testeBanco.rodar() == Teste_Banco::SUCESSO){
        std::cout << "Sucesso Banco" << std::endl;
    } else{
        std::cout << "Falha Banco" << std::endl;
    }

    if(testeCapacidadeDeAcomocadao.rodar() == Teste_Capacidade_De_Acomodacao::SUCESSO){
        std::cout << "Sucesso Capacidade de Acomodacao" << std::endl;
    } else{
        std::cout << "Falha Capacidade de Acomodacao" << std::endl;
    }

    if(testeNome.rodar() == Teste_Nome::SUCESSO){
        std::cout << "Sucesso Nome" << std::endl;
    } else{
        std::cout << "Falha Nome" << std::endl;
    }

    if(testeIdentificador.rodar() == Teste_Identificador::SUCESSO){
        std::cout << "Sucesso Identificador" << std::endl;
    } else{
        std::cout << "Falha Identificador" << std::endl;
    }

    if(testeNumCartao.rodar() == Teste_Num_Cartao::SUCESSO){
        std::cout << "Sucesso Numero do cartao" << std::endl;
    } else{
        std::cout << "Falha Numero do cartao" << std::endl;
    }

    if(testeNumContaCorrente.rodar() == Teste_Num_Conta_Corrente::SUCESSO){
        std::cout << "Sucesso Conta Corrente" << std::endl;
    } else {
        std::cout << "Falha Conta Corrente" << std::endl;
    }

    if(testeSenha.rodar() == Teste_Senha::SUCESSO){
        std::cout << "Sucesso Senha" << std::endl;
    } else {
        std::cout << "Falha Senha" << std::endl;
    }


    return 0;
}