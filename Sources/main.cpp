#include <iostream>

#include "dominios.h"
#include "entidades.h"
<<<<<<< HEAD
#include "testesDominios.h"
#include "testesEntidades.h"
=======
#include "testes.h"
>>>>>>> remotes/origin/master

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
<<<<<<< HEAD
    //TUUsuario testeUsuario;
    //TUAcomodacao testeAcomodacao;
    //TUCartaoDeCredito testeCartao;
    //TUContaCorrente testeConta;
=======
    TUUsuario testeUsuario;
    //TUAcomodacao testeAcomodacao;
    TUCartaoDeCredito testeCartao;
    TUContaCorrente testeConta;
>>>>>>> remotes/origin/master


    switch(testeAgencia.run()){
        case TUAgencia::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                                 break;
        case TUAgencia::FALHA  : cout << "FALHA" << endl;
                                 break;
=======
                                                break;
        case TUAgencia::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }
    
    switch(testeBanco.run()){
        case TUBanco::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                               break;
        case TUBanco::FALHA  : cout << "FALHA" << endl;
                               break;
=======
                                                break;
        case TUBanco::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
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
        case TUAgencia::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                                 break;
        case TUAgencia::FALHA  : cout << "FALHA" << endl;
                                 break;
=======
                                                break;
        case TUAgencia::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }

    switch(testeDataDeValidade.run()){
        case TUDataDeValidade::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                                        break;
        case TUDataDeValidade::FALHA  : cout << "FALHA" << endl;
                                        break;
=======
                                                break;
        case TUDataDeValidade::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }

    switch(testeEstado.run()){
        case TUEstado::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUEstado::FALHA  : cout << "FALHA" << endl;
                                break;
    }

    switch(testeIdentificador.run()){
        case TUIdentificador::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                                       break;
        case TUIdentificador::FALHA  : cout << "FALHA" << endl;
                                       break;
=======
                                                break;
        case TUIdentificador::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }

    switch(testeNome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                              break;
        case TUNome::FALHA  : cout << "FALHA" << endl;
                              break;
=======
                                                break;
        case TUNome::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }

    switch(testeNumeroDeCartaoDeCredito.run()){
        case TUNumeroDeCartaoDeCredito::SUCESSO: cout << "SUCESSO" << endl;
<<<<<<< HEAD
                                                 break;
        case TUNumeroDeCartaoDeCredito::FALHA  : cout << "FALHA" << endl;
                                                 break;
=======
                                                break;
        case TUNumeroDeCartaoDeCredito::FALHA: cout << "FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }

    switch(testeContaCorrente.run()){
        case TUNumeroDeContaCorrente::SUCESSO: cout << "SUCESSO" << endl;
                                               break;
<<<<<<< HEAD
        case TUNumeroDeContaCorrente::FALHA  : cout << "FALHA" << endl;
                                               break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO" << endl;
                               break;
        case TUSenha::FALHA  : cout << "FALHA" << endl;
                               break;
=======
        case TUNumeroDeContaCorrente::FALHA: cout << "FALHA" << endl;
                                             break;
    }

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "senha:SUCESSO" << endl;
                                                break;
        case TUSenha::FALHA: cout << "senha:FALHA" << endl;
                                                break;
>>>>>>> remotes/origin/master
    }

    switch(testeTipoAcomodacao.run()){
        case TUTipoDeAcomodacao::SUCESSO: cout << "SUCESSO" << endl;
                                          break;
<<<<<<< HEAD
        case TUTipoDeAcomodacao::FALHA  : cout << "FALHA" << endl;
                                          break;
    }

    /*switch(testeUsuario.run()){
=======
        case TUTipoDeAcomodacao::FALHA: cout << "FALHA" << endl;
                                        break;
    }

    switch(testeUsuario.run()){
>>>>>>> remotes/origin/master
        case TUUsuario::SUCESSO: cout << "TUUSUCESSO" << endl;
                                          break;
        case TUUsuario::FALHA: cout << "TUUFALHA" << endl;
                                        break;
    }

<<<<<<< HEAD
    
=======
    /*
>>>>>>> remotes/origin/master
    switch(testeAcomodacao.run()){
        case TUAcomodacao::SUCESSO: cout << "SUCESSO" << endl;
                                          break;
        case TUAcomodacao::FALHA: cout << "FALHA" << endl;
                                        break;
    }
<<<<<<< HEAD
    
=======
    */
>>>>>>> remotes/origin/master

    switch(testeCartao.run()){
        case TUCartaoDeCredito::SUCESSO: cout << "TUCartaoSUCESSO" << endl;
                                         break;
        case TUCartaoDeCredito::FALHA: cout << "TUCartaoFALHA" << endl;
                                       break;
    }

    switch(testeConta.run()){
        case TUContaCorrente::SUCESSO: cout << "SUCESSO" << endl;
                                       break;
        case TUContaCorrente::FALHA: cout << "FALHA" << endl;
                                     break;
<<<<<<< HEAD
    }*/
=======
    }
>>>>>>> remotes/origin/master

    return 0;
}
