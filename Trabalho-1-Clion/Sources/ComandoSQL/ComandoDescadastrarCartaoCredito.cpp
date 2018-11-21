//
// Created by Oscar Madureira on 20/11/2018.
//

#include "../../Headers/ComandoSQL/ComandoDescadastrarCartaoCredito.h"

void ComandoDescadastrarCartaoCredito::descadastrarCartao(const Num_Cartao_Credito &numCartaoCredito) {
    comandoSQL = ""
                 "DELETE FROM Cartao_Credito WHERE Numero = '0000000000000000' AND NOT EXISTS (\n"
                 "  SELECT Usuario FROM Reservas WHERE Usuario = (\n"
                 "    SELECT Usuario FROM Conta_Corrente WHERE Numero = '0000000000000000'\n"
                 "  )\n"
                 ");";
    try{
        this->executar();
    } catch(std::exception &e){
        throw std::runtime_error("Não foi possível descadastrar o cartao de credito, pois existem reservas com esse cartao");
    }
}
