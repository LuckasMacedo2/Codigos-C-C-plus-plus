/* Fazer um programa em C++, que leia o tamanho de um vetor, aloque um 
espaço para o mesmo e leia seus elementos (inteiros) via teclaso, e a seguir
criar outro vetor do mesmo tamanho e colocar em cada posição de índice par,
o dobro do valor do elemento de mesma posição do 1º vetor, em cada posição 
de indice ímpar, o triplo do valor de mesma posição do 1º vetor.
*/
//alocacaoMeoria.cpp
#include <iostream>
using namespace std;

int main ()
{
	int tam, indice, *vet1, *vet2;
	
	cout<<"\nTamanho do vetor? ";
	cin>>tam;
	
	vet1 = new int [tam];
	vet2 = new int [tam];
	
	cout<<"\nDigite os "<<tam<<" valores do vetor:\n ";
	for (indice = 0; indice < tam; indice ++)
	{
		cout<<"\nvet1["<<indice<<"] = ";
		cin>>vet1[indice];
	}
	
	//Cálculo do 2º vetor
	
	for (indice=0; indice<tam; indice ++)
	{
		if (indice%2==0)
		{
			vet2[indice] = 2*vet1[indice];
		}
		else
		{
			vet2[indice] = 3*vet1[indice];
		}
	}
	
	//Resultado
	
	cout<<"\nVetor Reasultante: ";
	for (indice = 0; indice < tam; indice ++)
	{
		cout<<vet2[indice]<<" ";
		cout<<endl;
	}
	
	
	
	
	
	
	
	
}
