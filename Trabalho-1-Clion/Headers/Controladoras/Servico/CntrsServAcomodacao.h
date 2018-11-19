//
// Created by paulo on 16-Nov-18.
//

#ifndef TRABALHO_1_CLION_CNTRSSERVACOMODACAO_H
#define TRABALHO_1_CLION_CNTRSSERVACOMODACAO_H

#include "../../Interfaces/Servico/InterServAcomodacao.h"
#include "../../ComandoSQL/ComandoPesquisarAcomodacao.h"
#include "../../ComandoSQL/ComandoCadastrarAcomodacao.h"
#include "../../ComandoSQL/ComandoCadastrarDisponibilidadeAcomodacao.h"
#include "../../ComandoSQL/ComandoDescadastrarAcomodacao.h"
#include "../../ComandoSQL/ComandoEditarAcomodacao.h"

class CntrsServAcomodacao: public  InterServAcomodacao{
public:
    CntrsServAcomodacao() = default;


    //Retorna as acomodacoes que batem com a pesquisae_De
     std::list<Acomodacao> pesquisar(const Data& dataInicio, const Data& dataTermino, const Capacidade_De_Acomodacao& capacidadeDeAcomodacao, const Nome& cidade, const Estado& estado);

    //Cadastra uma nova acomodacao para o usuario atual. Todos parametros sao obrigatorios
     void cadastrar(const Identificador& identificadorAcomodacao, const Tipo_Acomodacao& tipoAcomodacao, const Capacidade_De_Acomodacao& capacidadeDeAcomodacao, const Diaria& diaria, const Nome& cidade, const Estado& estado);

    //Cadastra uma nova disponibilidade em uma acomodacao pelo seu identificador
     void cadastrarDisponibilidade(const Identificador& identificadorAcomodacao, const Data& dataInicio, const Data& dataTermino);

    //recebe o identificador da acomodacao e descadastra ela, caso seja possivel.
     void descadastrar(const Identificador& identificadorAcomodacao);

    //Recebe qual acomodacao se quer editar e transforma ela para a acomodacao recebida, testando quais campos foram modificados
     void editar(const Identificador& identificadorAcomodacao, const Acomodacao& acomodacao);
private:







};


#endif //TRABALHO_1_CLION_CNTRSSERVACOMODACAO_H
