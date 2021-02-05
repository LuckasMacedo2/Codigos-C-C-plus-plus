#include <iostream>
#include <cmath>
#define pi 3.14159265
using namespace std;

//f(x)=2sen(x)+cos(x)
int integracao (int inferior, int superior, int num)
{
	int x;
	float  integral, dx;


	dx = (superior-inferior)/num;
	cout<<"\n DX "<<dx;

	for (x=1; x<=num; x++)	
	{
		integral = integral + (2*(sin((inferior+(x*dx))*pi/180))*dx)+((cos((inferior+(x*dx))*pi/180))*dx);
	}
	cout<<"\nIntegral "<<integral;
	return integral;
}



int main ()
{
	setlocale (LC_ALL,"portuguese");
	
	double resul, limInf, limSup, num;
	
	cout<<"\nDigite o limite inferior do intervalo de Integração: ";
	cin>>limInf;
	cout<<"\nDigite o limite superior do intervalo de Integração: ";
	cin>>limSup;
	cout<<"\nDigite o número de subdivisões do mesmo: ";
	cin>>num;
	//integracao(limInf, limSup, num);
	
	resul=integracao(limInf, limSup, num);
	
	cout<<"\nA integral no intervalo ["<<limInf<<','<<limSup<<"] é = "<<resul;
	
	
}

