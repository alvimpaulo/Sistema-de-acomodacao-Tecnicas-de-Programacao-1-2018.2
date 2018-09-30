//
// Created by oetch on 16/09/2018.
//

//todo: Documentar
#ifndef TRABALHO_1_CLION_TESTE_CONTA_CORRENTE_H
#define TRABALHO_1_CLION_TESTE_CONTA_CORRENTE_H

/**
 * @class Teste_Conta_Corrente Teste_Conta_Corrente.h
 * @brief Classe que testa a classe Conta_Corrente.
 * @details
 */
class Teste_Conta_Corrente: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Conta Corrente" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Conta Corrente" << std::endl;
    }
    int rodar();
private:
    static const std::string VALOR_VALIDO;

    Acomodacao *acomodacao;
    void configurar();
    void desconfigurar();
    void casoSucesso();
};


#endif //TRABALHO_1_CLION_TESTE_CONTA_CORRENTE_H
