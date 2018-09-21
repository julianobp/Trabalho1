#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario {
private:
    Nome nomeUsuario;
    Identificador identificadorUsuario;
    Senha senhaUsuario;

public:

    void setNomeUsuario(Nome nomeUsuario){
        this->nomeUsuario = nomeUsuario;
    }

    Nome getNomeUsuario() const {
        return nomeUsuario;
    }

    void setIdentificadorUsuario(Identificador identificadorUsuario){
        this->identificadorUsuario = identificadorUsuario;
    }

    Identificador getIdentificadorUsuario() const {
        return identificadorUsuario;
    }

    void setSenhaUsuario(Senha senhaUsuario){
        this->senhaUsuario = senhaUsuario;
    }

    Senha getSenhaUsuario() const {
        return senhaUsuario;
    }
};

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

#endif // ENTIDADES_H_INCLUDED
