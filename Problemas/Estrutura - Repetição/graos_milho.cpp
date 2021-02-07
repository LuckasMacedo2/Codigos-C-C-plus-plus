/*Fazer um algoritmo que calcule e escreva o número de grãos de milho que se pode colocar num tabuleiro de xadrez, colocando
1 no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. São 64 quadros no total, a fórmula é somatorio de 0 a 63 de 2^n*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double n, casa, total;
	
	for(casa=1, n=0; casa<=64; casa++, n++)
	{
		total = pow(2,n);
		cout<<"\nNa casa "<<casa<<" Qnt de milho: "<<total<<endl;
	}	
}
