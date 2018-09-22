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
<<<<<<< HEAD
    TUAcomodacao testeAcomodacao;
    TUCartaoDeCredito testeCartao;
    TUContaCorrente testeConta;


    switch(testeAgencia.run()){
        case TUAgencia::SUCESSO: cout << "TUAgencia : SUCESSO" << endl;
=======
    //TUAcomodacao testeAcomodacao;
    //TUCartaoDeCredito testeCartao;
    //TUContaCorrente testeConta;


    switch(testeAgencia.run()){
        case TUAgencia::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                 break;
        case TUAgencia::FALHA  : cout << "TUAgencia : FALHA" << endl;
                                 break;
    }
    
    switch(testeBanco.run()){
<<<<<<< HEAD
        case TUBanco::SUCESSO: cout << "TUBanco : SUCESSO" << endl;
=======
        case TUBanco::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                               break;
        case TUBanco::FALHA  : cout << "TUBanco : FALHA" << endl;
                               break;
    }

    switch(testeCapacidade.run()){
        case TUCapacidadeDeAcomodacao::SUCESSO: cout << "TUCapacidadeDeAcomodacao : SUCESSO" << endl;
                                				break;
        case TUCapacidadeDeAcomodacao::FALHA  : cout << "TUCapacidadeDeAcomodacao : FALHA" << endl;
                                				break;
    }

    switch(testeDiaria.run()){
        case TUDiaria::SUCESSO: cout << "TUDiaria : SUCESSO" << endl;
                                break;
        case TUDiaria::FALHA  : cout << "TUDiaria : FALHA" << endl;
                                break;
    }

    switch(testeData.run()){
<<<<<<< HEAD
        case TUAgencia::SUCESSO: cout << "TUAgencia : SUCESSO" << endl;
=======
        case TUAgencia::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                 break;
        case TUAgencia::FALHA  : cout << "TUAgencia : FALHA" << endl;
                                 break;
    }

    switch(testeDataDeValidade.run()){
<<<<<<< HEAD
        case TUDataDeValidade::SUCESSO: cout << "TUDataDeValidade : SUCESSO" << endl;
=======
        case TUDataDeValidade::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                        break;
        case TUDataDeValidade::FALHA  : cout << "TUDataDeValidade : FALHA" << endl;
                                        break;
    }

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: cout << "TUEstado : SUCESSO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "TUEstado : FALHA" << endl;
                                break;
    }

    switch(testeIdentificador.run()){
<<<<<<< HEAD
        case TUIdentificador::SUCESSO: cout << "TUIdentificador : SUCESSO" << endl;
=======
        case TUIdentificador::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                       break;
        case TUIdentificador::FALHA  : cout << "TUIdentificador : FALHA" << endl;
                                       break;
    }

    switch(testeNome.run()){
<<<<<<< HEAD
        case TUNome::SUCESSO: cout << "TUNome : SUCESSO" << endl;
=======
        case TUNome::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                              break;
        case TUNome::FALHA  : cout << "TUNome : FALHA" << endl;
                              break;
    }

    switch(testeNumeroDeCartaoDeCredito.run()){
<<<<<<< HEAD
        case TUNumeroDeCartaoDeCredito::SUCESSO: cout << "TUNumeroDeCartaoDeCredito : SUCESSO" << endl;
=======
        case TUNumeroDeCartaoDeCredito::SUCESSO: cout << "SUCESSO" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                                 break;
        case TUNumeroDeCartaoDeCredito::FALHA  : cout << "TUNumeroDeCartaoDeCredito : FALHA" << endl;
                                                 break;
    }

    switch(testeContaCorrente.run()){
        case TUNumeroDeContaCorrente::SUCESSO: cout << "TUNumeroDeContaCorrente : SUCESSO" << endl;
                                               break;
<<<<<<< HEAD
        case TUNumeroDeContaCorrente::FALHA  : cout << "TUNumeroDeContaCorrente : FALHA" << endl;
=======
        case TUNumeroDeContaCorrente::FALHA  : cout << "FALHA" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                               break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "TUSenha : SUCESSO" << endl;
                               break;
        case TUSenha::FALHA  : cout << "TUSenha : FALHA" << endl;
                               break;
    }

    switch(testeTipoAcomodacao.run()){
        case TUTipoDeAcomodacao::SUCESSO: cout << "TUTipoDeAcomodacao : SUCESSO" << endl;
                                          break;
<<<<<<< HEAD
        case TUTipoDeAcomodacao::FALHA  : cout << "TUTipoDeAcomodacao : FALHA" << endl;
=======
        case TUTipoDeAcomodacao::FALHA  : cout << "FALHA" << endl;
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185
                                          break;
    }

    switch(testeUsuario.run()){
<<<<<<< HEAD
        case TUUsuario::SUCESSO: cout << "TUUsuario : SUCESSO" << endl;
                                 break;
    }

    switch(testeAcomodacao.run()){
        case TUAcomodacao::SUCESSO: cout << "TUAcomodacao : SUCESSO" << endl;
                                    break;
    }
=======
        case TUUsuario::SUCESSO: cout << "TUUSUCESSO" << endl;
                                 break;
    }

    
    /*switch(testeAcomodacao.run()){
        case TUAcomodacao::SUCESSO: cout << "SUCESSO" << endl;
                                          break;
        case TUAcomodacao::FALHA: cout << "FALHA" << endl;
                                        break;
    }
    
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185

    switch(testeCartao.run()){
        case TUCartaoDeCredito::SUCESSO: cout << "TUCartaoDeCredito : SUCESSO" << endl;
                                         break;
    }

    switch(testeConta.run()){
        case TUContaCorrente::SUCESSO: cout << "TUContaCorrente : SUCESSO" << endl;
                                       break;
<<<<<<< HEAD
    }
    
=======
        case TUContaCorrente::FALHA: cout << "FALHA" << endl;
                                     break;
    }*/
>>>>>>> 40f12d1e27a0301754f1c11a185d07ba6ce3d185

    return 0;
}
