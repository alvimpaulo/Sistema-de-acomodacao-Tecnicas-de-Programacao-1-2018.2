//
// Created by Oscar Madureira on 20/11/2018.
//

#include "../../Headers/ComandoSQL/ComandoCadastrarContaCorrente.h"

void ComandoCadastrarContaCorrente::cadastrarContaCorrente(const Identificador &identificador,
                                                           const Num_Conta_Corrente &numContaCorrente,
                                                           const Agencia &agencia, const Banco &banco) {
    comandoSQL = ""
                 "if not exists (\n"
                 "\tselect Usuario from Conta_Corrente where Usuario\n"
                 ") or (\n"
                 "\tselect Usuario from Cartao_Credito where Usuario\n"
                 ")begin\n"
                 "\tinsert into Conta_Corrente (Numero, Agencia, Banco, Usuario) values(\n"
                 "\t\t" + numContaCorrente.getNum_Conta_Corrente() + ", " + agencia.getAgenciaNum() + ", " + banco.getBancoNum() + ", " + identificador.getIdentificador()+ "\n\n"
                 "\t);\n"
                 "end";

    try {
        this->executar();
    } catch(std::exception &e){
        throw std::runtime_error("Nao foi possivel cadastrar a conta corrente");
    }
}
