#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testesDominios.h"
#include "testesEntidades.h"

using namespace std;

int main()
{
    TUAgencia testeAgencia;
    TUBanco testeBanco;
    TUCapacidadeDeAcomodacao testeCapacidade;
    TUDiaria testeDiaria;
    TUData testeData;
    TUDataDeValidade testeDataDeValidade;
    TUEstado testeEstado;
    TUIdentificador testeIdentificador;
    TUNome testeNome;
    TUNumeroDeCartaoDeCredito testeNumeroDeCartaoDeCredito;
    TUNumeroDeContaCorrente testeContaCorrente;
    TUSenha testeSenha;
    TUTipoDeAcomodacao testeTipoAcomodacao;
    TUUsuario testeUsuario;
    TUAcomodacao testeAcomodacao;
    TUCartaoDeCredito testeCartao;
    TUContaCorrente testeConta;

    switch(testeAgencia.run()){
        case TUAgencia::SUCESSO: cout << "SUCESSO" << endl;
                                 break;
        case TUAgencia::FALHA  : cout << "FALHA" << endl;
                                 break;
    }

    switch(testeBanco.run()){
        case TUBanco::SUCESSO: cout << "SUCESSO" << endl;
                               break;
        case TUBanco::FALHA  : cout << "FALHA" << endl;
                               break;
    }

    switch(testeCapacidade.run()){
        case TUCapacidadeDeAcomodacao::SUCESSO: cout << "SUCESSO" << endl;
                                				break;
        case TUCapacidadeDeAcomodacao::FALHA  : cout << "FALHA" << endl;
                                				break;
    }

    switch(testeDiaria.run()){
        case TUDiaria::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUDiaria::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO" << endl;
                                 break;
        case TUData::FALHA  : cout << "FALHA" << endl;
                                 break;
    }

    switch(testeDataDeValidade.run()){
        case TUDataDeValidade::SUCESSO: cout << "SUCESSO" << endl;
                                        break;
        case TUDataDeValidade::FALHA  : cout << "FALHA" << endl;
                                        break;
    }

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    switch(testeIdentificador.run()){
        case TUIdentificador::SUCESSO: cout << "SUCESSO" << endl;
                                       break;
        case TUIdentificador::FALHA  : cout << "FALHA" << endl;
                                       break;
    }

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO" << endl;
                              break;
        case TUNome::FALHA  : cout << "FALHA" << endl;
                              break;
    }

    switch(testeNumeroDeCartaoDeCredito.run()){
        case TUNumeroDeCartaoDeCredito::SUCESSO: cout << "SUCESSO" << endl;
                                                 break;
        case TUNumeroDeCartaoDeCredito::FALHA  : cout << "FALHA" << endl;
                                                 break;
    }

    switch(testeContaCorrente.run()){
        case TUNumeroDeContaCorrente::SUCESSO: cout << "SUCESSO" << endl;
                                               break;
        case TUNumeroDeContaCorrente::FALHA  : cout << "FALHA" << endl;
                                               break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                               break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                               break;
    }

    switch(testeTipoAcomodacao.run()){
        case TUTipoDeAcomodacao::SUCESSO: cout << "SUCESSO" << endl;
                                          break;
        case TUTipoDeAcomodacao::FALHA  : cout << "FALHA" << endl;
                                          break;
    }

    switch(testeUsuario.run()){
        case TUUsuario::SUCESSO: cout << "TUUSUCESSO" << endl;
                                          break;
    }

    switch(testeAcomodacao.run()){
        case TUAcomodacao::SUCESSO: cout << "TUAcoSUCESSO" << endl;
                                          break;
    }

    switch(testeCartao.run()){
        case TUCartaoDeCredito::SUCESSO: cout << "TUCartaoSUCESSO" << endl;
                                         break;
    }

    switch(testeConta.run()){
        case TUContaCorrente::SUCESSO: cout << "TUContaSUCESSO" << endl;
                                       break;
    }

    return 0;
}
