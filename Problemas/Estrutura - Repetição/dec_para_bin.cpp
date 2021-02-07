/*
Fazer um algoritmo que leia um número inteiro positivo na base 10, calcule e escreva seu equivalente na base 2.
*/

#include<iostream>
using namespace std;
main()	
{
	setlocale(LC_ALL,"");
	
	int n, resul, aux, casa;
	string opc;
	
	do
	{
		resul=0;
 		casa=1;

		do
		{
			cout<<"\nDigite o Número: ";
			cin>>n;
		}while (n<0);
		
		for (aux=n; aux>0; aux=aux/2)
		{
			resul=resul+((aux%2)*casa);
			casa=casa*10;
		}
		cout<<"\nO número "<<n<<" em Binário é: "<<resul<<endl;
		
		cout<<"\nDeseja executar novamente? (C) para continuar, (S) para sair: ";
		cin>>opc;
		
		system("cls");
	}while (!(opc=="S") && opc=="C");
}
