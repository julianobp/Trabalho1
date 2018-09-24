#ifndef TESTESDOMINIOS_H_INCLUDED
#define TESTESDOMINIOS_H_INCLUDED

#include "dominios.h"

#include <string>

using namespace std;

class TUAgencia {
private:
    const string VALOR_VALIDO = "00349";
    const string VALOR_INVALIDO = "a236734";

    // Referência para o objeto a ser testado.

    Agencia *agencia;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUBanco {
private:
    const string VALOR_VALIDO = "019";
    const string VALOR_INVALIDO = "g679";

    // Referência para o objeto a ser testado.

    Banco *banco;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUCapacidadeDeAcomodacao {
private:
	const static int VALOR_VALIDO   = 6;
    const static int VALOR_INVALIDO = 12;

    // Referência para o objeto a ser testado.

    CapacidadeDeAcomodacao *capacidade;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste
    
    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUDiaria {
private:
	const double VALOR_VALIDO   = 500.50;
    const static int VALOR_INVALIDO = 0;

    // Referência para o objeto a ser testado.

    Diaria *preco;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUData {
private:
	const string VALOR_VALIDO   = "29/FeV/2016";
    const string VALOR_INVALIDO = "29/fev/2018";

    // Referência para o objeto a ser testado.

    Data *data;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUDataDeValidade {
private:
	const string VALOR_VALIDO   = "03/23";
    const string VALOR_INVALIDO = "11/-3";

    // Referência para o objeto a ser testado.

    DataDeValidade *dataDeValidade;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUEstado {
private:
	const string VALOR_VALIDO   = "Df";
    const string VALOR_INVALIDO = "AAa";

    // Referência para o objeto a ser testado.

    Estado *sigla;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

	// Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUIdentificador{
private:
    const string VALOR_VALIDO = "pedro";
    const string VALOR_INVALIDO = "P3drO0";

    // Referência para o objeto a ser testado.

    Identificador *identificador;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNome{
private:
    const string VALOR_VALIDO = "JULIANO B. P.";
    const string VALOR_INVALIDO = ".JU.   B.. P999.";

    // Referência para o objeto a ser testado.

    Nome *nome;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNumeroDeCartaoDeCredito{
private:
    const string VALOR_VALIDO = "5223367278781011";
    const string VALOR_INVALIDO = "9OO012347865";

    // Referência para o objeto a ser testado.

    NumeroDeCartaoDeCredito *numCartaoDeCredito;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUNumeroDeContaCorrente {
private:
    const string VALOR_VALIDO = "005698";
    const string VALOR_INVALIDO = "a569874";

    // Referência para o objeto a ser testado.

    NumeroDeContaCorrente *contaCorrente;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUSenha {
private:
    const string VALOR_VALIDO = "1a3A567$";
    const string VALOR_INVALIDO = "0AA98b$2";

    // Referência para o objeto a ser testado.

    Senha *senha;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUTipoDeAcomodacao {
private:
    const string VALOR_VALIDO = "Casa";
    const string VALOR_INVALIDO = "Hotel";

    // Referência para o objeto a ser testado.

    TipoDeAcomodacao *acomodacao;

    // Resultado do teste.

    int resultado;

    // Declarações de métodos.

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

#endif // TESTESDOMINIOS_H_INCLUDED