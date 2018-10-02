//
// Created by oetch on 16/09/2018.
//

//todo: Documentar

#ifndef TRABALHO_1_CLION_USUARIO_H
#define TRABALHO_1_CLION_USUARIO_H

#include "../../Headers/Dominios/Nome.h"
#include "../../Headers/Dominios/Identificador.h"
#include "../../Headers/Dominios/Senha.h"

class Usuario {
public:

    Usuario():nome(),identificador(),senha(){}

    void setNome(Nome &nome){
        this->nome = nome;
    }
    Nome getNome(){
        return nome;
    }

    void setIdentificador(Identificador &identificador){
        this->identificador = identificador;
    }
    Identificador getIdentificador(){
        return identificador;
    }

    void setSenha(Senha &senha){
        this->senha = senha;
    }
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
