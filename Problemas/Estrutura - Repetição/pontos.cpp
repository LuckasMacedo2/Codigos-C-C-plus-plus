/*As coordenadas de um ponto (x1 , y1) estão disponíveis em uma unidade de entrada. Ler esses valores (até quando um flag
ocorrer) e escrever “INTERIOR” se o ponto estiver dentro da região entre as retas mostrada abaixo, caso contrário, escrever
“EXTERIOR”.*/

#include <iostream>
using namespace std;
main ()
{
	float x, y, opc;
	
	do
	{
		cout<<"\nDigite o valor de X: ";
		cin>>x;
		cout<<"\nDigite o valor de y: ";
		cin>>y;
		
		if ((y==(3*x))||(y==((1/3)*x))||(x==0))
		{
			cout<<"\nPonto situado no INTERIOR das retas determinadas.";
		}
		else
		{
			cout<<"\nPonto situado no EXTERIOR das retas determinadas.";
		}
		
		
		
		cout<<"\nDigite qualquer número para repetir ou 0 para sair."<<endl;
		cin>>opc;
	}while (opc!=0);	
}
