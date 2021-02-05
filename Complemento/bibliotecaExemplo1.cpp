//
//  bibliotecaExemplo1.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//
//
//  Cria uma biblioteca (somente de um arquivo) com extens�o ".h"
//  utilizando o exemplo TAD dia da semana
//  Facilita o reuso de c�digo fonte
//
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "semana1.h" /* inclui o c�digo da biblioteca criada, 
                        a qual foi postada no mesmo diret�rio
                        (pasta atual) deste programa-fonte */

int main(){
    setlocale(LC_ALL,"");
    int diaAProcessar,opcao;
        
    tipoDiaSemana diaSemana;

    // Inicializa o vetor de nomes de dias da semana
    diaSemana.inicializa();
    
    // Exibe Menu, calcula e exibe dados de sa�da
    std::cout<<"Informe um dia da semana( ):\b\b\b";
    std::cin>>diaAProcessar;
    diaSemana.inicializaDiaAProcessar(diaAProcessar);

    cout<<"(0) para finalizar\n";
    cout<<"(1) para saber o dia da semana\n";
    cout<<"(2) para saber o dia anterior\n";
    cout<<"(3) para saber o dia posterior\n";
    cout<<"Selecione a op��o desejada( ):\b\b\b";
    cin>>opcao;
    while ( opcao!=0 ){
        // Esta sequ�ncia de Estruturas Condicionais Simples pode ser
        // transformada em um Estrutura de Sele��o M�ltipla
        if( opcao==1 )
            cout<<diaSemana.atual()<<endl;
        if( opcao==2 )
            cout<<diaSemana.predecessor()<<endl;
        if( opcao==3 )
            cout<<diaSemana.sucessor()<<endl;
          
        cout<<"Selecione a op��o desejada( ):\b\b\b";
        cin>>opcao;
    }

}
