//
// Created by paulo on 16-Nov-18.
//

#include <iostream>
#include "../../../Headers/Controladoras/Apresentacao/CntrAprAcomodacao.h"
#include "../../../Headers/Dominios/Tipo_Acomodacao.h"
#include "../../../Headers/Dominios/Capacidade_De_Acomodacao.h"
#include "../../../Headers/Dominios/Diaria.h"
#include "../../../Headers/Dominios/Nome.h"
#include "../../../Headers/Dominios/Estado.h"
#include "../../../Headers/Entidades/Acomodacao.h"

CntrAprAcomodacao::CntrAprAcomodacao() {
    interServAcomodacao = nullptr;
}

void CntrAprAcomodacao::executar(Identificador &identificador) {
    int escolha;
    bool flag;
    std::cout << "Sistema de Acomodacao - Servicos da acomodacao" << std::endl << std::endl;

    std::cout << "1 - Editar usuario." << std::endl;
    std::cout << "2 - Cadastrar usuario." << std::endl;
    std::cout << "3 - Descadastrar usuario." << std::endl;
    std::cout << "4 - Pesquisar usuario." << std::endl;
    std::cout << "5 - Sair." << std::endl;

    std::cout << "Escolha a opcao: ";

    std::cin >> escolha;

    flag = true;

    while (flag){
        switch (escolha) {
            case OPCAO_EDITAR_ACOMODACAO:
                editar(identificador);
                flag = false;
                break;
            case OPCAO_CADASTRAR_ACOMODACAO:
                cadastrar(identificador);
                flag = false;
                break;
            case OPCAO_DESCADASTRAR_ACOMODACAO:
                descadastrar(identificador);
                flag = false;
                break;
            case OPCAO_PESQUISAR_ACOMODACAO:
                pesquisar(identificador);
                flag = false;
                break;
            case OPCAO_SAIR_ACOMODACAO:
            default:
                if(true);
        }
    }
}

void CntrAprAcomodacao::pesquisar(Identificador &identificador) {
    Data dataInicio;
    Data dataTermino;
    Capacidade_De_Acomodacao capacidadeDeAcomodacao;
    Diaria diaria;
    Nome cidade;
    Estado estado;

    Acomodacao acomodacao;

    if (true){

        try {
            std::cout << "Digite a data de inicio               : ";
            std::cin >> dataInicio;
            std::cout << "Digite a data de termino             : ";
            std::cin >> dataTermino;
            std::cout << "Digite a capacidade de sua acomodacao : ";
            std::cin >> capacidadeDeAcomodacao;
            std::cout << "Digite o valor da diaria              : ";
            std::cin >> diaria;
            std::cout << "Digite o estado onde é localizada     : ";
            std::cin >> estado;
            std::cout << "Digite a cidade onde é localizada     : ";
            std::cin >> cidade;
        } catch (std::invalid_argument &e) {
            std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
            return;
        }

        try {
            //iServAuteticacao->cadastrar(dataInicio, dataTermino, capacidadeDeAcomodacao, cidade, estado);
        } catch (std::invalid_argument &e) {
            std::cout << std::endl << "Nao foi possivel cadastrar a acomodacao!" << std::endl;
            return;
        }
    }
}

void CntrAprAcomodacao::cadastrar(Identificador &identificador) {
    Identificador id;
    Tipo_Acomodacao tipoAcomodacao;
    Capacidade_De_Acomodacao capacidadeDeAcomodacao;
    Diaria diaria;
    Nome cidade;
    Estado estado;

    Acomodacao acomodacao;

    if (true){

        try {
            std::cout << "Digite a sua acomodacao               : ";
            std::cin >> id;
            std::cout << "Digite o tipo de sua acomodacao       : ";
            std::cin >> tipoAcomodacao;
            std::cout << "Digite a capacidade de sua acomodacao : ";
            std::cin >> capacidadeDeAcomodacao;
            std::cout << "Digite o valor da diaria              : ";
            std::cin >> diaria;
            std::cout << "Digite o estado onde é localizada     : ";
            std::cin >> estado;
            std::cout << "Digite a cidade onde é localizada     : ";
            std::cin >> cidade;
        } catch (std::invalid_argument &e) {
            std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
            return;
        }

        acomodacao.setIdentificador(id);
        acomodacao.setTipo(tipoAcomodacao);
        acomodacao.setCapacidade(capacidadeDeAcomodacao);
        acomodacao.setDiaria(diaria);
        acomodacao.setEstado(estado);
        acomodacao.setCidade(cidade);

        try {
            //iServAuteticacao->cadastrar(acomodacao);
        } catch (std::invalid_argument &e) {
            std::cout << std::endl << "Nao foi possivel cadastrar a acomodacao!" << std::endl;
            return;
        }
    }

}

void CntrAprAcomodacao::descadastrar(Identificador &identificador) {
    int escolha;
    bool flag;
    std::cout << "Sistema de Acomodacao - Servicos do usuario" << std::endl << std::endl;

    std::cout << "Deseja descadastrar sua conta?";
    std::cout << "0 - Nao." << std::endl;
    std::cout << "1 - Sim." << std::endl;

    std::cout << "Escolha a opcao: ";

    std::cin >> escolha;

    flag = true;

    while (flag){
        switch (escolha) {
            case OPCAO_NAO:
                return;
            case OPCAO_SIM:
                try{
                    //interServAcomodacao->descadastrar(identificador);
                } catch(std::exception &e){
                    std::cout << std::endl << "Voce nao pode descadastrar enquanto houver pendencias!" << std::endl;
                    return;
                }
                break;
            default:
                if(true);
        }
    }
}

void CntrAprAcomodacao::editar(Identificador &identificador) {

}

void CntrAprAcomodacao::setCntrsServAcomodacao(InterServAcomodacao *cntrsServAcomodacao) {
    this->interServAcomodacao = cntrsServAcomodacao;
}

CntrAprAcomodacao::~CntrAprAcomodacao() {
    delete interServAcomodacao;
}
