//
//  readArquivos.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//  Adapted from Deitel, 2006
//
//
//  Lê e imprime um arquivo sequencial.
//
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

#include <fstream> // fluxo de arquivo
using std::ifstream; // insere fluxo de arquivo

#include <iomanip>
using std::setw;
using std::setprecision;

#include <string>
using std::string;

#include <cstdlib>
using std::exit; // sai do protótipo da função

void exibeDados( int, const string, double ); // protótipo
// VEJAM QUE NÃO PRECISAMOS NOMEAR OS PARÂMETROS

int main()
{
    int numConta;
    char nomeCliente[ 30 ];
    double saldoCliente;
    
    // construtor ifstream abre o arquivo
    ifstream cadastro_clientes( "clientes.dat", ios::in );	//in = entrada, abre no diretorio que estiver. // O arquivo tem de existir
    
    // fecha o programa se ifstream não pode abrir o arquivo
    if ( !cadastro_clientes )	//Executado quando não conseguir abrir o arquivo
    {
        cerr << "Erro na abertura do arquivo\n" << endl;
        exit( 1 );
    }
    
    cout << "Conta" << "\t"
         << "Nome" << "\t"
            "Saldo" << endl;
            
    // exibe cada registro no arquivo
    cadastro_clientes >> numConta >> nomeCliente >> saldoCliente;
    while ( !cadastro_clientes.eof() )	//.eof() devolve falso se chegar no fim do arquivo, verdadeiro se chegar no fim do arquivo
          {
		  //Linha apagada
          exibeDados( numConta, nomeCliente, saldoCliente );
          cadastro_clientes >> numConta >> nomeCliente >> saldoCliente;
          }

    cadastro_clientes.close();			//.close() fecha o arquivo, antes de terminar o programa
// VEJAM QUE NO PROGRAMA TOMAMOS O CUIDADO DE FECHAR O ARQUIVO
    
    return 0; // destrutor ifstream fecha o arquivo
}

// exibe um registro do arquivo
void exibeDados( int numConta, const string nomeCliente, double saldoCliente )
{
    cout << numConta << "\t" << nomeCliente << "\t" << saldoCliente << endl;
}
