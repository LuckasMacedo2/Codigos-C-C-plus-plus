/*
Fazer um algoritmo que calcule e escreva a seguinte soma:
S = (37 * 38) / 1 + (36*37)/2 + ... + (1*2)/37
*/

#include<iostream>
using namespace std;
main()
{
	double soma, max;
		
	max = 38;
	soma = 0;
		
	do
	{
		soma = soma + (max*(max-1)/(39-max));	
		cout<<"\nO valor de S= "<<soma<<endl;	
		max--;
	}while (max>=1);
}