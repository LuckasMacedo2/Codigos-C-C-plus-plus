//
//  createArquivos.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//  Adapted from Deitel, 2006
//
//
// Cria um arquivo sequencial
// Testar com os dados abaixo:
// 100 Jones 24.98
// 200 Doe   45.67
// 300 White 0,00
// 400 Stone -42.16
// 500 Rich  224.62
//
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;		//Comando de Entrada e Saída

#include <fstream>		//Fluxo de dados de entrada e saida
using std::ofstream;	

#include <cstdlib>
using std::exit;

int main()
{
    int numConta;
    char nomeCliente[ 30 ];
    double saldoCliente;
    
    // construtor ofstream abre arquivo
    ofstream cadastroDeClientes( "clientes.dat",  ios::out );		//out Arquivo para saida de dados, criado como se fosse novo.
																	// "clientes.dat" nome do arquivo, pode-se definir o diretorio a ser salvo.
    
    // fecha o programa se não conseguir criar arquivo
    if ( !cadastroDeClientes ) // operador ! sobrecarregado
    {
        cerr << "Erro na abetura do arquivo\n" << endl;	//cerr Dá a mensagem de erro.
        exit( 1 );	//Termina o programa
    }
    
    cout << "Informe o número da conta. Digite um número menor que 1 para finalizar: ";
    cin  >> numConta;
    
    // Obtenção dos dados dos Clientes e gravação no arquivo
    while (numConta > 0)
    {
        cout << "Informe o nome do cliente: ";

        cin  >> nomeCliente;
        cout << "Infome o saldo do cliente: ";
        cin  >> saldoCliente;
        cadastroDeClientes << numConta << ' ' << nomeCliente << ' ' << saldoCliente << endl;	//Armazena os dados no arquivo.
        cout << "Informe o número da conta. Digite um número menor que 1 para finalizar: ";
        cin  >> numConta;
    }
    
    return 0; // destrutor ofstream fecha o arquivo
}
