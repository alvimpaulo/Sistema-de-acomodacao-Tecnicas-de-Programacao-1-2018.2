#include <iostream>
#include "./Headers/Dominios/Agencia.h"

int main() {

    Agencia ag;
    std::cout << ag.getAgenciaNum() << std::endl;
    try {
        ag.setAgenciaNum("123456");
        std::cout << ag.getAgenciaNum() << std::endl;
    }
    catch (std::invalid_argument e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}