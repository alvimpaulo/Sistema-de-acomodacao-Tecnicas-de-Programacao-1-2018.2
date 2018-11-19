//
// Created by paulo on 18-Nov-18.
//

#ifndef TRABALHO_1_CLION_COMANDODESCADASTRARACOMODACAO_H
#define TRABALHO_1_CLION_COMANDODESCADASTRARACOMODACAO_H

#include "ComandoSQL.h"
#include "../Entidades/Acomodacao.h"
class ComandoDescadastrarAcomodacao: public ComandoSQL {
public:
    explicit ComandoDescadastrarAcomodacao(const Identificador &identificadorAcomodacao);
};


#endif //TRABALHO_1_CLION_COMANDODESCADASTRARACOMODACAO_H
