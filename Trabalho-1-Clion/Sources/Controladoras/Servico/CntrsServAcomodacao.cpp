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
                                    const Nome &cidade, const Estado &estado,
                                    const Identificador& identificadorUsuario) {
    //todo: Checar se o usuario tem uma conta corrente
    ComandoCadastrarAcomodacao sqlCadastrar(identificadorAcomodacao, tipoAcomodacao, capacidadeDeAcomodacao, diaria, cidade, estado, identificadorUsuario);
    sqlCadastrar.executar();

}

void CntrsServAcomodacao::cadastrarDisponibilidade(const Identificador &identificadorAcomodacao, const Data &dataInicio,
                                                   const Data &dataTermino, const Identificador &identificadorUsuario) {
    ComandoCadastrarDisponibilidadeAcomodacao sqlCadastrarDisponibilidade(identificadorAcomodacao, dataInicio, dataTermino, identificadorUsuario);
    sqlCadastrarDisponibilidade.executar();

}

void CntrsServAcomodacao::descadastrar(const Identificador &identificadorAcomodacao, const Identificador& identificadorUsuario) {

    try {
        ComandoDescadastrarAcomodacao sqlDescadastrar(identificadorAcomodacao, identificadorUsuario);
    } catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }


}

void CntrsServAcomodacao::descadastrarDisponibilidade(const Identificador &identificadorAcomodacao,
                                                      const Identificador &identificadorUsuario) {

    try {
        ComandoDescadastrarDisponibilidade sqlDescadastrarDisponibilidade(identificadorAcomodacao, identificadorUsuario);
    } catch (std::exception &exception){
        std::cout << exception.what() << std::endl;
    }
}
