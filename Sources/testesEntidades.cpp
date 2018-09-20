#include "testesEntidades.h"

// Definições de métodos.

void TUUsuario::setUp(){
    usuario = new Usuario();
    resultado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

/*void TUUsuario::testarCenarioSucesso(){
        nome = new Nome();
        identidicador = new Identificador();
        senha = new Senha();
        nome->setNome(VALOR_VALIDO_NOME)
        identidicador->setIdentificador(VALOR_VALIDO_IDENTIFICADOR);
        senha->setSenha(VALOR_VALIDO_SENHA);
        usuario->setNome(nome);
        usuario->setIdentificador(identidicador);
        usuario->setSenha(senha);
}*/

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}


void TUAcomodacao::setUp(){
    acomodacao = new Acomodacao();
    resultado = SUCESSO;

}

void TUAcomodacao::tearDown(){
    delete acomodacao;

}

/*void TUAcomodacao::testarCenarioSucesso(){

}*/

int TUAcomodacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}

void TUCartaoDeCredito::setUp(){
    cartaoDeCredito = new CartaoDeCredito();
    resultado = SUCESSO;
}

void TUCartaoDeCredito::tearDown(){
    delete cartaoDeCredito;
}

/*void TUCartaoDeCredito::testarCenarioSucesso(){

}*/

int TUCartaoDeCredito::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}

void TUContaCorrente::setUp(){
    contaCorrente = new ContaCorrente();
    resultado = SUCESSO;
}

void TUContaCorrente::tearDown(){
    delete contaCorrente;
}

/*void TUContaCorrente::testarCenarioSucesso(){
    
}*/

int TUContaCorrente::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}
