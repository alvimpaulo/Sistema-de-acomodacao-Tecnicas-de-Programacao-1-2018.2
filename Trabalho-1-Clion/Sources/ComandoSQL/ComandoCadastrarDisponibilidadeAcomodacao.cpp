//
// Created by paulo on 18-Nov-18.
//

#include "../../Headers/ComandoSQL/ComandoCadastrarDisponibilidadeAcomodacao.h"

ComandoCadastrarDisponibilidadeAcomodacao::ComandoCadastrarDisponibilidadeAcomodacao(
        const Identificador &identificadorAcomodacao, const Data &dataInicio, const Data &dataTermino) {
    comandoSQL = "insert into Disponibilidade (DataInicio, DataTermino, Acomodacao) values (";
    comandoSQL += "'" + dataInicio.getData() + "'";
    comandoSQL += ", '" + dataTermino.getData() + "'";
    comandoSQL += ", '" + identificadorAcomodacao.getIdentificador() + "'";
}
