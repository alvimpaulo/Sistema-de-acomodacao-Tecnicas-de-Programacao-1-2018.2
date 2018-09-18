//
// Created by oetch on 16/09/2018.
//

#include "../../Headers/Teste/Teste.h"

int Teste::rodar(){
    configurar();

    casoSucesso();
    casoFalha();

    desconfigurar();

    return estado;
}