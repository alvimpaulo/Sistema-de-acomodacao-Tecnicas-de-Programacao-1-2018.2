//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_DATA_DE_VALIDADE_H
#define TRABALHO_1_CLION_DATA_DE_VALIDADE_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

class Data_De_Validade {
public:
    static const int LIMITE_INFERIOR_ANO = 00;
    static const int LIMITE_SUPERIOR_ANO = 99;
    static const int LIMITE_INFERIOR_MES = 01;
    static const int LIMITE_SUPERIOR_MES = 12;

    Data_De_Validade();
    void setData_De_Validade(std::string data);
    void setData_De_Validade(std::string dia, std::string mes);
    std::string getData_De_Validade() const;
    void setMes(std::string mes);
    std::string getMes() const;
    void setAno(std::string ano);
    std::string getAno() const;

    bool validar(std::string data);
    bool validarMes(std::string mes);
    bool validarAno(std::string ano);

protected:
private:
    std::string mes;    // int mes
    std::string ano;    // int ano
    std::string data;
};

#endif //TRABALHO_1_CLION_DATA_DE_VALIDADE_H
