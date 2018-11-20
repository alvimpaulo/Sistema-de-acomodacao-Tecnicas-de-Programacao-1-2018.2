//
// Created by paulo on 16-Nov-18.
//

#include "../../../Headers/Controladoras/Servico/CntrsServReserva.h"

void
CntrsServReserva::cancelarReserva(const Identificador &identificadorAcomodacao, const Intervalo_Datas &intervaloDatas) {
    ComandoCancelarReserva sqlCancelarReserva(identificadorAcomodacao, intervaloDatas);
    sqlCancelarReserva.executar();
}

void
CntrsServReserva::realizarReserva(const Identificador &identificadorAcomodacao, const Intervalo_Datas &intervaloDatas) {

    ComandoRealizarReserva sqlRealizarReserva(identificadorAcomodacao, intervaloDatas);
    sqlRealizarReserva.executar();

}
