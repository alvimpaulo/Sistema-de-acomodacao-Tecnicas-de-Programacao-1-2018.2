//
// Created by paulo on 18-Nov-18.
//

#include "../../Headers/ComandoSQL/ComandoCadastrarDisponibilidadeAcomodacao.h"

ComandoCadastrarDisponibilidadeAcomodacao::ComandoCadastrarDisponibilidadeAcomodacao(
        const Identificador &identificadorAcomodacao, const Data &dataInicio, const Data &dataTermino, const Identificador& identificadorUsuario) {
    comandoSQL = "insert into Disponibilidade (DataInicio, DataTermino, Acomodacao, Usuario) values (";
    comandoSQL += "'" + dataInicio.getData() + "'";
    comandoSQL += ", '" + dataTermino.getData() + "'";
    comandoSQL += ", '" + identificadorAcomodacao.getIdentificador() + "'";
    comandoSQL += ", '" + identificadorUsuario.getIdentificador() + "'";
}

void ComandoCadastrarDisponibilidadeAcomodacao::cadastrar() {
    executar();
    if(!listaResultado.empty())
        listaResultado.clear();

}
