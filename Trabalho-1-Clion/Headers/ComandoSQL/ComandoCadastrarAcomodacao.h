//
// Created by paulo on 18-Nov-18.
//

#ifndef TRABALHO_1_CLION_COMANDOCADASTRARACOMODACAO_H
#define TRABALHO_1_CLION_COMANDOCADASTRARACOMODACAO_H

#include "ComandoSQL.h"
#include "../Entidades/Acomodacao.h"

class ComandoCadastrarAcomodacao : public ComandoSQL {
public:
    ComandoCadastrarAcomodacao(const Identificador& identificador, const Tipo_Acomodacao& tipoAcomodacao,const Capacidade_De_Acomodacao& capacidadeDeAcomodacao, const Diaria& diaria, const Nome& cidade, const Estado& estado, const Identificador& identificadorUsuario);
};

#endif //TRABALHO_1_CLION_COMANDOCADASTRARACOMODACAO_H
