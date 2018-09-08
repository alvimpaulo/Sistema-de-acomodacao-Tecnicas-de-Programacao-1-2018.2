//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Data.h"

const std::vector<std::string> Data::NOME_MESES = {
    "jan", "fev", "mar", "apr",
    "mai", "jun", "jul", "ago",
    "set", "out", "nov", "dez"
};

const std::vector<int> Data::LIMITE_SUPERIOR_DIA = {
    31, 28, 31,
    30, 31, 30,
    31, 31, 30,
    31, 30, 31
};

Data::Data(){
    dia = "01";
    mes = "jan";
    ano = "2000";
    data = "01/jan/2000";
}

void Data::setData(std::string data){
    if(valida(data)){
        setAno(data.substr(7, 4));
        setMes(data.substr(3, 3));
        setDia(data.substr(0, 2));
    } else{
        throw (std::invalid_argument("Farmato de data invalida"));
    }
}

void Data::setData(std::string dia, std::string mes, std::string ano){
    setAno(ano);
    setMes(mes);
    setDia(dia);
}

std::string Data::getData() const{
    return data;
}

void Data::setDia(std::string dia){
    if(validaDia(dia)){
        this->dia = dia;
    } else{
        throw (std::invalid_argument("Dia invalido"));
    }
}

std::string Data::getDia() const{
    return dia;
}

void Data::setMes(std::string mes){
    if(validaDia(mes)){
        this->mes = mes;
    } else{
        throw (std::invalid_argument("Mes invalido"));
    }
}

std::string Data::getMes() const{
    return mes;
}

void Data::setAno(std::string ano){
    if(validaDia(ano)){
        this->ano = ano;
    } else{
        throw (std::invalid_argument("Ano invalido"));
    }
}

std::string Data::getAno() const{
    return ano;
}

bool Data::valida(std::string data){
    bool resposta;
    std::regex nomeRegex(R"((\d{2})(\/)([a-zA-z]{3})(\/)(\d{4}))");

    if(std::regex_match(data, nomeRegex)){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data::validaDia(std::string dia){
    bool resposta;
    std::regex nomeRegex(R"((\d{2}))");
    int tmpDia = atoi(dia.c_str());

    if(std::regex_match(dia, nomeRegex) &&
        LIMITE_INFERIOR_DIA <= tmpDia &&
        tmpDia >= (LIMITE_SUPERIOR_DIA[std::find(NOME_MESES.begin(), NOME_MESES.end(), mes) - NOME_MESES.begin()] + (atoi(ano.c_str()) & 7 == 4 ? 1 : 0))){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data::validaMes(std::string mes){
    bool resposta;
    std::regex nomeRegex(R"(([a-zA-z]{3}))");

    if(std::regex_match(mes, nomeRegex) && *std::find(NOME_MESES.begin(), NOME_MESES.end(), mes) == mes){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data::validaAno(std::string ano){
    bool resposta;
    std::regex nomeRegex(R"((\d{4}))");

    if(std::regex_match(data, nomeRegex)){
        int tmpAno = atoi(ano.c_str());
        if(LIMITE_INFERIOR_ANO <= tmpAno && tmpAno <= LIMITE_SUPERIOR_ANO){
            resposta = true;
        } else{
            resposta = false;
        }
    } else{
        resposta = false;
    }

    return resposta;
}