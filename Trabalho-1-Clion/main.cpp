#include <iostream>
#include <vector>
#include "Headers/Teste/Dominios/Teste_Data.h"
#include "Headers/Teste/Dominios/Teste_Data_De_Validade.h"
#include "Headers/Teste/Dominios/Teste_Diaria.h"
#include "Headers/Teste/Dominios/Teste_Estado.h"
#include "Headers/Teste/Dominios/Teste_Tipo_Acomodacao.h"
#include "Headers/Teste/Dominios/Teste_Banco.h"
#include "Headers/Teste/Dominios/Teste_Agencia.h"
#include "Headers/Teste/Dominios/Teste_Capacidade_De_Acomodacao.h"
#include "Headers/Teste/Dominios/Teste_Nome.h"
#include "Headers/Teste/Dominios/Teste_Identificador.h"
#include "Headers/Teste/Dominios/Teste_Num_Cartao.h"
#include "Headers/Teste/Dominios/Teste_Num_Conta_Corrente.h"
#include "Headers/Teste/Dominios/Teste_Senha.h"



// todo: Testes das Entidades: Todas
int main() {
    std::vector<Teste*> teste(13, NULL);
    teste[0] = new Teste_Agencia;
    teste[1] = new Teste_Banco;
    teste[2] = new Teste_Capacidade_De_Acomodacao;
    teste[3] = new Teste_Data;
    teste[4] = new Teste_Data_De_Validade;
    teste[5] = new Teste_Diaria;
    teste[6] = new Teste_Estado;
    teste[7] = new Teste_Identificador;
    teste[8] = new Teste_Nome;
    teste[9] = new Teste_Num_Cartao;
    teste[10] = new Teste_Num_Conta_Corrente;
    teste[11] = new Teste_Senha;
    teste[12] = new Teste_Tipo_Acomodacao;

    for(int i = 0; i < teste.size(); i++){
        if(teste[i]->rodar() == Teste::SUCESSO){
            teste[i]->mensagemSucesso();
        } else {
            teste[i]->mensagemFalha();
        }
    }

    for(int i = 0; i < teste.size(); i++){
        delete teste[i];
    }


    return 0;
}