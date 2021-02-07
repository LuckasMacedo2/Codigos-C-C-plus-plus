/*Fazer um algoritmo que leia um número indeterminado de linhas contendo cada uma três números inteiros positivos. Calcule e
escreva para estes três números o máximo divisor comum*/

#include <iostream>
using namespace std;
main()
{
	int n1, n2, n3, x, y, z;
	
	cout<<"\nDigite os três números respectivamente, em ordem crescente: ";
	cin>>n1>>n2>>n3;
	
	for (x=2; x<=n1; x++)
	{
		if ((n1%x==0)&&(n2%x==0)%(n3%x==0))
		{
			cout<<"\nMDC "<<x<<endl;
		}
	}	
}
