#include "dominios.h"

#include <string>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <locale>

#include <iostream>

using namespace std;

void Agencia::validar(string agencia) throw (invalid_argument){
	int verificadorTamanho;
	int i;
	
    verificadorTamanho = agencia.size();

    // Lança exceção se o tamanho da string agencia for diferente do tamanho esperado
	// ou se algum caracter da string apresentar valor diferente de 0-9

	if(verificadorTamanho != TAMANHO){
		throw invalid_argument("Argumento invalido.");
	}
	else{  
        
        // Testa a validade de cada digito
		for (i = 0; i < TAMANHO; ++i){
			if(!isdigit(agencia[i])){
				throw invalid_argument("Argumento invalido.");
            }
        }
	}
}

void Agencia::setAgencia(string agencia) throw (invalid_argument){
	validar(agencia);
	this->agencia = agencia;
}

void Banco::validar(string banco) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    verificadorTamanho = banco.size();

    //Lança exceção se o tamanho da string banco for diferente do tamanho esperado
	// ou se algum caracter da string apresentar valor diferente de 0-9

    if ( verificadorTamanho != TAMANHO ){
        throw invalid_argument("Argumento invalido.");
    }
    else{
		for (i = 0; i < TAMANHO; ++i){
			if( !isdigit(banco[i]) ){
				throw invalid_argument("Argumento invalido.");
            }
        }    
    }
}

void Banco::setBanco(string banco) throw (invalid_argument){
    validar(banco);
    this->banco = banco;
}

void CapacidadeDeAcomodacao::validar(int capacidade) throw (invalid_argument){

 	//Lança exceção se o valor for maior ou menor que os limites definidos

    if (capacidade > CAPACIDADE_MAXIMA || capacidade < CAPACIDADE_MINIMA){
        throw invalid_argument("Argumento invalido.");
    }
}

void CapacidadeDeAcomodacao::setCapacidade(int capacidade) throw (invalid_argument){
    validar(capacidade);
    this->capacidade = capacidade;
}


void Diaria::validar(double preco) throw (invalid_argument){

 	//Lança exceção se o preço for maior ou menor que os limites definidos

    if (preco > PRECO_MAXIMO || preco < PRECO_MINIMO){
        throw invalid_argument("Argumento invalido.");
    }
}

void Diaria::setDiaria(double preco) throw (invalid_argument){
    validar(preco);
    this->preco = preco;
}

int Data::verificaMes(string nomeMes, string *meses){
    int verificador = INVALIDO;
    for(int i = 0; i <NUMERO_MESES; ++i){
        if( nomeMes == meses[i]){
            verificador = ++i;
            break;
        }
    }

    return verificador;
}

int Data::verificaBissexto(int ano) throw (invalid_argument){
    
    // Se o ano for múltiplo de 100 e não for múltiplo de 400 ou
    // ano não for múltiplo de 4, então NÃO É bissexto
    if((ano % 100 == 0) && (ano % 400 != 0) || (ano % 4 != 0)){
        return INVALIDO;
    }
    
    // Do contrário, o ano certamente É bissexto.
    else{
        return VALIDO;
    }
}

void Data::validar(string data) throw (invalid_argument){
    int verificadorTamanho;
    int verificadorMes;
    int i;
    char dia[TAMANHO_PADRAO_DIA];
    char mes[TAMANHO_PADRAO_MES];
    char ano[TAMANHO_PADRAO_ANO];
    string nomeMes;
    verificadorTamanho = data.size();
    
    string meses[NUMERO_MESES] = {"jan", "fev", "mar", "abr",
                                  "mai", "jun", "jul", "ago",
                                  "set", "out", "nov", "dez"};
    int numeroDiasDoMes[NUMERO_MESES] = {31, 29, 31, 30,
                                         31, 30, 31, 31,
                                         30, 31, 30, 31};

    data.copy(dia, TAMANHO_PADRAO_DIA, POSICAO_DIA);
    data.copy(mes, TAMANHO_PADRAO_MES, POSICAO_SEPARADOR_DIA_MES + 1);
    data.copy(ano, TAMANHO_PADRAO_ANO, POSICAO_SEPARADOR_MES_ANO + 1); 
    nomeMes = mes;

    //Converte os caracteres, se do tipo letra, da string nomeMes para caixa baixa
    for(i = 0; nomeMes[i] != '\0'; ++i){
        if(isalpha(nomeMes[i])){
            nomeMes[i] = tolower(nomeMes[i]);
        }
    }

    verificadorMes = verificaMes(nomeMes, &meses[0]);
    
    // Lança exceção se o tamanho da string agencia for diferente do tamanho esperado
    if( (verificadorTamanho != TAMANHO) ){
        throw invalid_argument("Argumento invalido.");
    }

    // Lança exceção se não for encontrado os caracteres separadores dos campos da data
    // na posiçãoe esperada, violando o formato
    else if( data[POSICAO_SEPARADOR_DIA_MES] != '/' &&
             data[POSICAO_SEPARADOR_MES_ANO] != '/'){
        throw invalid_argument("Argumento invalido.");
    }

    // Lança exceção se o dia estiver fora do intervalo definido com válido
    else if(atoi(dia) < DIA_MINIMO || atoi(dia) > DIA_MAXIMO){
        throw invalid_argument("Argumento invalido.");
    }

    // Lança exceção se o ano estiver fora do intervalo definido como válido
    else if(atoi(ano) < ANO_MINIMO || atoi(ano) > ANO_MAXIMO){
        throw invalid_argument("Argumento invalido.");
    }
    else{

        // Lança exceção se houver caracteres que não são letra na string nomeMes
        for(i = 0; nomeMes[i] != '\0'; ++i){
            if(!isalpha(nomeMes[i])){
                throw invalid_argument("Argumento invalido.");
            }
        }
        
        // Lança exceção se o nome do mês não for encontrado no vetor de string dos meses
        // ou se o dia não existir para o mês dada
        // ou se, para dado ano bissexto e para o mês de ferevereiro, o dia for maior que
        // o limite dado ao mês de fereiro em ano não bissexto
        if(verificadorMes == INVALIDO){
            throw invalid_argument("Argumento invalido.");
        }
        else if(atoi(dia) > numeroDiasDoMes[verificadorMes - 1]){
            throw invalid_argument("Argumento invalido.");
        }
        else{
            if((verificaBissexto(atoi(ano)) == INVALIDO)  && (nomeMes == "fev") && ( atoi(dia) > FEVEREIRO_NAO_BISSEXTO )){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

void Data::setData(string data) throw (invalid_argument){
    validar(data);
    this->data = data;
}

void DataDeValidade::validar(string dataDeValidade) throw (invalid_argument){
    int verificadorTamanho;
    int i;
    char mes[TAMANHO_PADRAO_MES],ano[TAMANHO_PADRAO_ANO];

    verificadorTamanho = dataDeValidade.size();
    dataDeValidade.copy(mes,POSICAO_FINAL_MES, POSICAO_INICIAL_MES);
    dataDeValidade.copy(ano,POSICAO_FINAL_ANO,POSICAO_INICIAL_ANO);

    // Lança exceção se o tamanho da string dataDeValidade for diferente do tamanho esperado
    if(verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }

    // Lança exceção se não houver um separador '/' na data de validade
    else if(dataDeValidade[POSICAO_SEPARADOR] != '/'){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        //Tem problema deixar com a função atoi() mesmo?
        // Lança exceção se o valor do mês ou do ano estiver fora do intervalo definido com válido
        if(atoi(mes) < MES_MINIMO || atoi(mes) > MES_MAXIMO ||
           atoi(ano) < ANO_MINIMO || atoi(ano) > ANO_MAXIMO){
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void DataDeValidade::setDataDeValidade(string dataDeValidade) throw (invalid_argument){
    validar(dataDeValidade);
    this->dataDeValidade = dataDeValidade;
}

int Estado::verificaEstado(string sigla, string *listaEstados){
    int verificador = INVALIDO;
    for(int i = 0; i < QUANTIDADE_ESTADOS; ++i){
        cout << i << "/" << listaEstados[i] << endl;
        if( sigla == listaEstados[i]){
            cout << "encontrei" << endl;
            verificador = VALIDO;
            break;
        }
    }

    return verificador;
}

void Estado::validar(string sigla) throw (invalid_argument){
	int i;
    int verificadorTamanho;
    int verificadorEstado = INVALIDO;
	string listaEstados[QUANTIDADE_ESTADOS] = {"AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS",
                              "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC", "SP", "SE", "TO"};
    
    cout << "Criei estados == " << listaEstados->size() << endl;
    verificadorTamanho = sigla.size();
    verificadorEstado = verificaEstado(sigla, &listaEstados[0]);
    //Lança exceção se a sigla não tiver tamanho esperado

    if(verificadorTamanho != TAMANHO_PADRAO_UF){
        cout << "tamanho" << endl;
        throw invalid_argument("Argumento invalido.");
    }
    else{

        //Lança exceção se a sigla não for encontrada no setor de siglas
        for(i = 0; i < TAMANHO_PADRAO_UF; ++i){
            if(!isalpha(sigla[i])){
                cout << "Não e letra" << endl;
                throw invalid_argument("Argumento invalido.");
            }
            else{
                sigla[i] = toupper(sigla[i]);
            }
        }
        cout << "verifica invalid" << endl;
         if(verificadorEstado != VALIDO){
            cout << "Invalid" << endl;
            throw invalid_argument("Argumento invalido.");
        }
    }

}

void Estado::setEstado(string sigla) throw (invalid_argument){
    validar(sigla);
    this->sigla = sigla;
}

void Identificador::validar(string identificador) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    verificadorTamanho = identificador.size();

    if (verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        for (i=0; i<TAMANHO; ++i){
            if(!islower(identificador[i])){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

void Identificador::setIdentificador(string identificador) throw (invalid_argument){
    validar(identificador);
    this->identificador = identificador;
}

void Nome::validar(string nome) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    verificadorTamanho = nome.size();

    if(verificadorTamanho > TAMANHO_MAXIMO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        if(nome[0] == '.'){
            throw invalid_argument("Argumento invalido.");
        }

        for(i = 0; i < verificadorTamanho; ++i){
            //verificação sequência
            if(!isalpha(nome[i]) && nome[i] != ' ' && nome[i] != '.'){
                throw invalid_argument("Argumento invalido.");
            }

            //verifica a característica do caracter adjacente a algum outro
            if(i > 0){
                //verifica se é um ponto que não é precedido por letra
                if(nome[i] == '.' && !isalpha(nome[i-1])){
                    throw invalid_argument("Argumento invalido.");
                }

                //verifica se é um espaço em branco seguido de outro espaço em branco
                if(nome[i-1] == ' ' && nome[i] == ' '){
                    throw invalid_argument("Argumento invalido.");
                }
            }
        }
    }
}

void Nome::setNome(string nome) throw (invalid_argument){
    validar(nome);
    this->nome = nome;
}

void NumeroDeCartaoDeCredito::validar(string numCartaoDeCredito) throw (invalid_argument){
    int verificadorTamanho;
    int isOnlyDigit = 1;
    int i;

    verificadorTamanho = numCartaoDeCredito.size();

    if(verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        for (i = 0; i < verificadorTamanho; ++i){
            if(!isdigit(numCartaoDeCredito[i])){
                isOnlyDigit = 0;
                throw invalid_argument("Argumento invalido.");
            }
        }
        if(isOnlyDigit){
            if(!checkLuhn(numCartaoDeCredito)){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

bool NumeroDeCartaoDeCredito::checkLuhn(string numCartaoDeCredito) throw (invalid_argument){
    int somatorio = 0;
    int numeroDigitos = numCartaoDeCredito.size();
    int numeroParidade = (numeroDigitos - 1) % 2;
    int digito;
    char cDigito[2] = "\0";
    int i;

    for (i = numeroDigitos; i > 0; i--){
        cDigito[0] = numCartaoDeCredito[i - 1];
        digito = atoi(cDigito);
        
        if ( numeroParidade == i % 2){
            digito = digito * 2;
        }

        somatorio += digito/10;
        somatorio += digito%10;
    }
    return 0 == somatorio % 10;
}

void NumeroDeCartaoDeCredito::setNumeroDeCartaoDeCredito(string numCartaoDeCredito) throw (invalid_argument){
    validar(numCartaoDeCredito);
    this->numCartaoDeCredito = numCartaoDeCredito;
}

void NumeroDeContaCorrente::validar(string contaCorrente) throw (invalid_argument){
    int verificadorTamanho;
    int i;

    //Lança exceção se o tamanho da string contaCorrente for diferente do tamanho definido
    // ou se algum caracter da string apresentar valor diferente de 0-9

    verificadorTamanho = contaCorrente.size();

    if(verificadorTamanho != TAMANHO_MAXIMO){
        throw invalid_argument("Argumento invalido.");
    }
    else{ //testar a validade de cada digito
        for (i = 0; i < TAMANHO_MAXIMO; ++i){
            if(!isdigit(contaCorrente[i])){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }
}

void NumeroDeContaCorrente::setNumeroDeContaCorrente(string contaCorrente) throw (invalid_argument){
    validar(contaCorrente);
    this->contaCorrente = contaCorrente;
}

bool Senha::verificaCaracteresObrigatorios(string senha) throw (invalid_argument){
    bool digito = 0;
    bool letraMaiuscula = 0;
    bool letraMinuscula = 0;
    bool simbolo = 0;
    int i, j;

    char simbolosObrigatorios[TAMANHO_SIMBOLOS] = {'!', '#', '$', '%', '&'};

    for(i = 0; i < senha.size(); ++i){
        if(islower(senha[i])){
            letraMinuscula = 1;
        }
        else if(isupper(senha[i])){
            letraMaiuscula = 1;
        }
        else if(isdigit(senha[i])){
            digito = 1;
        }
        else{
            for(j = 0; j < TAMANHO_SIMBOLOS; ++j){
                if(senha[i] == simbolosObrigatorios[j]){
                    simbolo = 1;
                }
            }
        }

        if (digito * letraMinuscula * letraMaiuscula * simbolo == 1)
            break;
    }
    return digito * letraMinuscula * letraMaiuscula * simbolo;
}

bool Senha::verificaRepeticao(string senha) throw (invalid_argument){
    int i;
    int verificadorTamanho;
    char extratorCaracter;
    bool caracteres[QUANTIDADE_CARACTERES];
    
    //Inicializando a contagem
    verificadorTamanho = senha.size();
    for (i = 0; i < QUANTIDADE_CARACTERES; ++i){
        caracteres[i] = 0;
    }

    for (i = 0; i < verificadorTamanho; i++){
        if(caracteres[int(senha[i])]){
            return 1;
        }
        else{
            caracteres[int(senha[i])] = 1;
        }
    }

    return 0;
}

void Senha::validar(string senha) throw (invalid_argument){
    int verificadorTamanho;
    bool isSimbolo;
    int i, j;
    
    char simbolos[TAMANHO_SIMBOLOS] = {'!', '#', '$', '%', '&'};

    verificadorTamanho = senha.size();

    if (verificadorTamanho != TAMANHO){
        throw invalid_argument("Argumento invalido.");
    }
    else{
        for (i = 0; i < verificadorTamanho; ++i){
            isSimbolo = 0;
            for (j = 0; j < TAMANHO_SIMBOLOS; ++j){
                if( senha[i] == simbolos[j]){
                    isSimbolo = 1;
                    break;
                }
            }

            if( !isSimbolo && !isalnum(senha[i]) ){
                throw invalid_argument("Argumento invalido.");
            }
        }

        if( verificaRepeticao(senha) ){
            throw invalid_argument("Argumento invalido.");
        }
        else if( !verificaCaracteresObrigatorios(senha) ){
            throw invalid_argument("Argumento invalido.");
        }
    }
}

void Senha::setSenha(string senha) throw (invalid_argument){
    validar(senha);
    this->senha = senha;
}

void TipoDeAcomodacao::validar(string acomodacao) throw (invalid_argument){
    int i;
    int isAcomodacao;
    string vetor[3] = {"Apartamento", "Casa", "Flat"};

    //Lança exceção se o acomodacao for diferente das definidas

    for(i = 0; i < TAMANHO_VETOR; ++i){
        if(acomodacao.compare(vetor[i]) == 0){
            isAcomodacao = 1;
            break;
        }
    }

    if(!isAcomodacao){
        throw invalid_argument("Argumento invalido.");
    }   
}

void TipoDeAcomodacao::setTipoDeAcomodacao(string acomodacao) throw (invalid_argument){
    validar(acomodacao);
    this->acomodacao = acomodacao;
}
