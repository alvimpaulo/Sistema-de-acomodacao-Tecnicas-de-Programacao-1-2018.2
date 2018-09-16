cmake_minimum_required(VERSION 3.12)
project(Trabalho_1_Clion)

set(CMAKE_CXX_STANDARD 11)

add_executable(Trabalho_1_Clion
        main.cpp
        Sources/Dominios/Agencia.cpp
        Headers/Dominios/Agencia.h
        Sources/Dominios/Banco.cpp
        Headers/Dominios/Banco.h
        Sources/Dominios/Capacidade_De_Acomodacao.cpp
        Headers/Dominios/Capacidade_De_Acomodacao.h
        Sources/Dominios/Diaria.cpp
        Headers/Dominios/Diaria.h
        Sources/Dominios/Data.cpp
        Headers/Dominios/Data.h
        Sources/Dominios/Data_De_Validade.cpp
        Headers/Dominios/Data_De_Validade.h
        Sources/Dominios/Estado.cpp
        Headers/Dominios/Estado.h
        Sources/Dominios/Identificador.cpp
        Headers/Dominios/Identificador.h
        Sources/Dominios/Nome.cpp
        Headers/Dominios/Nome.h
        Sources/Dominios/Num_Cartao_Credito.cpp
        Headers/Dominios/Num_Cartao_Credito.h
        Sources/Dominios/Num_Conta_Corrente.cpp
        Headers/Dominios/Num_Conta_Corrente.h
        Sources/Dominios/Senha.cpp
        Headers/Dominios/Senha.h
        Sources/Dominios/Tipo_Acomodacao.cpp
        Headers/Dominios/Tipo_Acomodacao.h
        Sources/Teste/Dominios/Teste_Agencia.cpp
        Headers/Teste/Dominios/Teste_Agencia.h
        Sources/Teste/Dominios/Teste_Tipo_Acomodacao.cpp
        Headers/Teste/Dominios/Teste_Tipo_Acomodacao.h
        Sources/Teste/Dominios/Teste_Estado.cpp
		Headers/Teste/Dominios/Teste_Estado.h
		Sources/Teste/Dominios/Teste_Diaria.cpp
		Headers/Teste/Dominios/Teste_Diaria.h
		Sources/Teste/Dominios/Teste_Data.cpp
		Headers/Teste/Dominios/Teste_Data.h
		Sources/Teste/Dominios/Teste_Data_De_Validade.cpp
		Headers/Teste/Dominios/Teste_Data_De_Validade.h Sources/Teste/Dominios/Teste_Banco.cpp Headers/Teste/Dominios/Teste_Banco.h Sources/Teste/Dominios/Teste_Capacidade_De_Acomodacao.cpp Headers/Teste/Dominios/Teste_Capacidade_De_Acomodacao.h Sources/Teste/Dominios/Teste_Nome.cpp Headers/Teste/Dominios/Teste_Nome.h Sources/Teste/Dominios/Teste_Identificador.cpp Headers/Teste/Dominios/Teste_Identificador.h Sources/Teste/Dominios/Teste_Num_Cartao.cpp Headers/Teste/Dominios/Teste_Num_Cartao.h Sources/Teste/Dominios/Teste_Num_Conta_Corrente.cpp Headers/Teste/Dominios/Teste_Num_Conta_Corrente.h Sources/Teste/Dominios/Teste_Senha.cpp Headers/Teste/Dominios/Teste_Senha.h)