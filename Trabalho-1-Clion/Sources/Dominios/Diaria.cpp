//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Diaria.h"

Diaria::Diaria(){
    diaria = 0.0f;
}

void Diaria::setDiaria(float diaria){
    if(validar(diaria)){
        this->diaria = (std::round(diaria*100)/100.0);
    } else{
        throw (std::invalid_argument("Diaria invalida"));
    }
}

float Diaria::getDiaria() const{
    return diaria;
}

bool Diaria::validar(float diaria){
    bool resposta;

    // \d+\.\d{2}
    if(LIMITE_MINIMO_DIARIA <= diaria && diaria <= LIMITE_MAXIMO_DIARIA){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}
