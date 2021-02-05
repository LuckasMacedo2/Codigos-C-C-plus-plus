/*
Escrever um algoritmo que leia a taxa de potência de um refrigerador, o tempo que permaneceu ligado e o valor do quilowatt
hora, e que, calcule e escreva a energia total gasta pelo refrigerador, bem como, o valor a ser pago à companhia de Energia Elétrica
*/

#include<iostream>
using namespace std;
main()	
{
	//DECLARAÇÃO DE VARIAVEIS
	
	float valorwhatt, valorapagar, tempoon, pot, totalKw;
	
	//ENTRADA DE DADOS
	cout<<"\nDigite o tempo em horas  em que o refrigerador permaneceu ligado: ";
	cin>>tempoon;
	cout<<"\nDigite a potência do refrigerador: ";
	cin>>pot;
	cout<<"\nDigite o valor de quilowhatt hora da cidade: ";
	cin>>valorwhatt;
	
	//PROCESSAMENTO
	valorapagar = (pot/1000) * tempoon * valorwhatt;
	totalKw = (pot/1000)*tempoon;
	
	//RESULTADO
	cout<<"\nO valor a ser pago de energia eletrica é:R$  "<<valorapagar;
	cout<<" reais."<<endl;
	cout<<"\n\nO total de energia gasta é de: "<<totalKw;
	cout<<" Kw/H."<<endl<<endl;
}
