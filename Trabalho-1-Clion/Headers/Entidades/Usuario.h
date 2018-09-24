//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_USUARIO_H
#define TRABALHO_1_CLION_USUARIO_H

#include "../../Headers/Dominios/Nome.h"
#include "../../Headers/Dominios/Identificador.h"
#include "../../Headers/Dominios/Senha.h"

class Usuario {
public:
    Usuario()

    void setNome(Nome nome);
    Nome getNome(){
        return nome;
    }

    void setIdentificador(Identificador identificador);
    Identificador getIdentificador(){
        return identificador;
    }

    void setSenha(Senha senha);
    Senha getSenha(){
        return senha;
    }

protected:
private:
    Nome nome;
    Identificador identificador;
    Senha senha;
};


#endif //TRABALHO_1_CLION_USUARIO_H
