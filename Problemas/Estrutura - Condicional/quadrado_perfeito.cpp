/*
Números quadrados perfeitos são aqueles cuja raiz quadrada é um número inteiro. Exemplo 144. Fazer um algoritmo que dado
um número inteiro positivo, calcule e escreva se este é ou não quadrado perfeito.

*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n, n1;
	
	cout<<"\nDigite um numero inteiro e positivo: ";
	cin>>n;
	
	n1 = sqrt(n);
	
	if ( n1*n1 / n == 1)
	{
		cout<<"\nO numero e quadrado perfeito"<<endl;
	}
	else
	{
		cout<<"\nO numero nao e quadrado perfeito"<<endl;
	}
	
}
