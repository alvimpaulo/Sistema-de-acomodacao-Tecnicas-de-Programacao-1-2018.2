//
// Created by oetch on 16/09/2018.
//
#ifndef TRABALHO_1_CLION_CARTAO_DE_CREDITO_H
#define TRABALHO_1_CLION_CARTAO_DE_CREDITO_H

#include "../../Headers/Dominios/Num_Cartao_Credito.h"
#include "../../Headers/Dominios/Data_De_Validade.h"

/**
 * @brief Entidade que armazena um cartão de crédito.
 * @brief Entidade que armazena um cartão de crédito.
 */
class Cartao_De_Credito{
public:

    /**
     * @brief Construtor da classe.
     * @details Quando uma instância dessa classe for criada, será armazenado um valor padrão de suas variáveis.
     */
    Cartao_De_Credito():numero(),dataDeValidade(){}

    /**
     * @brief Atribui o número do cartão de crédito.
     * @details Atribui o número do cartão de crédito.
     * @param numero Num_Cartao_Credito que será atribuído.
     */
    void setNumero(Num_Cartao_Credito &numero){
        this->numero = numero;
    }
    /**
     * @brief Retorna o número do cartão de crédito.
     * @return Num_Cartao_Credito contendo o número do cartão de crédito.
     */
    Num_Cartao_Credito getNumero() const{
        return numero;
    }

    /**
     * @brief Atribui a data de validade do cartão de crédito.
     * @details Atribui a data de validade do cartão de crédito.
     * @param dataDeValidade Data_De_Validade que será atribuído.
     */
    void setDataDeValidade(Data_De_Validade &dataDeValidade){
        this->dataDeValidade = dataDeValidade;
    }
    /**
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
