//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_DATA_H
#define TRABALHO_1_CLION_DATA_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
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

    friend bool operator<(const Data& data1, const Data& data2);
    friend bool operator>(const Data& data1, const Data& data2);

protected:
private:
    std::string dia;
    int mes;
    std::string ano;
    std::string data;


    void setDia(std::string dia);
    std::string getDia() const;
    void setMes(std::string mes);
    std::string getMes() const;
    void setAno(std::string ano);
    std::string getAno() const;

    bool valida(std::string data);
    bool validaDia(std::string dia);
    bool validaMes(std::string mes);
    bool validaAno(std::string ano);
};



#endif //TRABALHO_1_CLION_DATA_H
