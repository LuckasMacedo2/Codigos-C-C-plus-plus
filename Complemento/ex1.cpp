#include <iostream>
using namespace std;
int main ()
{
	int a1, a2, a3, a4, aux;
	
	cout<<"Informe os valores inteiros separados por <espaço> ou <enter>: ";
	cin>>a1>>a2>>a3>>a4;
	if (a1>a2)
	{
		aux=a1;
		a1=a2;
		a2=aux;
	}
	if (a2>a3)
	{
		aux=a2;
		a2=a3;
		a3=aux;
	}	
	if (a3>a4)
	{
		aux=a3;
		a3=a4;
		a4=aux;
	}
	if (a1>a2)
	{
		aux=a1;
		a1=a2;
		a2=aux;
	}
	if (a2>a3)
	{
		aux=a2;
		a2=a3;
		a3=aux;
	}	
	if (a1>a2)
	{
		aux=a1;
		a1=a2;
		a2=aux;
	}
	cout<<"Valores ordenados: "<<a1<<" , "<<a2<<" , "<<a3<<" , "<<a4;

}





