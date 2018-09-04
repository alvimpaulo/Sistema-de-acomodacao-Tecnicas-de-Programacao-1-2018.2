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
        Headers/Dominios/Tipo_Acomodacao.h)