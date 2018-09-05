#include <iostream>
#include "./Headers/Dominios/Agencia.h"
#include "./Headers/Dominios/Nome.h"

int main() {

    Agencia ag;
    Nome nome;
    std::cout << ag.getAgenciaNum() << std::endl;
    std::string input;
    try {
        ag.setAgenciaNum("12345");
        std::cout << ag.getAgenciaNum() << std::endl;

        ag.setAgenciaNum("123456");
        std::cout << ag.getAgenciaNum() << std::endl;
    }
    catch (std::invalid_argument e){
        std::cout << e.what() << std::endl;
    }

    std::getline(std::cin, input);
    while(input != "sair"){
        try {
            nome.setNome(input);
            std::cout << nome.getNome() << std::endl;
        }
        catch (std::invalid_argument e){
            std::cout << e.what() << std::endl;
        }
        std::getline(std::cin, input);
    }


    return 0;
}