/*
Fazer um algoritmo que dado 4 notas de provas, a b, c, e d calcule e escreva o valor das seguintes médias:
	- Aritmética
	- Harmônica
	- Geometrica
	- Quadratica
*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float n1, n2, n3, n4, mda, mdgeo, mdhar, mdqua;
	
	cout<<"\nDigite a primeira nota do aluno: ";
	cin>>n1;
	
	cout<<"\nDigite a segunda nota do aluno: ";
	cin>>n2;
	
	cout<<"\nDigite a terceira nota do aluno: ";
	cin>>n3;
	
	cout<<"\nDigite a quarta nota do aluno: ";
	cin>>n4;
	
	mda = (n1 + n2 + n3 + n4) / 4;
	mdhar = 4 / ((1/n1) + (1/n2) + (1/n3) + (1/n4));
	mdgeo = pow(n1 * n2 * n3 * n4, 1 / 4);
	mdqua = sqrt ((pow(n1, 2)) + (pow(n2, 2)) + (pow(n3, 2))+ (pow(n4, 2)))/4;
	
	cout<<"\nO valor da media aritmetica do aluno e de: "<< mda<<endl;
	cout<<"\nO valor da media geometrica do aluno e de: "<< mdgeo<<endl;
	cout<<"\nO valor da media harmonica do aluno e de: "<< mdhar<<endl;
	cout<<"\nO valor da media quadratica do aluno e de: "<< mdqua<<endl;
}
