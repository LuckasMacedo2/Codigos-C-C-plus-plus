/*Fazer um algoritmo que leia uma matriz inteira de ordem 3 e verifique
se a soma dos elementos das diagonais são iguais.*/

#include <iostream>
#define tL 3
#define tC 3
using namespace std;
main ()
{
	int a[tL][tC], somai, somaj, i, j;
	
	for (i=0; i<tL; i++)
	{
		for (j=0; j<tC; j++)
		{
			cout<<"\nInforme o valor para a matriz A na posição [ "<<i<<"] ["<<j<<"]"<<endl;
			cin>>a[i][j];
		}
	}

	somai = a[0][0] + a[1][1] + a[2][2];
	somaj = a[0][2] + a[1][1] + a [2][0];
	
	if (somai==somaj)
	{
		cout<<"\nA soma das duas Diagonais são iguais"<<endl;
	}
	else
	{
		cout<<"\nA somna das duas diagionais são diferentes"<<endl;
	}
}
