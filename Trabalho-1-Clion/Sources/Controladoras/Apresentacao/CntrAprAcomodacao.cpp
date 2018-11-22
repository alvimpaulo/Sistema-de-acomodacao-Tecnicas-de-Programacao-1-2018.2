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

void printListaAcomodacao(std::list<Acomodacao> list){
    std::cout << "A lista de acomodacoes eh:" << std::endl;
    std::cout << "Identificador\tTipo\tCapacidade\tCidade\tEstado\tDiaria\t" << std::endl;
    for(auto acomodacao : list){
        std::cout << acomodacao.getIdentificador().getIdentificador() << "\t";
        std::cout << acomodacao.getTipo().getTipoAcomodacao() << "\t";
        std::cout << acomodacao.getCapacidade().getCapacidade_de_Acomodacao() << "\t";
        std::cout << acomodacao.getCidade().getNome() << "\t";
        std::cout << acomodacao.getEstado().getEstado() << "\t";
        std::cout << acomodacao.getDiaria().getDiaria() << "\t";
        std::cout << std::endl;
    }
}

CntrAprAcomodacao::CntrAprAcomodacao() {
    cntrsServAcomodacao = nullptr;
}

void CntrAprAcomodacao::executar(Identificador &identificadorUsuario) {
    int escolha;
    bool flag;
    std::string input;
    std::cout << "Sistema de Acomodacao - Servicos da acomodacao" << std::endl << std::endl;

    std::cout << "1 - Cadastrar acomodacao." << std::endl;
    std::cout << "2 - Descadastrar acomodacao." << std::endl;
    std::cout << "3 - Cadastrar disponibilidade." << std::endl;
    std::cout << "4 - Descadastrar disponibilidade." << std::endl;
    std::cout << "4 - Pesquisar acomodacao." << std::endl;
    std::cout << "5 - Sair." << std::endl;

    std::cout << "Escolha a opcao: ";

    std::getline(std::cin, input);
    escolha = std::stoi(input);

    flag = true;

    while (flag){
        switch (escolha) {
            case OPCAO_CADASTRAR_ACOMODACAO:
                cadastrar(identificadorUsuario);
                flag = false;
                break;
            case OPCAO_DESCADASTRAR_ACOMODACAO:
                descadastrar(identificadorUsuario);
                flag = false;
                break;
            case OPCAO_CADASTRAR_DISPONIBILIDADE:
                cadastrarDisponibilidade(identificadorUsuario);
                flag = false;
                break;
            case OPCAO_DESCADASTRAR_DISPONIBILIDADE:
                descadastrarDisponibilidade(identificadorUsuario);
                flag = false;
                break;
            case OPCAO_PESQUISAR_ACOMODACAO:
                pesquisar(identificadorUsuario);
                flag = false;
                break;
            case OPCAO_SAIR_ACOMODACAO:
            default:
                break;
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

    std::string input;
    std::list<Acomodacao> list;

    try {
        std::cout << "Digite a data de inicio               : ";
        std::getline(std::cin, input);
        dataInicio.setData(input);
        std::cout << "Digite a data de termino             : ";
        std::getline(std::cin, input);
        dataTermino.setData(input);
        std::cout << "Digite a capacidade de sua acomodacao : ";
        std::getline(std::cin, input);
        capacidadeDeAcomodacao.setCapacidade_De_Acomodacao(input);
        std::cout << "Digite o valor da diaria              : ";
        std::getline(std::cin, input);
        diaria.setDiaria(input);
        std::cout << "Digite o estado onde é localizada     : ";
        std::getline(std::cin, input);
        estado.setEstado(input);
        std::cout << "Digite a cidade onde é localizada     : ";
        std::getline(std::cin, input);
        cidade.setNome(input);
    } catch (std::invalid_argument &e) {
        std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
        return;
    }

    try {
        list = cntrsServAcomodacao->pesquisar(dataInicio, dataTermino, capacidadeDeAcomodacao, cidade, estado);
        printListaAcomodacao(list);
    } catch (std::invalid_argument &e) {
        std::cout << std::endl << "Nao foi possivel pesquisar as acomodacoes!" << std::endl;
        return;
    }

}

void CntrAprAcomodacao::cadastrar(const Identificador &identificadorUsuario) {
    Identificador id;
    Tipo_Acomodacao tipoAcomodacao;
    Capacidade_De_Acomodacao capacidadeDeAcomodacao;
    Diaria diaria;
    Nome cidade;
    Estado estado;

    Acomodacao acomodacao;

    std::string input;
    bool sair = false;

    while (!sair) {
        try {
            std::cout << "Digite a sua acomodacao               : ";
            std::getline(std::cin, input);
            id.setIdentificador(input);
            std::cout << "Digite o tipo de sua acomodacao       : ";
            std::getline(std::cin, input);
            tipoAcomodacao.setTipoAcomodacao(input);
            std::cout << "Digite a capacidade de sua acomodacao : ";
            std::getline(std::cin, input);
            capacidadeDeAcomodacao.setCapacidade_De_Acomodacao(input);
            std::cout << "Digite o valor da diaria              : ";
            std::getline(std::cin, input);
            diaria.setDiaria(input);
            std::cout << "Digite o estado onde é localizada     : ";
            std::getline(std::cin, input);
            estado.setEstado(input);
            std::cout << "Digite a cidade onde é localizada     : ";
            std::getline(std::cin, input);
            cidade.setNome(input);
            sair = true;
        } catch (std::invalid_argument &e) {
            std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
        }
    }
    acomodacao.setIdentificador(id);
    acomodacao.setTipo(tipoAcomodacao);
    acomodacao.setCapacidade(capacidadeDeAcomodacao);
    acomodacao.setDiaria(diaria);
    acomodacao.setEstado(estado);
    acomodacao.setCidade(cidade);
    try {
        cntrsServAcomodacao->cadastrar(id, tipoAcomodacao, capacidadeDeAcomodacao, diaria, cidade, estado, identificadorUsuario);
    } catch (std::invalid_argument &e) {
        std::cout << std::endl << "Nao foi possivel cadastrar a acomodacao!" << std::endl;
    }

}

void CntrAprAcomodacao::descadastrar(const Identificador &identificadorUsuario) {
    Identificador id;

    std::string input;
    std::cout << "Sistema de Acomodacao - Servicos de acomodacao - Descadastramento de acomodacao" << std::endl << std::endl;

    try {
        std::cout << "Digite a sua acomodacao               : ";
        std::getline(std::cin, input);
        id.setIdentificador(input);
    } catch (std::invalid_argument &e) {
        std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
        return;
    }

    try{
        cntrsServAcomodacao->descadastrar(id, identificadorUsuario);
    } catch(std::exception &e) {
        std::cout << std::endl << "Voce nao pode descadastrar enquanto houver pendencias!" << std::endl;
        return;
    }

}

void CntrAprAcomodacao::setCntrsServAcomodacao(InterServAcomodacao *cntrsServAcomodacao) {
    this->cntrsServAcomodacao = cntrsServAcomodacao;
}

CntrAprAcomodacao::~CntrAprAcomodacao() {
    delete cntrsServAcomodacao;
}

void
CntrAprAcomodacao::cadastrarDisponibilidade(const Identificador &identificadorUsuario) {
    Identificador id;
    Data dataInicio;
    Data dataTermino;

    std::string input;

    std::cout << "Sistema de Acomodacao - Servicos de acomodacao - Cadastramento de disponibilidade." << std::endl << std::endl;

    try {
        std::cout << "Digite a sua acomodacao               : ";
        std::getline(std::cin, input);
        id.setIdentificador(input);

        std::cout << "Digite a sua data de inicio               : ";
        std::getline(std::cin, input);
        dataInicio.setData(input);

        std::cout << "Digite a sua data de termino               : ";
        std::getline(std::cin, input);
        dataTermino.setData(input);
    } catch (std::invalid_argument &e) {
        std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
        return;
    }

    try{
        cntrsServAcomodacao->cadastrarDisponibilidade(id, dataInicio, dataTermino, identificadorUsuario);
    } catch(std::exception &e) {
        std::cout << std::endl << "nao foi possivel cadas sua disponibilidade" << std::endl;
        return;
    }
}

void CntrAprAcomodacao::descadastrarDisponibilidade(const Identificador &identificadorUsuario) {

    Identificador id;

    std::string input;
    std::cout << "Sistema de Acomodacao - Servicos de acomodacao - Descadastramento de disponibilidade" << std::endl;
    try {
        std::cout << "Digite a sua acomodacao               : ";
        std::getline(std::cin, input);
        id.setIdentificador(input);
    } catch (std::invalid_argument &e) {
        std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
        return;
    }

    try{
        cntrsServAcomodacao->descadastrarDisponibilidade(id, identificadorUsuario);
    } catch(std::exception &e) {
        std::cout << std::endl << "Não foi possivel descadastrar disponibilidades." << std::endl;
        return;
    }

}
