//
// Created by paulo on 16-Nov-18.
//

#include <iostream>
#include "../../../Headers/Controladoras/Apresentacao/CntrAprAutenticacao.h"
#include "../../../Headers/Dominios/Senha.h"

void CntrAprAutenticacao::autenticar(Identificador &identificador){
    Identificador   id;
    Senha           senha;
    std::cout << "Autenticacao de usuário" << std::endl;

    try{
        std::cout << "Digite o seu identificador: ";
        std::cin >> id;
        std::cout << "Digite a sua senha        : ";
        std::cin >> senha;
    } catch(std::invalid_argument &e){
        std::cout << std::endl << "Dado em formato incorreto!" << std::endl;
    }
    try{
        //iServAuteticacao->autenticar(id, senha);
    } catch(std::invalid_argument &e) {
        std::cout << std::endl << "Nao foi possivel efetuar o login, verifique se os campos foram preenchidos adequadamente!" << std::endl;
        return;
    }

    identificador = id;

    std::cout << std::endl << "Login efetuado com sucesso!" << std::endl;
}

void CntrAprAutenticacao::setCntrsServAutenticacao(InterServAutenticacao *interServAutenticacao){
    this->interServAutenticacao = interServAutenticacao;
}

CntrAprAutenticacao::CntrAprAutenticacao() {
    interServAutenticacao = nullptr;
}

CntrAprAutenticacao::~CntrAprAutenticacao() {
    delete interServAutenticacao;
}
