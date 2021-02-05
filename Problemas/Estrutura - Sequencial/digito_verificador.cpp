/*
Criar um algoritmo que, dado o número da conta corrente com três dígitos, retorne o dígito verificador
*/

#include<iostream>
using namespace std;
main()
{
	int x1, x2, x3,numeroconta, ncinv, dv;

	cout<<"\nEscreva o numero da conta: ";
	cin>>numeroconta;

	x1 = numeroconta / 100;
	x2 = (numeroconta % 100) / 10;
	x3 = (numeroconta % 100) % 10;

	ncinv = (x1 + x3)*3 + (x2 + x2)*2 + (x1 + x3);
	dv = ncinv % 10;
	cout<<"\nO codigo verficador da sua conta e: "<< dv<<endl;
}
