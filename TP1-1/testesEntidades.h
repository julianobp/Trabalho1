/**
 *@file testesEntidades.h
 *@version 1.0
 *@date 24/09/2018 
 *@author Ayllah Ahmad Lopes e Juliano Balcante Pereira
 *@title Classes de testes de unidade das classes de entidade
 *@brief Arquivo com a descrição das classes de testes de unidade das classes de entidade 
        (classes que verificarão o lançamento de exceções nas classes de entidade).
 */

#ifndef TESTESENTIDADES_H_INCLUDED
#define TESTESENTIDADES_H_INCLUDED

#include "entidades.h"

#include <string>

using namespace std;

/**
 *@brief Classe responsável por testar a classe Usuário, a fim de verificar o lançamento de exceções.
 */

class TUUsuario {
private:
    const string VALOR_VALIDO_NOME = "Jose Maria";
    const string VALOR_VALIDO_IDENTIFICADOR = "maria";
    const string VALOR_VALIDO_SENHA = "!A0b$Yc1";

    // Referência para o objeto a ser testado.

    Usuario *usuario;
    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;

    int run();

};

/**
 *@brief Classe responsável por testar a classe Acomodacao, a fim de verificar o lançamento de exceções.
 */

class TUAcomodacao {
private:
    const string VALOR_VALIDO_IDENTIFICADOR = "lucas";
    const string VALOR_VALIDO_ACOMODACAO = "Flat";
    const static int VALOR_VALIDO_CAPACIDADE = 2;
    const string VALOR_VALIDO_INICIO = "01/jan/2016";
    const string VALOR_VALIDO_TERMINO = "25/jan/2016";
    const string VALOR_VALIDO_CIDADE = "Planaltina";
    const string VALOR_VALIDO_SIGLA = "DF";
    const double VALOR_VALIDO_PRECO = 110.20;

    // Referência para o objeto a ser testado.

    Acomodacao *acomodacao;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;

    int run();

};

/**
 *@brief Classe responsável por testar a classe CartaoDeCredito, a fim de verificar o lançamento de exceções.
 */

class TUCartaoDeCredito {
private:
    const string VALOR_VALIDO_CARTAO = "5223367278781011";
    const string VALOR_VALIDO_VALIDADE = "08/22";

    // Referência para o objeto a ser testado.

    CartaoDeCredito *cartaoDeCredito;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;

    int run();

};

/**
 *@brief Classe responsável por testar a classe ContaCorrente, a fim de verificar o lançamento de exceções.
 */

class TUContaCorrente {
private:
    const string VALOR_VALIDO_CONTA = "005673";
    const string VALOR_VALIDO_AGENCIA = "55623";
    const string VALOR_VALIDO_BANCO = "017";

    // Referência para o objeto a ser testado.

    ContaCorrente *contaCorrente;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;

    int run();

};

#endif // TESTESENTIDADES_H_INCLUDED
