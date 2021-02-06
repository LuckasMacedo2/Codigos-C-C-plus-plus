/*
Fazer um algoritmo que dado os lados de um triângulo A, B e C. Dizer se os lados dados formam um triângulo: retângulo
(A^2=B^2+C^2), obtusângulo (A^2>B^2+C^2) ou acutângulo (A^2<B^2+C^2).
*/

#include<iostream>
using namespace std;
main()
{
	float a, b, c;
	
	cout<<"\n\nDigite os tres lados do triangulo, sucessivamente: ";
	cin>>a>>b>>c;
	
	if (a*a == b*b + c*c)
	{
		cout<<"\nO Triangulo e retangulo"<<endl;
	}
	else if (a*a< b*b + c*c)
	{
		cout<<"\nO Triangulo e acutangulo"<<endl;
	}
	else if (a*a>b*b + c*c)
	{
		cout<<"\nO Triangulo e abtusangulo"<<endl;
	}
	
	
}

