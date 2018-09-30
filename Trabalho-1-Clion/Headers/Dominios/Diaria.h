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
 * @brief Domínio que armazena a diária de um cliente.
 * @details Domínio que armazena a diária de um cliente, sendo que essa diária está entre R$1,00 e R$10000,00.
 */
class Diaria {
public:
    /**
     * @var LIMITE_MINIMO_DIARIA
     * @brief Limite mínimo da diária.
     */
    static const constexpr float LIMITE_MINIMO_DIARIA = 1.00f;
    /**
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
     * @details Atribui uma diária no formato de uma string que contém um número decimal, esse número está entre 1,00 e 10000,00.
     * @param diaria String que contém um número decimal, valor da diária.
     */
    void setDiaria(std::string diaria);
    /*
     * @fn void setDiaria(float diaria)
     * @brief Atribui uma diária.
     * @details Atribui uma diária que contém um número decimal, esse número está entre 1,00 e 10000,00.
     * @param diaria float com o valor da diária.

    void setDiaria(float diaria);*/
    /**
     * @fn float getDiaria() const
     * @brief Retorna um número que contém a data de validade.
     * @details Retorna um número que contém a data de validade.
     * @return Float com o valor da diária.
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
