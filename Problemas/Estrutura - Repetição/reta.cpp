/*
Fazer um algoritmo que, lendo em uma unidade de entrada os parâmetros A e B de uma reta no plano dado pela equação
Y = AX + B determina a área do triângulo formado por esta reta e os eixos coordenados.
O algoritmo lerá um número indeterminado de linhas, cada linha contendo um par de parâmetros (A, B), e para cada par lido
deverá escrever: os parâmetros A e B e a área do triângulo.
A execução do algoritmo deverá terminar quando ler uma linha com um par de zeros.
Observação: Se, em uma linha (à exceção da última), um dos parâmetros for igual a zero, não haverá triângulo - assim, o programa
deverá imprimir A, B e 0 (zero).
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
	float a, b, area;
	
	do
	{
		cout<<"\nInforme o parametro A: ";
		cin>>a;
		cout<<"\nInforme o parametro B: ";
		cin>>b;
		
		
		if ((a!=0)||(b!=0))
		{
			if (a==0 || b==0)
			{
				cout<<"\nNão existe triângulo!."<<endl;
			}
			else
			{
				area = (((-b)/a)*b)/2;
				cout<<"nA area do triangulo no plano com parametros ("<<a<<" , "<<b<<") = "<<area<<endl;
			}
		}
		
		
		
		
	}while ((a!=0)||(b!=0));
	
	
	
	
}
