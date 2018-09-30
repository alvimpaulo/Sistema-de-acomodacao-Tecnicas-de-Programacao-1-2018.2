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
 * @class Estado Estado.h
 * @brief Domínio que armazena a sigla de um estado.
 * @details Domínio que armazena a sigla de um dos 27 estados (unidades federativas) brasileiras em caixa alta.
 */
class Estado {
public:
    /**
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
     * @brief Atribui um estado.
     * @details Atribui uma sigla de estado, caso esteja ´resente no vetor Estado::NOME_ESTADOS, ou lança um exceção, caso contrário.
     * @param estado String que contém a sigle de um estado brasileiro.
     */
    void setEstado(std::string estado);
    /**
     * @fn std::string getEstado() const
     * @brief Retorna uma string que contém nome do estado em caixa alta.
     * @details Retorna uma string que contém nome do estado em caixa alta.
     * @return String que contém o nome do estado em caixa alta.
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
