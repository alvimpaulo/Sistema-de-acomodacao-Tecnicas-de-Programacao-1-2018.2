//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_ESTADO_H
#define TRABALHO_1_CLION_ESTADO_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <locale>
#include <iostream>

/**
 *
 */
class Estado {
public:
    /**
     * @static
     * @var NOME_ESTADOS
     * @brief Vetor que contém o nome dos estados brasileiros.
     */
    static const std::vector<std::string> NOME_ESTADOS;

    /**
     * @fn Estado()
     * @brief Contrutor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão dos estados.
     */
    Estado();
    /**
     * @fn setEstado(std::string estado)
     * @brief Atribui uma diária.
     * @details Atribui um estado que contém a sigla de um dos estados brasileiros, essa sigla está presente na variável Estado::NOME_ESTADOS.
     * @param [in] estado é uma string que contém a sigle de um estado brasileiro.
     */
    void setEstado(std::string estado);
    /**
     * @fn std::string getEstado() const
     * @brief Retorna uma string que contém nome do estado em caixa alta.
     * @details Retorna uma string que contém nome do estado em caixa alta.
     * @return É uma string que contém o nome do estado em caixa alta.
     */
    std::string getEstado() const{
        return NOME_ESTADOS[indiceEstado];
    }

protected:
private:
    int indiceEstado;

    bool validar(std::string estado);
};


#endif //TRABALHO_1_CLION_ESTADO_H
