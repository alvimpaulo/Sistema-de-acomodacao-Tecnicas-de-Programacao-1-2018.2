//
// Created by Oscar Madureira on 20/11/2018.
//

#include "../../Headers/ComandoSQL/ComandoDescadastrarCartaoCredito.h"

void ComandoDescadastrarCartaoCredito::descadastrarCartao(const Num_Cartao_Credito &numCartaoCredito) {
    comandoSQL = ""
                 "DELETE FROM Cartao_Credito WHERE Numero = " + numCartaoCredito.getNum_Cartao() + " AND exists (\n"
                 "\tSELECT Usuario FROM Reservas WHWRE Usuario = (\n"
                 "\t\tSELECT Usuario FROM Conta_Corrente WHERE Numero = " + numCartaoCredito.getNum_Cartao() + "\n"
                 "\t)\n"
                 ");";
    try{
        this->executar();
    } catch(std::exception &e){
        throw std::runtime_error("Não foi possível descadastrar o cartao de credito, pois existem reservas com esse cartao");
    }
}
