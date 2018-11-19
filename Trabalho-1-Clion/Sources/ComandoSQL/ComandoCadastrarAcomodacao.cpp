//
// Created by paulo on 18-Nov-18.
//

#include "../../Headers/ComandoSQL/ComandoCadastrarAcomodacao.h"

ComandoCadastrarAcomodacao::ComandoCadastrarAcomodacao(const Identificador &identificador,
                                                       const Tipo_Acomodacao &tipoAcomodacao,
                                                       const Capacidade_De_Acomodacao &capacidadeDeAcomodacao,
                                                       const Diaria &diaria, const Nome &cidade, const Estado &estado) {
    comandoSQL = "insert into Acomodacoes (Identificador, Tipo, Capacidade, Cidade, Estado, Diaria, Usuario) values (";
    comandoSQL += "'" + identificador.getIdentificador() + "'";
    comandoSQL += ", '" + tipoAcomodacao.getTipoAcomodacao() + "'";
    comandoSQL += ", '" + capacidadeDeAcomodacao.getCapacidade_de_Acomodacao() + "'";
    comandoSQL += ", '" + cidade.getNome() + "'";
    comandoSQL += ", '" + estado.getEstado() + "'";
    comandoSQL += ", '" + std::to_string(diaria.getDiaria()) + "'";
    comandoSQL += ", 'abcde'"; //todo Colocar usuario variavel
    comandoSQL += ")";
}
