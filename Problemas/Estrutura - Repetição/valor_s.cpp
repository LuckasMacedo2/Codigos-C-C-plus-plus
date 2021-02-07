/*
Fazer um algoritmo que calcule e escreva o valor de S
S = 1/1 + 3/2 + 5/3 + 99/50
*/

#include<iostream>
using namespace std;
main()
{
	float d, n, soma;
	for (d=1, n=1; n<=50; d=d+2, n=n+1)
	{
		soma = soma + (d/n);
		cout<<"\n "<<d;
		cout<<" \ "<<n;
		cout<<" e o resultado = "<<soma<<endl;
	}	
}
