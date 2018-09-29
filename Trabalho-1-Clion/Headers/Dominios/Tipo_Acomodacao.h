//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_TIPO_ACOMODACAO_H
#define TRABALHO_1_CLION_TIPO_ACOMODACAO_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <iostream>

/**
 * @class Tipo_Acomodacao Tipo_Acomodacao.h
 * @brief Essa classe armazena um tipo de acomodação.
 * @details Essa classe armazena um dos 3 tipos de acomodação: Apartamento, Casa ou Flat.
 */
class Tipo_Acomodacao {
public:
    /**
     * @static
     * @var TIPOS_ACOMODACAO
     * @brief Vetor de contém o tipo de acomodação
     */
    static const std::vector<std::string> TIPOS_ACOMODACAO;

    /**
     * @fn Tipo_Acomodacao()
     * @brief Contrutor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão do tipo de acomodação.
     */
    Tipo_Acomodacao();
    /**
     * @fn void setTipoAcomodacao(std::string tipoAcomodacao)
     * @brief Atribui um tipo de acomodação.
     * @details  Atribui um dos tipos de acomodações contido no vetor Tipo_Acomodacao::TIPOS_ACOMODACAO.
     * @param [in] tipoAcomodacao uma string que contém o tipo de acomodação.
     */
    void setTipoAcomodacao(std::string tipoAcomodacao);
    /**
     * @fn std::string getTipoAcomodacao() const
     * @brief Retorna uma string que contém o tipo de acomodação.
     * @details Retorna uma string que contém o tipo de acomodação.
     * @return Retorna uma string que contém o tipo de acomodação.
     */
    std::string getTipoAcomodacao() const{
        return TIPOS_ACOMODACAO[indiceTiposAcomodacao];
    }

protected:
private:
    int indiceTiposAcomodacao;

    bool validar(std::string tipoAcomodacao);
};



#endif //TRABALHO_1_CLION_TIPO_ACOMODACAO_H
