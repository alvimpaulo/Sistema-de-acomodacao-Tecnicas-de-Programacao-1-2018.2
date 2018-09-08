//
// Created by paulo on 04-Sep-18.
//

#ifndef TRABALHO_1_CLION_TIPO_ACOMODACAO_H
#define TRABALHO_1_CLION_TIPO_ACOMODACAO_H

#include <regex>
#include <stdexcept>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <iostream>

class Tipo_Acomodacao {
public:
    static const std::vector<std::string> TIPOS_ACOMODACAO;

    Tipo_Acomodacao();
    void setTipoAcomodacao(std::string tipoAcomodacao);
    std::string getTipoAcomodacao() const;

protected:
private:
    int indiceTiposAcomodacao;

    bool validar(std::string tipoAcomodacao);
};



#endif //TRABALHO_1_CLION_TIPO_ACOMODACAO_H
