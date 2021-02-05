/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. 
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	int idademeses, idademeses2, idadedias, idadeanos, idadexdias
	
	//ENTRADA DE DADOS
	cout<<"\n\nDigite sua idade em anos: ";
	cin>>idadeanos;
	cout<<"\n\nDigite sua idade em meses: ";
	cin>>idademeses;
	cout>>"\n\nDigite sua idade em dias: ";
	cin>>idadedias;
	
	//PROCESSAMENTO
	idademeses2 = (idadeanos * 12) + idademeses;	
	idadexdias = (idademeses2 + idadedias) * 365;
	
	//SAIDA DE DADOS
	cout<<"\nA sua idade expressa em dias é: "<< idadexdias<<endl;
}
