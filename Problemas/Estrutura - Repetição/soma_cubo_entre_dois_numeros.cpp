/*Fazer um algoritmo para calcular e escrever a soma dos cubos dos números pares compreendidos entre B e A. Suponha que os
valores de B e A (B > A) são dados em uma linha.*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a, b, maior, menor, cubo;
	
	cout<<"\nDigite os valores de A e B, respectivamente: ";
	cin>>a>>b;
	
	if (a>b)
	{
		maior = a;
		menor = b;
	}
	else
	{
		maior = b;
		menor = a;
	}
	
	for ( ;menor<=maior;menor++)
	{
		if ((menor%2)==0)
		{
			cubo=pow(menor,3);
			cout<<"\n "<<menor<<"^3 = "<<cubo;
		}	
		
	}	
}
