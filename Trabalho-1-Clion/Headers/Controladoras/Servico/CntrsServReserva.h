//
// Created by paulo on 16-Nov-18.
//

#ifndef TRABALHO_1_CLION_CNTRSSERVRESERVA_H
#define TRABALHO_1_CLION_CNTRSSERVRESERVA_H

#include "../../Interfaces/Servico/InterServReserva.h"
#include "../../ComandoSQL/ComandoRealizarReserva.h"
#include "../../ComandoSQL/ComandoCancelarReserva.h"

class CntrsServReserva : public InterServReserva{
public:
    //todo: Checar data atual ao se fazer a reserva
    //todo: Alterar o usuario
    void cancelarReserva(const Identificador& identificadorAcomodacao, const Intervalo_Datas& intervaloDatas) override;

    void realizarReserva(const Identificador& identificadorAcomodacao, const Intervalo_Datas& intervaloDatas) override;

};


#endif //TRABALHO_1_CLION_CNTRSSERVRESERVA_H
