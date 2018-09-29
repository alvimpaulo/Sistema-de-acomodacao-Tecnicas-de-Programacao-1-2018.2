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
    mes = 0;
    ano = "2000";
    data = "01/jan/2000";
}

void Data::setData(std::string data){
    if(validar(data)){
        setData(data.substr(0, 2), data.substr(3, 3), data.substr(7, 4));
    } else{
        throw (std::invalid_argument(data + "nao eh uma data valida"));
    }
}


void Data::setData(std::string dia, std::string mes, std::string ano){
    setAno(ano);
    setMes(mes);
    setDia(dia);
}

void Data::setDia(std::string dia){
    if(validarDia(dia)){
        this->dia = dia;
        data.replace(0, 2, dia);
    } else{
        throw (std::invalid_argument(dia + "nao eh um dia valido"));
    }
}

std::string Data::getDia() const{
    return dia;
}

void Data::setMes(std::string mes){
    if(validarMes(mes)){
        this->mes = std::find(NOME_MESES.begin(), NOME_MESES.end(), mes) - NOME_MESES.begin();
        data.replace(3, 3, mes);
    } else{
        throw (std::invalid_argument(mes + "nao eh um mes valido"));
    }
}

std::string Data::getMes() const{
    return NOME_MESES[mes];
}

void Data::setAno(std::string ano){
    if(validarAno(ano)){
        this->ano = ano;
        data.replace(7, 4, ano);
    } else{
        throw (std::invalid_argument(ano + "nao eh um ano valido"));
    }
}

std::string Data::getAno() const{
    return ano;
}

bool Data::validar(std::string data){
    bool resposta;
    std::regex nomeRegex(R"((\d{2})(\/)([a-zA-z]{3})(\/)(\d{4}))");

    if(std::regex_match(data, nomeRegex)){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data::validarDia(std::string dia){
    bool resposta = false;
    std::regex nomeRegex(R"((\d{2}))");
    int tmpDia = std::stoi(dia);

    if(std::regex_match(dia, nomeRegex) &&
       LIMITE_INFERIOR_DIA <= tmpDia &&
       tmpDia <= (LIMITE_SUPERIOR_DIA[mes] + ((std::stoi(ano) & 3) == 0 && mes == 1 ? 1 : 0))){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data::validarMes(std::string mes){
    bool resposta = false;
    std::regex nomeRegex(R"(([a-zA-z]{3}))");

    if(std::regex_match(mes, nomeRegex) && *std::find(NOME_MESES.begin(), NOME_MESES.end(), mes) == mes){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data::validarAno(std::string ano){
    bool resposta = false;
    std::regex nomeRegex(R"((\d{4}))");

    if(std::regex_match(ano, nomeRegex)){
        int tmpAno = std::stoi(ano);
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

inline bool operator<(const Data& data1, const Data& data2){
    bool resposta = true;

    if(data1.ano == data2.ano){
        if(data1.mes == data2.mes){
            if(data1.dia >= data2.dia){
                resposta = false;
            }
        } else if(data1.mes > data2.mes){
            resposta = false;
        }
    } else if(data1.ano > data2.ano){
        resposta = false;
    }

    return resposta;
}

bool operator>(const Data& data1, const Data& data2){
    return data2 < data1;
}