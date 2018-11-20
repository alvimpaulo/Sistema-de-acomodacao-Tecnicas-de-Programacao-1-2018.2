//
// Created by paulo on 16-Nov-18.
//

#include "../../Headers/Controladoras/CntrInicio.h"

void CntrInicio::iniciar() {
    Identificador id;
    int res, res2, res3, res4, res5;
    std::cout << "Voce deseja efetuar login ou cadastro?";
    std::cin >> res;
    if(res == 0) {
        cntrAprAutenticacao->autenticar(id);
    } else{
        cntrAprUsuarios->cadastrar();
    }

}

CntrInicio::CntrInicio(InterAprReserva *cntrAprReserva, InterAprAutenticacao *cntrAprAutenticacao,
                       InterAprAcomodacao *cntrAprAcomodacao, InterAprUsuarios *cntrAprUsuarios)
        : cntrAprReserva(cntrAprReserva), cntrAprAutenticacao(cntrAprAutenticacao),
          cntrAprAcomodacao(cntrAprAcomodacao), cntrAprUsuarios(cntrAprUsuarios) {

}
