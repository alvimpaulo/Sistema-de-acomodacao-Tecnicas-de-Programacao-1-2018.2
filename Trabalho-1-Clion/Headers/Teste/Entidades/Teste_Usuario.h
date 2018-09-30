//
// Created by oetch on 16/09/2018.
//
//todo: Documentar
#ifndef TRABALHO_1_CLION_TESTE_USUARIO_H
#define TRABALHO_1_CLION_TESTE_USUARIO_H

/**
 * @class Teste_Usuario Teste_Usuario.h
 * @brief Classe que testa a classe Usuario.
 * @details
 */
class Teste_Usuario: public Teste{
public:
    void mensagemSucesso(){
        std::cout << "Sucesso Usuario" << std::endl;
    }
    void mensagemFalha(){
        std::cout << "Falha Usuario" << std::endl;
    }
    int rodar();
private:
    static const std::string VALOR_VALIDO;

    Acomodacao *acomodacao;
    void configurar();
    void desconfigurar();
    void casoSucesso();
};


#endif //TRABALHO_1_CLION_TESTE_USUARIO_H
