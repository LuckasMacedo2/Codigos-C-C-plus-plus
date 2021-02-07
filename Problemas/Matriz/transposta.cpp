/*Fazer um algoritmo que leia uma matriz A3x2 ,calcule e escreva a
matriz transposta de At*/

#include <iostream>
#define tL 3
#define tC 2
using namespace std;
main ()
{
	int A[tL][tC], i, j;
	
	for (i=0; i<tL; i++)
	{
		for (j=0; j<tC; j++)
		{
			cout<<"\nInforme o valor para a matriz A na posição [ "<<i<<"] ["<<j<<"]"<<endl;
			cin>>A[i][j];
		}
	}
	
	for (i=0; i<tC; i++)
	{
		for (j=0; j<tL; j++)
		{
			cout<<"\n "<<"A["<<j<<"]["<<i<<"]"<<A[j][i];
		}
	}
	
}
