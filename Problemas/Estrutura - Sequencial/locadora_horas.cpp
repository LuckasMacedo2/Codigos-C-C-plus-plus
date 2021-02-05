/*
Uma locadora de charretes cobra R$8,50 de taxa para cada 3 horas de uso destas e R$3,50 para cada hora abaixo destas 3 horas.
Fazer um algoritmo que, dado a quantidade de horas que a charrete foi usada, calcule e escreva quanto o cliente tem de pagar.
*/

#include<iostream>
using namespace std;
main()
{
	int taxa1, taxa2, hora; 
	float total;

	cout<<"\nInforme a quantidade de horas que a charrete foi alugada: ";
	cin>>hora;

	taxa1 = (hora/3)*8.5;
	taxa2 = (hora%3)*3.5;
	total = taxa1+taxa2;

	cout<<"\n\nO total a ser pago pelo aluguel da charrete e de: "<<total<<endl<<endl;
}
