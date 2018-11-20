//
// Created by paulo on 19-Nov-18.
//

#include "../../Headers/ComandoSQL/ComandoRealizarReserva.h"

ComandoRealizarReserva::ComandoRealizarReserva(const Identificador &identificadorAcomodacao,
                                               const Intervalo_Datas &intervaloDatas,
                                               const Identificador& identificadorUsuario) {
    comandoSQL = "insert into Reservas ('DataInicio', 'DataTermino', 'Acomodacao', 'Usuario') values (";
    comandoSQL += "'" + intervaloDatas.getDataInicio().getData() + "'";
    comandoSQL += ",'" + intervaloDatas.getDataTermino().getData() + "'";
    comandoSQL += ",'" + identificadorAcomodacao.getIdentificador() + "'";
    comandoSQL += ",'" + identificadorUsuario.getIdentificador() + "'";
    comandoSQL += ")";

}
