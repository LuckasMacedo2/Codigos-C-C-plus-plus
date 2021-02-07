/*Fazer um algoritmo que leia duas matrizes A e B de ordem 3. Calcular
e escrever a matriz resultante da adição de A com B*/
#include <iostream>
#define tL 3
#define tC 3
using namespace std;
main ()
{
	int a[tL][tC], b[tL][tC], c[tL][tC], soma, i, l, j, k, aux;
	aux = 1;
	l=0;
	k=0;
	for (i=0; i<tL; i++)
	{
		for (j=0; j<tC; j++)
		{
			cout<<"\nInforme o valor para a matriz A na posição [ "<<i<<"] ["<<j<<"]"<<endl;
			cin>>a[i][j];
			cout<<"\nInforme o valor para a matriz B na posição [ "<<i<<"] ["<<j<<"]"<<endl;
			cin>>b[i][j];
		}
	}
	
	
	for (i=0, l=0; i<tL;l++, i++)
	{
		for (j=0, k=0; j<tC; j++, k++)
		{
			c[l][k]=(a[i][j]+b[i][j]);
		}
	}
	
	for (l=0; l<tL; l++)
	{
		for (k=0; k<tC; k++)
		{
			cout<<"\nC ["<<l<<"] ["<<k<<"] "<<c[l][k];
			
		}	
	}
}
