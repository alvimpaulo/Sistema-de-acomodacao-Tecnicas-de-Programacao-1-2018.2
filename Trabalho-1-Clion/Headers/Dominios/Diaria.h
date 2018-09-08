//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_DIARIA_H
#define TRABALHO_1_CLION_DIARIA_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <iostream>

class Diaria {
public:
    static const constexpr float LIMITE_MINIMO_DIARIA = 1.00f;
    static const constexpr float LIMITE_MAXIMO_DIARIA = 10000.00f;

    Diaria();
    void setDiaria(std::string diaria);
    float getDiaria() const;

protected:
private:
    float diaria;

    bool validar(std::string diaria);
};


#endif //TRABALHO_1_CLION_DIARIA_H
