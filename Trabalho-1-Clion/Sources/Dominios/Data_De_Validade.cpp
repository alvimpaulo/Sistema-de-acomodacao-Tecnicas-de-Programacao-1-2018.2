//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Data_De_Validade.h"

const std::string Data_De_Validade::LIMITE_INFERIOR_ANO = "00";
const std::string Data_De_Validade::LIMITE_SUPERIOR_ANO = "99";
const std::string Data_De_Validade::LIMITE_INFERIOR_MES = "01";
const std::string Data_De_Validade::LIMITE_SUPERIOR_MES = "12";

Data_De_Validade::Data_De_Validade(){
    mes = "01";
    ano = "00";
    data = "01/00";
}

void Data_De_Validade::setData_De_Validade(std::string data){
    if(validar(data)){
        setData_De_Validade(data.substr(0, 2), data.substr(3, 2));
    } else{
        throw (std::invalid_argument("Formato da data invalido"));
    }
}

void Data_De_Validade::setData_De_Validade(std::string mes, std::string ano){
    setMes(mes);
    setAno(ano);
}

std::string Data_De_Validade::getData_De_Validade() const{
    return data;
}

void Data_De_Validade::setMes(std::string mes){
    if(validarMes(mes)){
        this->mes = mes;
        data.replace(0, 2, mes);
    } else{
        throw (std::invalid_argument("Mes invalido"));
    }
}

std::string Data_De_Validade::getMes() const{
    return mes;
}

void Data_De_Validade::setAno(std::string ano){
    if(validarAno(ano)){
        this->ano = ano;
        data.replace(3, 2, ano);
    } else{
        throw (std::invalid_argument("Ano invalido"));
    }
}

std::string Data_De_Validade::getAno() const{
    return ano;
}

bool Data_De_Validade::validar(std::string data){
    bool resposta;
    std::regex nomeRegex(R"(^((\d{2})(\/)(\d{2})))");

    if(std::regex_match(data, nomeRegex)){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data_De_Validade::validarMes(std::string mes){
    bool resposta;
    std::regex nomeRegex(R"(^((\d{2})))");

    if(std::regex_match(mes, nomeRegex) && LIMITE_INFERIOR_MES <= mes && mes <= LIMITE_SUPERIOR_MES){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}

bool Data_De_Validade::validarAno(std::string ano){
    bool resposta;
    std::regex nomeRegex(R"(^((\d{2})))");

    if(std::regex_match(ano, nomeRegex) && LIMITE_INFERIOR_ANO <= ano && ano <= LIMITE_SUPERIOR_ANO){
        resposta = true;
    } else{
        resposta = false;
    }

    return resposta;
}
