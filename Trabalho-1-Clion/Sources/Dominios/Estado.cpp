//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Estado.h"


const std::vector<std::string> Estado::NOME_ESTADOS = {
        "AC", "AL", "AP", "AM",
        "BA", "CE", "DF", "ES",
        "GO", "MA", "MT", "MS",
        "MG", "PA", "PB", "PR",
        "PE", "PI", "RJ", "RN",
        "RS", "RO", "RR", "SC",
        "SP", "SE", "TO"
};

Estado::Estado(){
    indiceEstado = 0;
}

std::string Estado::getEstado() const{
    return NOME_ESTADOS[indiceEstado];
}

void Estado::setEstado(std::string estado){
    int respostaValidadeEstado;

    respostaValidadeEstado = validar(estado);

    if(validar(estado) != ESTADO_INVALIDO){
        this->indiceEstado = respostaValidadeEstado;
    } else{
        throw (std::invalid_argument("Estado Invalido"));
    }
}

int Estado::validar(std::string estado){
    int resposta;
    int indiceEstado;

    std::transform(estado.begin(), estado.end(), estado.begin(), ::toupper);
    indiceEstado = std::lower_bound(NOME_ESTADOS.begin(), NOME_ESTADOS.end(), estado) - NOME_ESTADOS.begin();


    if(NOME_ESTADOS[indiceEstado] == estado){
        resposta = indiceEstado;
    } else{
        resposta = -1;
    }

    return resposta;
}