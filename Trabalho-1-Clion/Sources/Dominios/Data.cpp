//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Data.h"


Data::Data(){
    data = "__/___/____";
    dia = 1;
    mes = 0;
    ano = 2000;
}

void Data::setData(std::string data){
    std::regex nomeRegex(R"((\d{2})(\/)([a-z]{3})(\/)(\d{4}))");

    if(std::regex_match(data, nomeRegex)){
        setAno(data.substr(7, 4));
        setMes(data.substr(3, 3));
        setDia(data.substr(0, 2));
    } else{
        throw (std::invalid_argument("Data Invalida"));
    }
}

void Data::setData(std::string dia, std::string mes, std::string ano){
    bool ehValido;
    std::regex nomeRegex;

    ehValido = true;

    nomeRegex = R"((\d{2}))";
    if(!std::regex_match(dia, nomeRegex)){
        ehValido = false;
    }
    nomeRegex = R"(([a-z]{3}))";
    if(!std::regex_match(mes, nomeRegex)){
        ehValido = false;
    }
    nomeRegex = R"((\d{4}))";
    if(!std::regex_match(ano, nomeRegex)){
        ehValido = false;
    }

    if(ehValido){
        setAno(ano);
        setMes(mes);
        setDia(dia);
    } else{
        throw (std::invalid_argument("Data Invalida"));
    }
}

std::string Data::getData() const{
    return data;
}

void Data::setAno(std::string ano){
    int tmpAno;

    tmpAno = atoi(ano.c_str());

    if(LIMITE_INFERIOR_ANO >= tmpAno&& tmpAno <= LIMITE_SUPERIOR_ANO ){
        this->ano = tmpAno;
        data.replace(7, 4, ano);
    } else{
        throw (std::invalid_argument("Data Invalida"));
    }
}

std::string Data::getAno() const{
    return std::to_string(ano);
}

void Data::setMes(std::string mes){
    int indiceMes;

    indiceMes = std::find(NOME_MESES.begin(), NOME_MESES.end(), mes) - NOME_MESES.begin();

    if(NOME_MESES[indiceMes] == mes){
        this->mes = indiceMes;
        data.replace(3, 3, mes);
    } else{
        throw (std::invalid_argument("Data Invalida"));
    }
}

std::string Data::getMes() const{
    return NOME_MESES[mes];
}

void Data::setDia(std::string dia){
    int tmpDia;

    tmpDia = atoi(dia.c_str());

    if(LIMITE_INFERIOR_DIA >= tmpDia && tmpDia <= LIMITE_SUPERIOR_DIA[mes] + (mes == FEVEREIRO && ano & 7 == 4 ? 1 : 0) ){
        this->dia = tmpDia;
        data.replace(0, 2, dia);
    } else{
        throw (std::invalid_argument("Data Invalida"));
    }
}

std::string Data::getDia() const{
    return std::to_string(dia);
}
