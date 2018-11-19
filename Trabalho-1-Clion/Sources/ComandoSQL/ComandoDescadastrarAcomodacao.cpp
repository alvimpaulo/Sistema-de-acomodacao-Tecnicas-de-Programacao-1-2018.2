//
// Created by paulo on 18-Nov-18.
//

#include "../../Headers/ComandoSQL/ComandoDescadastrarAcomodacao.h"

ComandoDescadastrarAcomodacao::ComandoDescadastrarAcomodacao(const Identificador &identificadorAcomodacao) {
    comandoSQL = "delete from Acomodacoes where Identificador = '" + identificadorAcomodacao.getIdentificador() + "'";
}
