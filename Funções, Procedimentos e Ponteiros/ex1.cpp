/*Faça um programa em C++, que leia através de um procedimento todos os
elementos de um vetor inteiro com 10 posições. O procedimento deve receber 
como parametros formais o vetor e o tamanho do mesmo. Ao final, o programa
deve imprimir os elementos do vetor para simples conferência.*/

#include <iostream>
using namespace std;


void vetor (int *vet, int tam)
{
	int pos;
	cout<<"\nInforme os "<<tam<<" elementos do vetor ";
	for (pos=0; pos<tam; pos++)
	{
		cout<<"\nVetor["<<pos<<"]= ";
		cin>>vet[pos];
	}
}

int main ()
{
	const int dim=10; //Dimensão do vetor.
	int vetX[dim], pos;
	vetor(vetX, dim);
	
	//Impressão do Resultado
	
	cout<<"\n\nO vetor lido \n";
	
	for (pos=0; pos<dim; pos++)
	{
		cout<<"\nvetX["<<pos<<"]= "<<vetX[pos];
	}
	cout<<"\n";
}
