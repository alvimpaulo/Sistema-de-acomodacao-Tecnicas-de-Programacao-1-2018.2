//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Data_De_Validade.h"

Data_De_Validade::Data_De_Validade(){
    mes = "01";
    ano = "00";
    data = "01/00";
}

void Data_De_Validade::setData_De_Validade(std::string data){

}

void Data_De_Validade::setData_De_Validade(std::string dia, std::string mes){

}

std::string Data_De_Validade::getData_De_Validade() const{
    return data;
}

void Data_De_Validade::setMes(std::string mes){

}

std::string Data_De_Validade::getMes() const{
    return mes;
}

void Data_De_Validade::setAno(std::string ano){

}

std::string Data_De_Validade::getAno() const{
    return ano
}

int Data_De_Validade::validar(std::string data){

}

int Data_De_Validade::validarMes(std::string mes){

}

int Data_De_Validade::validarDia(std::string dia){

}
