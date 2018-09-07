//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_DATA_H
#define TRABALHO_1_CLION_DATA_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

class Data {
public:
    static const std::vector<std::string> NOME_MESES;

    static const int LIMITE_INFERIOR_ANO = 2000;
    static const int LIMITE_SUPERIOR_ANO = 2099;
    static const int LIMITE_INFERIOR_DIA = 1;
    static const std::vector<int> LIMITE_SUPERIOR_DIA;

    Data();
    void setData(std::string data);
    void setData(std::string dia, std::string mes, std::string ano);
    std::string getData() const;
    void setDia(std::string dia);
    std::string getDia() const;
    void setMes(std::string mes);
    std::string getMes() const;
    void setAno(std::string ano);
    std::string getAno() const;

protected:
private:
    static const int FEVEREIRO = 1;
    static const std::set<std::string> CONJUNTO_MESES;

    int dia;
    int mes;
    int ano;
    std::string data;
};

const std::vector<std::string> Data::NOME_MESES = {
        "jan", "fev", "mar",
        "abr", "mai", "jun",
        "jul", "ago", "set",
        "out", "nov", "dez"
};

 const std::vector<int> Data::LIMITE_SUPERIOR_DIA = {
         31, 28, 31,
         30, 31, 30,
         31, 31, 30,
         31, 30, 31
 };

 const std::set<std::string> Data::CONJUNTO_MESES(NOME_MESES.begin(), NOME_MESES.end());

#endif //TRABALHO_1_CLION_DATA_H
