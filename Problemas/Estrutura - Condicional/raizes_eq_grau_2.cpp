/*
Desenvolver um algoritmo que leia os coeficientes (A,B e C) de uma equação do segundo grau ( Ax 2
 + Bx + C =0) e que calcule
suas raízes. O algoritmo deve mostrar, quando possível, o valor das raízes calculadas e a classificação das mesmas: “RAÍZES
IMAGINÁRIAS”, “RAIZ ÚNICA” ou “RAÍZES DISTINTAS”.
*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float n, a, b, c, x1, x2, delta;

	cout<<"\nInforme os coeficientes de a, b e c, respectivamente: ";	
	cin>>a>>b>>c;

	delta = sqrt((b*b)-(4*a*c));
	x1 = ((-b) + delta) / (2*a);
	x2 = ((-b) - delta) / (2*a);

	cout<<"\nA primeira raiz é: "<<x1<<endl;
	cout<<"\nA segunda raiz é: "<<x2<<endl;

	if (b*b<4*a*c)
	{
		cout<<"\nRaizes Imaginarias"<<endl;
	}

	else if (delta == 0)
	{
		cout<<"\nRaizes iguais "<<x1<<endl;

	}
	else if (delta > 0)
	{
		cout<<"\nRaizes distintas "<<x1<<" e "<<x2<<endl;
	}


}
