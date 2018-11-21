//
// Created by paulo on 16-Nov-18.
//

#include "../../../Headers/Controladoras/Apresentacao/CntrAprUsuarios.h"
#include "../../../Headers/Dominios/Senha.h"
#include "../../../Headers/Dominios/Nome.h"
#include "../../../Headers/Entidades/Usuario.h"

void CntrAprUsuarios::cadastrar() {
    Identificador identificador;
    Nome nome;
    Senha senha;
    Usuario usuario;
    std::string input;

    while(nome.getNome() == "NomeNaoDefinido" || senha.getSenha() == "NaoDef1!" || identificador.getIdentificador() == "abcde" ) {
        try {
            std::cout << "Digite o seu nome         : ";
            std::getline(std::cin, input);
            nome.setNome(input);
            std::cout << "Digite o seu identificador: ";
            std::getline(std::cin, input);
            identificador.setIdentificador(input);
            std::cout << "Digite a sua senha        : ";
            std::getline(std::cin, input);
            senha.setSenha(input);
        } catch (std::invalid_argument &e) {
            std::cout << std::endl << "Dado em formato incorreto.!" << std::endl;
        }
    }

    usuario.setNome(nome);
    usuario.setIdentificador(identificador);
    usuario.setSenha(senha);

    try{
        cntrServUsuario->cadastrarUsuario(nome, identificador, senha);
    } catch(std::invalid_argument &e){
        std::cout << std::endl << "Nao foi possivel cadastras usuario!" << std::endl;
        return;
    }

    std::cout << std::endl << "Usuario cadastrado com sucesso!" << std::endl;
}

void CntrAprUsuarios::executar(Identificador &identificador) {
    int escolha;
    bool flag;
    std::string input;
    std::cout << "Sistema de Acomodacao - Servicos do usuario" << std::endl << std::endl;

    std::cout << "1 - Editar usuario." << std::endl;
    std::cout << "2 - Descadastrar usuario." << std::endl;
    std::cout << "3 - Pesquisar usuario." << std::endl;
    std::cout << "4 - Sair." << std::endl;

    std::cout << "Escolha a opcao: ";

    std::getline(std::cin, input);
    escolha = std::stoi(input);

    flag = true;

    while (flag){
        switch (escolha) {
            case OPCAO_EDITAR_USUARIO:
                editar(identificador);
                flag = false;
                break;
            case OPCAO_DESCADASTRAR_USUARIO:
                descadastrar(identificador);
                flag = false;
                break;
            case OPCAO_PESQUISAR_USUARIO:
                pesquisar(identificador);
                flag = false;
                break;
            case OPCAO_SAIR:
            default:
                return;
        }
    }
}

void CntrAprUsuarios::setCntrsServUsuarios(InterServUsuarios *cntrsServUsuarios) {
    this->cntrServUsuario = cntrsServUsuarios;
}

CntrAprUsuarios::~CntrAprUsuarios() {
     delete cntrServUsuario;
}

void CntrAprUsuarios::editar(Identificador &identificador) {

}

void CntrAprUsuarios::descadastrar(Identificador &identificador) {
    int escolha;
    bool flag;
    std::string input;
    std::cout << "Sistema de Acomodacao - Servicos do usuario" << std::endl << std::endl;

    std::cout << "Deseja descadastrar sua conta?" << std::endl;
    std::cout << "0 - Nao." << std::endl;
    std::cout << "1 - Sim." << std::endl;

    std::cout << "Escolha a opcao: ";

    std::getline(std::cin, input);
    escolha = std::stoi(input);

    flag = true;

    while (flag){
        switch (escolha) {
            case OPCAO_NAO:
                return;
            case OPCAO_SIM:
                try{
                    cntrServUsuario->descadastrarUsuario(identificador);
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

void CntrAprUsuarios::pesquisar(Identificador &identificador) {

}
