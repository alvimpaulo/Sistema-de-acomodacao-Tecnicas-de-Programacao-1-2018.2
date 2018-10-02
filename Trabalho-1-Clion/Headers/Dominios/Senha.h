//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_SENHA_H
#define TRABALHO_1_CLION_SENHA_H

#include <string>
#include <regex>
#include <stdexcept>
/**
 * @class Senha Senha.h
 * @brief Domínio que armazena uma senha.
 * @details Domínio que armazena uma senha de 8 dígitos com letras, maiúsculas e minúsculas, símbolos e números.
 */
class Senha {
public:
    /**
     * @fn std::string getSenha() const
     * @brief Retorna uma string que contém a senha.
     * @details Retorna uma string que contém a senha.
     * @return senha String de 8 caracteres com letras, maiúsculas e minúsculas, símbolos e números.
     */
    std::string getSenha() const{
        return senha;
    }
    /**
     * @fn void setSenha(std::string novaSenha)
     * @brief Atribui uma senha.
     * @details Atribui uma senha, se satizfaz os padrões, e lança uma exceção, caso contário.
     * @param novaSenha
     */
    void setSenha(std::string senha);

private:
    bool validar(std::string senha);
    std::string senha;
};


#endif //TRABALHO_1_CLION_SENHA_H
