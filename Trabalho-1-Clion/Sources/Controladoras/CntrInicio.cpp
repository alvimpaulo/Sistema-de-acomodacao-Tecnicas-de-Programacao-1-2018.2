//
// Created by paulo on 16-Nov-18.
//

#include "../../Headers/Controladoras/CntrInicio.h"

void CntrInicio::iniciar() {
    Identificador id;
    int res, res2, res3, res4, res5;
    std::string input;
    bool sair = false;
    while (!sair) {
        std::cout << "1 - Fazer login." << std::endl;
        std::cout << "2 - Cadastrar novo usuario" << std::endl;
        std::cout << "3 - Sair" << std::endl << std::endl;
        std::cout << "Escolha a opcao: ";

        std::getline(std::cin, input);
        res = std::stoi(input);
        if (res == 1) {
            try {
                cntrAprAutenticacao->autenticar(id);
                cntrAprUsuarios->executar(id);
            }
            catch (std::exception &e) {
                std::cout << "Nao foi possivel autenticar" << std::endl;
            }

        } else if (res == 2) {
            cntrAprUsuarios->cadastrar();
        } else if(res == 3){
            sair = true;
        }
    }


}

CntrInicio::CntrInicio(InterAprReserva *cntrAprReserva, InterAprAutenticacao *cntrAprAutenticacao,
                       InterAprAcomodacao *cntrAprAcomodacao, InterAprUsuarios *cntrAprUsuarios)
        : cntrAprReserva(cntrAprReserva), cntrAprAutenticacao(cntrAprAutenticacao),
          cntrAprAcomodacao(cntrAprAcomodacao), cntrAprUsuarios(cntrAprUsuarios) {

}

void CntrInicio::cadastrar() {


}
