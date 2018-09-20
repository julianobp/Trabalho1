#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario {
<<<<<<< HEAD
=======

>>>>>>> remotes/origin/master
private:
    Nome nome;
    Identificador identificador;
    Senha senha;

public:

    void setNome(Nome nome){
        this->nome = nome;
    }

    Nome getNome() const {
        return nome;
    }

    void setIdentificador(Identificador identificador){
        this->identificador = identificador;
    }

    Identificador getIdentificador() const {
        return identificador;
    }

    void setSenha(Senha senha){
        this->senha = senha;
    }

    Senha getSenha() const {
        return senha;
    }
};

<<<<<<< HEAD

=======
/*
>>>>>>> remotes/origin/master
class Acomodacao {
private:
	Identificador identificador;
	TipoDeAcomodacao acomodacao;
	CapacidadeDeAcomodacao capacidade;
	Data dataInicio;
	Data dataTermino;
	Nome cidade;
	Estado sigla;
	Diaria preco;

public:
	void setIdentificador(Identificador identificador){
        this->identificador = identificador;
    }

    Identificador getIdentificador() const {
        return identificador;
    }

    void setTipoDeAcomodacao(TipoDeAcomodacao acomodacao){
        this->acomodacao = acomodacao;
    }

    TipoDeAcomodacao getTipoDeAcomodacao() const {
        return acomodacao;
    }

    void setCapacidade(CapacidadeDeAcomodacao capacidade){
        this->capacidade = capacidade;
    }

    CapacidadeDeAcomodacao getCapacidade() const {
        return capacidade;
    }

<<<<<<< HEAD
    void setDataInicio(Data dataInicio){
        this->dataInicio = dataInicio;
    }

    Data getDataInicio() const {
        return dataInicio;
    }

    void setDataTermino(Data dataTermino){
        this->dataTermino = dataTermino;
    }

    Data getDataTermino() const {
=======
    void setData(Data dataInicio, int test){
        this->dataInicio = dataInicio;
    }

    Data getData() const {
        return dataInicio;
    }

    void setData(Data dataTermino){
        this->dataTermino = dataTermino;
    }

    Data getData() const {
>>>>>>> remotes/origin/master
        return dataTermino;
    }

    void setNome(Nome cidade){
        this->cidade = cidade;
    }

    Nome getNome() const {
        return cidade;
    }

    void setEstado(Estado sigla){
        this->sigla = sigla;
    }

    Estado getEstado() const {
        return sigla;
    }

    void setDiaria(Diaria preco){
        this->preco = preco;
    }

    Diaria getDiaria() const {
        return preco;
    }
};
<<<<<<< HEAD
=======
*/
>>>>>>> remotes/origin/master

class CartaoDeCredito {
private:
	NumeroDeCartaoDeCredito numCartaoDeCredito;
	DataDeValidade dataDeValidade;

public:

	void setNumeroDeCartaoDeCredito(NumeroDeCartaoDeCredito numCartaoDeCredito){
        this->numCartaoDeCredito = numCartaoDeCredito;
    }

    NumeroDeCartaoDeCredito getNumeroDeCartaoDeCredito() const {
        return numCartaoDeCredito;
    }

    void setDataDeValidade(DataDeValidade dataDeValidade){
        this->dataDeValidade = dataDeValidade;
    }

    DataDeValidade getDataDeValidade() const {
        return dataDeValidade;
    }
};

class ContaCorrente {
private:
	NumeroDeContaCorrente contaCorrente;
	Agencia agencia;
	Banco banco;

public:

	void setNumeroDeContaCorrente(NumeroDeContaCorrente contaCorrente){
        this->contaCorrente = contaCorrente;
    }

    NumeroDeContaCorrente getNumeroDeContaCorrente() const {
        return contaCorrente;
    }

    void setAgencia(Agencia agencia){
        this->agencia = agencia;
    }

    Agencia getAgencia() const {
        return agencia;
    }

    void setBanco(Banco banco){
        this->banco = banco;
    }

    Banco getBanco() const {
        return banco;
    }
};

<<<<<<< HEAD
=======

>>>>>>> remotes/origin/master
#endif // ENTIDADES_H_INCLUDED
