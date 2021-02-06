/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as
seguintes expressões:
• Para homens: 72.7 * h −58 ;
• Para mulheres: 62.1* h −44.7.
*/

#include<iostream>
using namespace std;
main()
{

	float h, pi;
	string sexo, masculino, feminino;
	
	cout<<"\nDigite seu sexo: ";
	cin>>sexo;
	
	cout<<"\nDigite a altura: ";
	cin>>h;
	
	if (sexo == "masculino")
	{
		pi = (72.7*h)-58;
		cout<<"\nO seu peso idel é: "<<pi<<endl;
	}
	else if (sexo == "feminino")
	{
		pi = (62.1*h)-44.7;
		cout<<"\nO seu peso ideal é: "<<pi<<endl;
	}
}
