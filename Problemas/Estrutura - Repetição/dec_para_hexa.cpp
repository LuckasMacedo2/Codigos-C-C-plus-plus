/*
Fazer um algoritmo que leia um número inteiro positivo na base 10, calcule e escreva seu equivalente na base 16.
*/

#include <iostream>
using namespace std;
main()
{
	setlocale(LC_ALL," ");
	int n, resul, aux, casa, c;
	do
{
		cout<<"\nDigite um número inteiro e decimal ";
		cin>>n;
	} while (n<0);
	resul = 0
	aux=n;
	
	
	for (aux=n; aux>0; aux=aux/16)
	{
		
		resul = resul+(aux/16);
		
		
		if (resul>=10)
		{
			if (resul==10)
			{
				cout<<"A";
				resul = resul - 10;
			}
			if (resul==11)
			{
				cout<<"B";
				resul = resul -11;
			}
			if (resul== 12)
			{
				cout<<"C";
				resul = resul -12;
			}
			if (resul== 13)
			{
				cout<<"D";
				resul = resul -13;
			}
			if (resul== 14)
			{
				cout<<"E";
				resul = resul -14;
			}
			if (resul== 15)
			{
				cout<<"F";
				resul = resul -15;
			}
		}
		cout<<" "<<resul;

	}	
}
