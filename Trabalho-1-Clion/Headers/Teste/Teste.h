//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_TESTE_DOMINIO_H
#define TRABALHO_1_CLION_TESTE_DOMINIO_H


#include <string>

/**
 * @class Teste Teste.h
 * @brief Classe base virtual para os testes
 * @details
 * @pure
 */
class Teste {
public:
    /**
     * @static
     * @brief Valor que indica sucesso
     */
    static const int SUCESSO = 0;
    /**
     * @static
     * @brief Valor que indica falha
     */
    static const int FALHA = 1;
    /**
     * @brief Roda uma sequência de testes para verificar veracidade de uma classe.
     * @return Retorna Teste::FALHA caso haja falha nos testes ou sucesso caso haja Teste::SUCESSO nos testes.
     */
    virtual int rodar();
    /**
     * @brief Exibe uma mensagem de sucesso.
     * @details Exibe uma mensagem de sucesso para um teste específico.
     */
    virtual void mensagemSucesso() = 0;
    /**
     * @brief Exibe uma mensagem de falha.
     * @details Exibe uma mensagem de falha para um teste específico.
     */
    virtual void mensagemFalha() = 0;

protected:
    /**
     * @brief Variável que indica o estado do teste.
     * @details Variável que indica o estado do teste, Teste::FALHA ou Teste::SUCESSO.
     */
    int estado;
private:
    virtual void configurar() = 0;
    virtual void desconfigurar() = 0;

    virtual void casoSucesso() = 0;
    virtual void casoFalha() = 0;
};


#endif //TRABALHO_1_CLION_TESTE_DOMINIO_H
