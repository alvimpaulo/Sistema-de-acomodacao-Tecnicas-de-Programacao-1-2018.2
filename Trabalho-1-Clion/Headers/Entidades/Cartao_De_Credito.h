//
// Created by oetch on 16/09/2018.
//
#ifndef TRABALHO_1_CLION_CARTAO_DE_CREDITO_H
#define TRABALHO_1_CLION_CARTAO_DE_CREDITO_H

#include "../../Headers/Dominios/Num_Cartao_Credito.h"
#include "../../Headers/Dominios/Data_De_Validade.h"

/**
 * @class Cartao_De_Credito Cartao_De_Credito.h
 * @brief Entidade que armazena um cartão de crédito.
 * @brief Entidade que armazena um cartão de crédito.
 */
class Cartao_De_Credito {
public:

    /**
     * @fn Cartao_De_Credito()
     * @brief Construtor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão de suas variáveis.
     */
    Cartao_De_Credito():numero(),dataDeValidade(){}

    /**
     * @fn void setNumero(Num_Cartao_Credito numero)
     * @brief Atribui o número do cartão de crédito.
     * @details Atribui o número do cartão de crédito.
     * @param numero Num_Cartao_Credito que será atribuído.
     */
    void setNumero(Num_Cartao_Credito &numero){
        this->numero = numero;
    }
    /**
     * @fn Num_Cartao_Credito getNumero() cons
     * @brief Retorna o número do cartão de crédito.
     * @return Num_Cartao_Credito contendo o número do cartão de crédito.
     */
    Num_Cartao_Credito getNumero() const{
        return numero;
    }

    /**
     * @fn void setDataDeValidade(Data_De_Validade dataDeValidade)
     * @brief Atribui a data de validade do cartão de crédito.
     * @details Atribui a data de validade do cartão de crédito.
     * @param dataDeValidade Data_De_Validade que será atribuído.
     */
    void setDataDeValidade(Data_De_Validade &dataDeValidade){
        this->dataDeValidade = dataDeValidade;
    }
    /**
     * @fn Data_De_Validade getDataDeValidade() const
     * @brief Retorna a data de validade do cartão de crédito.
     * @return Data_De_Validade contendo a data de validade do cartão de crédito.
     */
    Data_De_Validade getDataDeValidade() const{
        return dataDeValidade;
    }

protected:
private:
    Num_Cartao_Credito numero;
    Data_De_Validade dataDeValidade;
};


#endif //TRABALHO_1_CLION_CARTAO_DE_CREDITO_H
