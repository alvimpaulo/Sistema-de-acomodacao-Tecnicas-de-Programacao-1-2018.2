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


class Estado {
public:
    static const std::vector<std::string> NOME_ESTADOS;

    Estado();
    void setEstado(std::string estado);
    std::string getEstado() const;

protected:
private:
    static const int ESTADO_INVALIDO = -1;
    int indiceEstado;

    bool validar(std::string estado);
};


#endif //TRABALHO_1_CLION_ESTADO_H
