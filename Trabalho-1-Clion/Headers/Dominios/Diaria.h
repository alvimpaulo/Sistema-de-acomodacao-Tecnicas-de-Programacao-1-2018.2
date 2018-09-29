//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_DIARIA_H
#define TRABALHO_1_CLION_DIARIA_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <iostream>

/**
 * @class Diaria Diaria.h
 * @brief Essa classe armazena a diária de um cliente.
 * @details Essa classe armazena a diária de um cliente, sendo que essa diária está entre 1,00 e 10000,00;.
 */
class Diaria {
public:
    /**
     * @static
     * @var LIMITE_MINIMO_DIARIA
     * @brief Limite mínimo da diária.
     */
    static const constexpr float LIMITE_MINIMO_DIARIA = 1.00f;
    /**
     * @static
     * @var LIMITE_MAXIMO_DIARIA
     * @brief Limite máximo da diária.
     */
    static const constexpr float LIMITE_MAXIMO_DIARIA = 10000.00f;

    /**
     * @fn Diaria()
     * @brief Contrutor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão de uma diária.
     */
    Diaria();
    /**
     * @fn void setDiaria(std::string diaria)
     * @brief Atribui uma diária.
     * @details Atribui uma diária no formato de uma string que contém um número decimal, esse número está entre 1.00 e 10000.00.
     * @param [in] diaria uma string que contém um número decimal, que representa a diária.
     */
    void setDiaria(std::string diaria);
    /**
     * @fn void setDiaria(float diaria)
     * @brief Atribui uma diária.
     * @details Atribui uma diária que contém um número decimal, esse número está entre 1.00 e 10000.00.
     * @param [in] diaria contém um número decimal, que representa a diária.
     */
    void setDiaria(float diaria);
    /**
     * @fn float getDiaria() const
     * @brief Retorna um número que contém a data de validade.
     * @details Retorna um número que contém a data de validade.
     * @return O retorno é um número decimal que representa o valor da diária.
     */
    float getDiaria() const{
        return diaria;
    }

protected:
private:
    float diaria;

    bool validar(std::string diaria);
};


#endif //TRABALHO_1_CLION_DIARIA_H
