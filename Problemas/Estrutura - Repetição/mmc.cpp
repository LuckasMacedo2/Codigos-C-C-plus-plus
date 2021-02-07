/*
Fazer um algoritmo que:
Leia dois números inteiros positivos (N1, N2);
Calcule e escreva para este par de números (N1, N2), o mínimo múltiplo comum
*/

#include <iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"");
	
	char opc;
	int n1, n2, mmc, i;
	i=2;
	mmc=1;
	
	do
	{
		do
		{
			cout<<"\n Digite um número inteiro e positivo: ";
			cin>>n1;
		}while(n1<0);
		
		do
		{
			cout<<"\nDigite um número inteiro e positivo: ";
			cin>>n2;
		}while(n2<0);
		
		while (!(n1==1 && n2 ==1))
		{
			if ((n1%i == 0)|| (n2%i==0))
			{
				if (n1%i==0)
				{
					n1 = n1/i;
					
				}
				if (n2%i==0)
				{
						n2 = n2/i;
				}
				mmc = mmc*i;
			}
			else
			{
				i=i+1;
			}
		}
		cout<<"\nMMC é "<<mmc<<endl;
		cout<<"\nDeseja calcular o MMC novamente, aperte qualquer tecla para continuar ou S para sair ";
		cin>>opc;
		cin.ignore(); 
		opc=toupper (opc);

	}while(opc!= ‘S’);
		
	}
