#include "testesEntidades.h"
#include <iostream>
// Definições de métodos.

void TUUsuario::setUp(){
    usuario = new Usuario();
    resultado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
        Nome *nome;
        Identificador *identificador;
        Senha *senha;
        nome = new Nome();
        identificador = new Identificador();
        senha = new Senha();
        nome->setNome(VALOR_VALIDO_NOME);
        usuario->setNomeUsuario(*nome);
        Nome auxiliar = usuario->getNomeUsuario();

        if(auxiliar.getNome() == VALOR_VALIDO_NOME) resultado = SUCESSO;
}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}

/*
void TUAcomodacao::setUp(){
    acomodacao = new Acomodacao();
    resultado = SUCESSO;

}

void TUAcomodacao::tearDown(){
    delete acomodacao;

}

void TUAcomodacao::testarCenarioSucesso(){

}

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

void TUCartaoDeCredito::testarCenarioSucesso(){

}

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

void TUContaCorrente::testarCenarioSucesso(){
    
}

int TUContaCorrente::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return resultado;
}
*/