//
// Created by paulo on 16-Nov-18.
//

#include "../../../Headers/Controladoras/Servico/CntrsServUsuarios.h"
#include "../../../Headers/ComandoSQL/ComandoCadastrarUsuario.h"

void CntrsServUsuarios::cadastrarUsuario(const Nome &nome, const Identificador &identificador, const Senha &senha) {
    ComandoCadastrarUsuario comandoSQL;
    comandoSQL.cadastrarUsuario(nome, identificador, senha);
}

void CntrsServUsuarios::cadastrarContaCorrente(const Num_Conta_Corrente &numContaCorrente, const Agencia &agencia,
                                               const Banco &banco) {

}

void CntrsServUsuarios::cadastrarCartaoCredito(const Num_Cartao_Credito &numCartaoCredito,
                                               const Data_De_Validade &dataDeValidade) {

}

void CntrsServUsuarios::descadastrarUsuario() {

}

void CntrsServUsuarios::descadastrarContaCorrente(const Num_Conta_Corrente &numContaCorrente) {

}

void CntrsServUsuarios::descadastrarCartaoCredito(const Num_Cartao_Credito &numCartaoCredito) {

}

void CntrsServUsuarios::editarUsuario(const Nome &nome, const Senha &senha) {

}
