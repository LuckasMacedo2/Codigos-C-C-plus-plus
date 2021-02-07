/*Fazer um algoritmo que leia uma matriz inteira de ordem 3. Determinar
se esta matriz é identidade.*/

#include <iostream>
using namespace std;
#include <iostream>
#define tL 3
#define tC 3
using namespace std;
main ()
{
	int a[tL][tC], i, j, cont1, cont;
	cont=0;
	cont1=0;

	for (i=0; i<tL; i++)
	{
		for (j=0; j<tC; j++)
		{
			cout<<"\nInforme o valor para a matriz A na posição ["<<i<<"] ["<<j<<"]"<<endl;
			cin>>a[i][j];
			if (i==j)
			{
				if (a[i][j]==1)
				{
					cont++;	
				}
			}
			else
			{
				if (a[i][j]==0)
				{
					cont1++;
				}
			}
		}
	}
	
	
	if ((cont==3)&&(cont1==6))
	{
		cout<<"\nA Matriz informada é Identidade.";
	}
	else
	{
		cout<<"\nA Matriz informada não é Identidade.";
	}
}
