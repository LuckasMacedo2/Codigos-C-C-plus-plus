/*
Fazer um algoritmo que leia um número base 8, calcule e escreva seu equivalente na base 10.
*/

#include<iostream>
#include<math.h>
using namespace std;
main()	
{
	setlocale(LC_ALL,"");
	
	int n, resul, aux, casa;
	char opc;
	
	do
	{
		do
		{
			cout<<"\nDigite o Número: ";
			cin>>n;
		}while (n<0);
		aux = n;
		
		for (resul=0, casa=0; n>0; n=n/10, casa++)
		{
			resul=resul+((n%10)*(pow(8,casa)));
		}
		cout<<"\nO número em Octal "<<aux<<" em Decimal é: "<<resul<<endl;
		
		cout<<"\nDeseja executar novamente? (C) para continuar, (S) para sair: ";
		cin>>opc;
		cin.ignore(); 
		opc=toupper (opc);
		system("cls");
	}while (!(opc== ‘S’) && opc== ‘C’);
}
