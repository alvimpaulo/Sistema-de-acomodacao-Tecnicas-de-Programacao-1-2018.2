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
    //todo: Checar se o usuario tem uma conta corrente
    ComandoCadastrarAcomodacao sqlCadastrar(identificadorAcomodacao, tipoAcomodacao, capacidadeDeAcomodacao, diaria, cidade, estado);
    sqlCadastrar.executar();

}

void CntrsServAcomodacao::cadastrarDisponibilidade(const Identificador &identificadorAcomodacao, const Data &dataInicio,
                                                   const Data &dataTermino) {
    ComandoCadastrarDisponibilidadeAcomodacao sqlCadastrarDisponibilidade(identificadorAcomodacao, dataInicio, dataTermino);
    sqlCadastrarDisponibilidade.executar();

}

void CntrsServAcomodacao::descadastrar(const Identificador &identificadorAcomodacao) {
    //todo: Checar se o usuario tentando descadastrar essa acomodacao é ele mesmo obs: fazer o query com o usuario atual
    //todo: Checar se a acomodacao tem reserva obs: o sql ja vai te negar se tiver reserva associada, mas tb vai negar se tiver disponibilidade
    ComandoDescadastrarAcomodacao sqlDescadastrar(identificadorAcomodacao);
    sqlDescadastrar.executar();
}

void CntrsServAcomodacao::editar(const Identificador &identificadorAcomodacao, const Acomodacao &acomodacao) {
    //todo: utilizar o usuario atual na pesquisa

    ComandoEditarAcomodacao sqlEditar(identificadorAcomodacao, acomodacao);
    sqlEditar.executar();
}