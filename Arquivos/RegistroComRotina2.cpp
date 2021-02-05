//
//  arquivosRegistroComRotinaExterna.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//  Adapted from Deitel, 2006
//
//
//  Implementa uma Rotina externa em um tipo Struct.
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

struct tipoCliente{	//Tipo global
    int numConta;
    char nomeCliente[ 30 ];
    double saldoCliente;
    // exibe dados do registro: declaração externa
    void exibeDados();
};

int main()
{
    tipoCliente registro;
    // construtor ifstream abre o arquivo
    ifstream cadastro_clientes( "clientes.dat", ios::in );
    
    // fecha o programa se ifstream nÃ£o pÃ´de abrir o arquivo
    if ( !cadastro_clientes )
    {
        cerr << "Erro na abertura do arquivo\n" << endl;
        exit( 1 );
        system("pause");
    }
    
    cout << "Conta" << "\t"
         << "Nome" << "\t"
            "Saldo" << endl;
            
    // exibe cada registro no arquivo
    cadastro_clientes >> registro.numConta;
    while ( !cadastro_clientes.eof() )
    {
        cadastro_clientes >> registro.nomeCliente >> registro.saldoCliente;
        registro.exibeDados();
        cadastro_clientes >> registro.numConta;
    }

    cadastro_clientes.close();
// VEJAM QUE NO PROGRAMA TOMAMOS O CUIDADO DE FECHAR O ARQUIVO
    return 0; // destrutor ifstream fecha o arquivo

}
void tipoCliente::exibeDados()
//Repare que para definirmos fora o procedimento recorremos ao operador escopo ::
{
    cout << left << setw(10) << numConta << setw(13) << nomeCliente << right << setw(7) << setprecision(2) << fixed << saldoCliente << endl;
}

