//
// Created by paulo on 18-Nov-18.
//

#ifndef TRABALHO_1_CLION_COMANDOPESQUISARACOMODACAO_H
#define TRABALHO_1_CLION_COMANDOPESQUISARACOMODACAO_H

#include "ComandoSQL.h"
#include "../Controladoras/Servico/CntrsServAcomodacao.h"
class ComandoPesquisarAcomodacao : public ComandoSQL {
public:
    //todo Só retornar acomodacoes no intervalo de datas pedido
    ComandoPesquisarAcomodacao(const Data& dataInicio, const Data& dataTermino, const Capacidade_De_Acomodacao& capacidadeDeAcomodacao, const Nome& cidade, const Estado& estado);
    std::list<Acomodacao> getResultado();
};


#endif //TRABALHO_1_CLION_COMANDOPESQUISARACOMODACAO_H
