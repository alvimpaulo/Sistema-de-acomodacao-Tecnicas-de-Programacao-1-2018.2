//
// Created by paulo on 04-Sep-18.
//

#include "../../Headers/Dominios/Senha.h"

bool Senha::validar(std::string senha) {

    std::regex contaRegexTamanho(R"(([!#$%&]|\w){8})");
    std::regex contaRegexMinusculas(R"(^(?=.*[a-z]).+$)");
    std::regex contaRegexMaiusculas(R"(^(?=.*[A-Z]).+$)");
    std::regex contaRegexNumeros(R"(^(?=.*\d).+$)");
    std::regex contaRegexSimbolos(R"(^(?=.*[!#$%&]).+$)");


    if( std::regex_match(senha, contaRegexTamanho) && //tamanho certo
        std::regex_match(senha, contaRegexMinusculas) && //tem Minusculas
        std::regex_match(senha, contaRegexMaiusculas) && //Tem maiusculas
        std::regex_match(senha, contaRegexNumeros) && //tem numeros
        std::regex_match(senha, contaRegexSimbolos)) //tem simbolos
    {
        return true;

    } else {
        return false;
    }
}

void Senha::setSenha(std::string novaSenha) {
    if(validar(novaSenha)) {
        senha = novaSenha;
    } else {
        throw std::invalid_argument(novaSenha + " nao eh uma senha dentro do padrao");
    }
}
