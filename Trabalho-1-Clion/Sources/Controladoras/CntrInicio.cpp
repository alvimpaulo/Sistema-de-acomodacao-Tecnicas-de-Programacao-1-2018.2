//
// Created by paulo on 16-Nov-18.
//

#include "../../Headers/Controladoras/CntrInicio.h"

void CntrInicio::iniciar() {
    Identificador id;
    int res;
    std::string input;
    bool sair = false;
    while (!sair) {
        std::cout << "1 - Fazer login." << std::endl;
        std::cout << "2 - Cadastrar novo usuario." << std::endl;
        std::cout << "3 - Sair." << std::endl << std::endl;
        std::cout << "Escolha a opcao: ";

        std::getline(std::cin, input);
        res = std::stoi(input);
        if (res == 1) {
            try {
                cntrAprAutenticacao->autenticar(id);
                this->usuario->setIdentificador(id);
            }
            catch (std::exception &e) {
                std::cout << e.what() << std::endl;
                continue;
            }

        } else if (res == 2) {
            try {
                cntrAprUsuarios->cadastrar();
                this->usuario->setIdentificador(id);
            } catch (std::exception &exception){
                std::cout << "nao foi possivel cadastrar motivo: " << exception.what()  << std::endl;
                continue;
            }
        } else if(res == 3){
            return;
        }

        sair = false;
        while (!sair) {

            std::cout << "1 - Gerenciar Usuario." << std::endl;
            std::cout << "2 - Gerenciar Reservas." << std::endl;
            std::cout << "3 - Gerenciar Acomodacoes." << std::endl;
            std::cout << "4 - Sair." << std::endl << std::endl;
            std::cout << "Escolha a opcao: ";

            std::getline(std::cin, input);
            res = std::stoi(input);

            if (res == 1) {
                try {
                    cntrAprUsuarios->executar(id);
                } catch (std::exception &exception) {
                    std::cout << "nao foi possivel gerenciar usuarios motivo: " << exception.what() << std::endl;
                }
            } else if (res == 2) {
                try {
                    cntrAprReserva->executar(id);
                } catch (std::exception &exception) {
                    std::cout << "nao foi gerenciar reservas motivo: " << exception.what() << std::endl;
                }
            } else if (res == 3) {
                try {
                    cntrAprAcomodacao->executar(id);
                } catch (std::exception &exception) {
                    std::cout << "nao foi gerenciar acomodacoes motivo: " << exception.what() << std::endl;
                    continue;
                }
            } else if (res == 4) {
                sair = true;
            }
        }
        sair = false;
    }


}

CntrInicio::CntrInicio(InterAprReserva *cntrAprReserva, InterAprAutenticacao *cntrAprAutenticacao,
                       InterAprAcomodacao *cntrAprAcomodacao, InterAprUsuarios *cntrAprUsuarios)
        : cntrAprReserva(cntrAprReserva), cntrAprAutenticacao(cntrAprAutenticacao),
          cntrAprAcomodacao(cntrAprAcomodacao), cntrAprUsuarios(cntrAprUsuarios) {
    usuario = new Usuario();

}

CntrInicio::~CntrInicio() {
    delete usuario;

}
