/*

Fazer um algoritmo que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
100/1 + 997/2 + 994/3 + 991/4 + ...
*/

#include<iostream>
using namespace std;
main()
{
	float soma, d, n, sinal;
	
	for (d=1000, n=1, sinal=-1; n<=50; d=d-3, n++)
	{
		sinal = sinal*(-1);
		soma = soma + ((d/n)*sinal);
		cout<<"\n "<<d<<" dividido por  "<<n<<"="<<soma<<endl;
	}	
}
