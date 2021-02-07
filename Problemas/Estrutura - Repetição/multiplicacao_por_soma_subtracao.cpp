/*Fazer um algoritmo que calcule e escreva a multiplicação de dois números N1 e N2 lidos do teclado. Obs.: a máquina que ira
executar este algoritmo somente sabe: adicionar e subtrair.*/

#include<iostream>
using namespace std;
main()
{
	int n1, n2, n;
	float soma;
soma=0 ;
	
	cout<<"\nDigite o primeiro número: ";
	cin>>n1;
	
	cout<<"\nDigite o segundo número: ";
	cin>>n2;
	
	for(n=1; n<=n2; n++)
	{
		soma = soma+n1;
		cout<<"\nSoma= "<<soma<<endl;
		if (n==n2)
		{
		cout<<"\n "<<n1<<"*"<<n2<<"="<<soma<<endl;
		}
	}	
}
