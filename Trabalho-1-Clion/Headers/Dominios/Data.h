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

/**
 * @class Data Data.h
 * @brief Essa classe armazena uma data.
 * @details Essa classe armazena uma data no formato “dia/mês/ano”, onde “dia” é um número, composto por 2 algarismos, entre 01 e 31 (intervalo final a depender do mês), “mês” são as 3 primeiras letras dos meses em caixa baixa e “ano” é um número, composto por 4 algarismos, entre 2000 e 2099.
 */
class Data {
public:
    /**
     * @static
     * @var NOME_MESES
     * @brief Vetor que contém os nomes válidos dos meses
     */
    static const std::vector<std::string> NOME_MESES;
    /**
     * @static
     * @var LIMITE_INFERIOR_ANO
     * @brief Limite mínimo do ano
     */
    static const int LIMITE_INFERIOR_ANO = 2000;
    /**
     * @static
     * @var LIMITE_SUPERIOR_ANO
     * @brief Limite máximo do ano
     */
    static const int LIMITE_SUPERIOR_ANO = 2099;
    /**
     * @static
     * @var LIMITE_INFERIOR_DIA
     * @brief Limite mínimo do dia
     */
    static const int LIMITE_INFERIOR_DIA = 1;
    /**
     * @static
     * @var LIMITE_SUPERIOR_DIA
     * @brief Limites máximo do dia
     */
    static const std::vector<int> LIMITE_SUPERIOR_DIA;

    /**
     * @fn Data()
     * @brief Contrutor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão de uma data.
     */
    Data();
    /**
     * @fn void setData(std::string data)
     * @brief Atribui uma data.
     * @details Atribui uma data que contida na variável data com o formato “DD/MMM/AAAA”, onde “DD” é um número entre 01 e 31 (intervalo final depende do mês e do ano) que representa o dia, “MMM” são as 3 primeiras letras do mês em caixa baixa e “AAAA” é um número entre 2000 e 2099 que representa o ano.
     * @param [in] data é uma string no formato “DD/MMM/AAAA”, onde "DD" é o dia, "MMM" é o mês e "AAAA" é o ano.

     */
    void setData(std::string data);
    /**
     * @fn setData(std::string dia, std::string mes, std::string ano)
     * @brief Atribui uma data.
     * @details Atribui uma data que contida nas variáveis dia, mes e ano, onde dia é uma string de um número entre 01 e 31 (intervalo final depende do mes e do ano) que representa o dia, mes é uma string que contém as 3 primeiras letras do mês em caixa baixa e ano é uma string de um número entre 2000 e 2099 que representa o ano.
     * @param [in] dia é uma string no formato "DD" que representa o dia.
     * @param [in] mes é uma string no formato "MMM" que representa o mês.
     * @param [in] ano é uma string no formato "AAAA" que representa o ano.
     */
    void setData(std::string dia, std::string mes, std::string ano);
    /**
     * @fn std::string getData() const
     * @brief Retorna uma string que contém a data.
     * @details Retorna uma string que contém a data.
     * @return data é uma string que contém a data no formato “DD/MMM/AAA”, onde DD é o dia, "MMM" é o mês e "AAAA" é o ano.
     */
    std::string getData() const{
        return data;
    }

    /**
     * @fn friend bool operator<(const Data& data1, const Data& data2)
     * @brief Compara duas datas.
     * @details Compara duas datas, data1 e data2, e retorna true se a data1 vem antes da data2.
     * @param [in] data1 é uma instância da class Data
     * @param [in] data2 é uma instância da class Data
     * @return É retornado true, se a data1 vem antes da data2, e false, caso contrário.
     */
    friend bool operator<(const Data& data1, const Data& data2);
    /**
     * @fn friend bool operator>(const Data& data1, const Data& data2)
     * @brief Compara duas datas.
     * @details Compara duas datas, data1 e data2, e retorna true se a data1 vem depois da data2.
     * @param [in] data1 é uma instância da class Data
     * @param [in] data2 é uma instância da class Data
     * @return É retornado true, se a data1 vem depois da data2, e false, caso contrário.
     */
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

    bool validar(std::string data);
    bool validarDia(std::string dia);
    bool validarMes(std::string mes);
    bool validarAno(std::string ano);
};



#endif //TRABALHO_1_CLION_DATA_H
