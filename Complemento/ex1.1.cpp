#include <iostream> 
using namespace std;
const int tam =5;
int main ()
{
	int a[tam], aux, i, j;
	cout<<"\nDigite os "<<tam<<" valores inteiros ";
	for (i=0; i<tam; i++)
	{
		cout<<i+1<<"º valor: ";
		cin>>a[i];
	}
	//ordenação
	for (j=tam-1; j>0; j--)
	{
		for (i=0; i<j; i++)
		{
			if (a[i]>a[i+1])
			{
				aux=a[i];
				a[i]=a[i+1];
				a[i+1]=aux;
			}
		}		
	}
	cout<<"\nValores Ordenados ";
	for (i=0; i<tam; i++)
	{
		cout<<a[i]<<", ";
	}
	cout<<"\b\b.\n"; // \b=backspace, volta o cursor
}
