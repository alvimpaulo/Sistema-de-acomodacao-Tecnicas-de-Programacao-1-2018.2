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
 * @brief Essa classe armazena uma senha.
 * @details Essa classe armazena uma senha de 8 dígitos com letras maiúsculas e minúsculas, símbolos e números.
 */
class Senha {
public:
    /**
     * @fn std::string getSenha() const
     * @brief Retorna uma string que contém a senha.
     * @details Retorna uma string que contém a senha.
     * @return senha uma string de 8 dígitos com letras maiúsculas e minúsculas, símbolos e números.
     */
    std::string getSenha() const{
        return senha;
    }
    /**
     * @fn void setSenha(std::string novaSenha)
     * @brief Atribui uma senha.
     * @details Atribui uma string com 8 dígitos, letras maiúsculas e minúsculas, símbolos e números.
     * @param [in] novaSenha
     */
    void setSenha(std::string novaSenha);

private:
    bool validar(std::string senha);
    std::string senha;
};


#endif //TRABALHO_1_CLION_SENHA_H
