//
// Created by Oscar Madureira on 20/11/2018.
//

#include "../../Headers/ComandoSQL/ComandoCadastrarCartaoCredito.h"

void ComandoCadastrarCartaoCredito::cadastrarCartaoCredito(const Identificador &identificador,
                                                           const Num_Cartao_Credito &numCartaoCredito,
                                                           const Data_De_Validade &dataDeValidade) {
    comandoSQL = ""
                 "IF NOT EXISTS (\n"
                 "\tSELECT Usuario FROM Conta_Corrente WHERE Usuario\n"
                 ") or (\n"
                 "\tSELECT Usuario FROM Cartao_Credito WHERE Usuario\n"
                 ")BEGIN\n"
                 "\tINSERT INTO Cartao_Credito (Numero, DataValidade, Usuario) VALUES(\n"
                 "\t\t" + numCartaoCredito.getNum_Cartao() + ", " + dataDeValidade.getData_De_Validade() + ", " + identificador.getIdentificador()+ "\n\n"
                 "\t);\n"
                 "END";

    try {
        this->executar();
    } catch(std::exception &e){
        throw std::runtime_error("Nao foi possivel cadastrar o cartao de credito");
    }
}
