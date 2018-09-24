//
// Created by oetch on 16/09/2018.
//

#ifndef TRABALHO_1_CLION_DOMINIO_H
#define TRABALHO_1_CLION_DOMINIO_H

#include <string>

class Dominio{
public:
    virtual void setDado(std::string) = 0;
    virtual std::string getDado() const = 0;

protected:
private:
};


#endif //TRABALHO_1_CLION_DOMINIO_H
