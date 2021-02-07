/*
Escrever um algoritmo para gerar e escrever uma tabela com os valores do seno de um ângulo A em radianos, utilizando a
série de Mac-Laurin truncada, apresentada a seguir:
SenA = A - (A^3)/6 + (A^5)/120 - (A^7)/5040
Condições: os valores dos ângulos A devem variar de 0,0 a 6,3, inclusive de 0,1 em 0,1.
*/

#include<iostream>

#include<math.h>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	double a, i, seno, fat, sinal, j;
	
	//PROCESSAMENTO DE DADOS
	for (a=0; a<=6.3; a=a+0.1)
	{
		for(i=1, sinal=-1, seno=0; i<=100; i+=2)
		{
			sinal=sinal*(-1);
			for(j=1,fat=1; j<=i; j++)
			{
				fat=fat*j;
			}
				seno = seno + (pow(a,i)/fat)*sinal;
		
		}
			cout<<"\nSeno("<<a<<")="<<seno<<endl;
	}	
}
