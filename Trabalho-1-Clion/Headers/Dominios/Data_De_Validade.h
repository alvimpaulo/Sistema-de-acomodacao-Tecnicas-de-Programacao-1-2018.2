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

/**
 * @class Data_De_Validade Data_De_Validade.h
 * @brief Essa classe armazena uma data de validade.
 * @details Essa classe armazena a data de validade do cartão de crédito no formato “mês/ano”, onde “mês” é um número entre 01 e 12 composto por 2 algarismos e ano é um número entre 00 e 99 composto número composto, também, por 2 algarismos.
 */
class Data_De_Validade {
public:
    /**
     * @static
     * @brief Limite Mínimo do ano
     */
    static const std::string LIMITE_INFERIOR_ANO;
    /**
     * @static
     * @brief Limite Máximo do ano
     */
    static const std::string LIMITE_SUPERIOR_ANO;
    /**
     * @static
     * @brief Limite Mínimo do mes
     */
    static const std::string LIMITE_INFERIOR_MES;
    /**
     * @static
     * @brief Limite Máximo do mes
     */
    static const std::string LIMITE_SUPERIOR_MES;

    /**
     * @fn Data_de_Validade()
     * @brief Contrutor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão de uma data de validade.
     */
    Data_De_Validade();
    /**
     * @fn void setData_De_Validade(std::string data)
     * @brief Atribui uma data de validade.
     * @details Atribui uma data de validade no formato “MM/AA”, onde MM é um número entre 01 e 12 e AA é um número entre 00 e 99.
     * @param[in] data string data de validade no fomato "MM/AA"
     */
    void setData_De_Validade(std::string data);
    /**
     * @fn  void setData_De_Validade(std::string dia, std::string mes)
     * @brief Atribui uma data de validade.
     * @details Atribui uma data de validade no formato “MM/AA”, onde MM é um número entre 01 e 12 e AA é um número entre 00 e 99.
     * @param[in] dia Uma string que representa um número de um mês, esse está entre 01 e 12.
     * @param[in] mes Uma string que representa um número de um ano, esse está entre 00 e 99.
     */
    void setData_De_Validade(std::string dia, std::string mes);
    /**
     * @fn std::string getData_De_Validade() const
     * @brief Retorna a data de validade
     * @details Retorna a date de validade
     * @return Uma string que contém a data de validade no formato “MM/AA”, onde MM é o mês e AA é o ano.
     */
    std::string getData_De_Validade() const;

protected:
private:
    std::string mes;    // int mes
    std::string ano;    // int ano
    std::string data;

    void setMes(std::string mes);
    std::string getMes() const;
    void setAno(std::string ano);
    std::string getAno() const;

    bool validar(std::string data);
    bool validarMes(std::string mes);
    bool validarAno(std::string ano);
};

#endif //TRABALHO_1_CLION_DATA_DE_VALIDADE_H
