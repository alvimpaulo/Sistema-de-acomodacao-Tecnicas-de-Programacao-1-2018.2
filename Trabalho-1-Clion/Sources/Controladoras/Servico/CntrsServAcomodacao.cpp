//
// Created by paulo on 16-Nov-18.
//

#include "../../../Headers/Controladoras/Servico/CntrsServAcomodacao.h"

std::list<Acomodacao> CntrsServAcomodacao::pesquisar(const Data &dataInicio, const Data &dataTermino,
                                                     const Capacidade_De_Acomodacao &capacidadeDeAcomodacao,
                                                     const Nome &cidade, const Estado &estado) {
    ComandoPesquisarAcomodacao sqlPesquisar(dataInicio, dataTermino, capacidadeDeAcomodacao, cidade, estado);
    sqlPesquisar.executar();
    std::list<Acomodacao> resultadoPesquisa = sqlPesquisar.getResultado();
    return resultadoPesquisa;

}

void CntrsServAcomodacao::cadastrar(const Identificador &identificadorAcomodacao, const Tipo_Acomodacao &tipoAcomodacao,
                                    const Capacidade_De_Acomodacao &capacidadeDeAcomodacao, const Diaria &diaria,
                                    const Nome &cidade, const Estado &estado) {

}

void CntrsServAcomodacao::cadastrarDisponibilidade(const Identificador &identificadorAcomodacao, const Data &dataInicio,
                                                   const Data &dataTermino) {

}

void CntrsServAcomodacao::descadastrar(const Identificador &identificadorAcomodacao) {

}

void CntrsServAcomodacao::editar(const Identificador &identificadorAcomodacao, const Acomodacao &acomodacao) {

}