/*
Dada a base e a altura de uma pirâmide, fazer um algoritmo que calcule e escreva o seu volume.
*/

#include<iostream>
using namespace std;
main()
{
	//VARIAVEIS
	float volume,  base, altura;
	
	//ENTRADA DOS DADOS
	cout<<"\nInforme a base da piramede: ";
	cin>>base;
	
	cout<<"\nInforme a altura da piramede: ";
	cin>>altura;
	//PROCESSAMENTO
	volume = 1/3 * base * altura;
	
	//SAIDA
	cout<<"\nO volume da piramede é: "<< volume<<endl;
}
