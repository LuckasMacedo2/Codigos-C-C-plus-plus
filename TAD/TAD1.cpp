//
//  registroTADPrimeiroExemplo.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//
//
//  Implementa um TAD utilizando Struct com todas as Estruturas de Dados e todas
//  as Estruturas de Controle Públicas
//
//
#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(){
    setlocale(LC_ALL,"");
    int opcao;
        
    struct {
        int dia;
        string nomesDia[7];
        // Como  o  número  de  elementos  do  vetor  pode  ser  inferido
        // a  partir  da  lista  entre  chaves, podemos omitir o tamanho do vetor:
        // string nomesDia[7]={"Dom","Seg","Ter","Qua","Qui","Sex","Sab"};
        void inicializa(){	//construtor
            nomesDia[0]="Dom";
            nomesDia[1]="Seg";
            nomesDia[2]="Ter";
            nomesDia[3]="Qua";
            nomesDia[4]="Qui";
            nomesDia[5]="Sex";
            nomesDia[6]="Sab";
        }
        string sucessor(){
            return nomesDia[dia+1];	//ERRO no sábado
        }
        string predecessor(){
            return nomesDia[dia-1]; //ERRO no domingo
        }
    } diaSemana;

    // Inicializa o vetor de nomes de dias da semana
    diaSemana.inicializa();
    
    // Exibe Menu, calcula e exibe dados de saída
    std::cout<<"Informe um dia da semana( ):\b\b\b";
    std::cin>>diaSemana.dia;
    
    cout<<"(0) para finalizar\n";
    cout<<"(1) para saber o dia da semana\n";
    cout<<"(2) para saber o dia anterior\n";
    cout<<"(3) para saber o dia posterior\n";
    cout<<"Selecione a opção desejada( ):\b\b\b";
    cin>>opcao;
    while ( opcao!=0 ){
        // Esta sequência de Estruturas Condicionais Simples pode ser
        // transformada em um Estrutura de Seleção Múltipla
        if( opcao==1 )
            cout<<diaSemana.nomesDia[diaSemana.dia]<<endl;
        if( opcao==2 )
            cout<<diaSemana.predecessor()<<endl;
        if( opcao==3 )
            cout<<diaSemana.sucessor()<<endl;
          
        cout<<"Selecione a opção desejada( ):\b\b\b";
        cin>>opcao;
    }

}
