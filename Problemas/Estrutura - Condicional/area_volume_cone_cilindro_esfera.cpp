/*
Desenvolver um algoritmo com as opções de calcular e imprimir o volume e a área da superfície de um cone reto, de um cilindro
ou de uma esfera. O algoritmo deverá ler a opção da figura desejada (cone/cilindro /esfera) e de acordo com a opção escolhida calcular e
escrever o volume e a área da superfície da figura pedida.
*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int tipo;
	float raio, altura, vcr, acr, vc, ac, ve, ae;
	float const pi = 3.1415;
	
	cout<<"\nDigite, 1 para cone reto, 2 para cilindro ou 3 para esfera: ";
	cin>>tipo;
	if (tipo <0 || tipo >3)
	{
		cout<<"\nDigite uma opção correta!";
	}
	
	else
	{
	cout<<"\nDigite o raio da figura: ";
	cin>>raio;
	cout<<"\nDigite a altura da figura: ";
	cin>>altura;
	
	switch (tipo)
	{
	case 1:
		vcr = (pi*pow(raio,2)*altura)/3;
		acr = (pi*raio)*(sqrt(pow(raio,2)+pow(altura,2)));
		cout<<"\nO volume do Cone Reto e: "<<vcr;
		cout<<" e sua area e: "<<acr<<endl;
	break;
	
	case 2:
		vc = pi*pow(raio,2)*altura;
		ac = 2*pi*altura;
		cout<<"\nO volume do Cilindro e: "<<vc;
		cout<<" e sua area e: "<<ac<<endl;
	break;
	case 3:
		ve = (pi * pow(raio,3))*4/3;
		ae = 4 * pi *pow(raio,2);
		cout<<"\nO volume da Esfera e: "<<ve;
		cout<<" e sua area e: "<<ae<<endl;
	break;
	}
}
}
