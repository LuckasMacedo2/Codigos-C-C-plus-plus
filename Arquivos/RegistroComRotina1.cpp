
//  arquivosRegistroComRotina.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//  Adapted from Deitel, 2006
//
//
//  Implementa uma Rotina interna em um tipo Struct.
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


int main()
{
    struct {	//Os dados são publicos, ou seja, tenho acesso e atribuição de valores, bem como o procedimento de controle.
        int numConta;
        char nomeCliente[ 30 ];
        double saldoCliente;
        // exibe dados do registro: declaração interna
        void exibeDados()
        {
            cout << left << setw(10) << numConta << setw(13) << nomeCliente << right << setw(7) << setprecision(2) << fixed << saldoCliente << endl;
        }
    } registro;
    
    // construtor ifstream abre o arquivo
    ifstream cadastro_clientes( "clientes.dat", ios::in );
    
    // fecha o programa se ifstream não pode abrir o arquivo
    if ( !cadastro_clientes )
    {
        cerr << "Erro na abertura do arquivo\n" << endl;
        exit( 1 );
    }

    cout << "Conta" << "\t"
         << "Nome" << "\t"
            "Saldo" << endl;
            
    // exibe cada registro no arquivo
    cadastro_clientes >> registro.numConta; // Acesso direto ao dado, pois o mesmo é público
    while ( !cadastro_clientes.eof() )
    {
        cadastro_clientes >> registro.nomeCliente >> registro.saldoCliente; // Acesso direto aos dados, pois os mesmos são públicos
        registro.exibeDados(); // Acesso direto ao procedimento que também é público
        cadastro_clientes >> registro.numConta;
    }

    cadastro_clientes.close();
// VEJAM QUE NO PROGRAMA TOMAMOS O CUIDADO DE FECHAR O ARQUIVO
    return 0; // destrutor ifstream fecha o arquivo

}
