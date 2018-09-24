//
// Created by oetch on 16/09/2018.
//

#include "../../Headers/Entidades/Usuario.h"

Usuario::Usuario(){

}

void Usuario::setNome(Nome nome){
    this->nome = nome;
}

void Usuario::setIdentificador(Identificador identificador){
    this->identificador = identificador;
}

void Usuario::setSenha(Senha senha){
    this->senha = senha;
}