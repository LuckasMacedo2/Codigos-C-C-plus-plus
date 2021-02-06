/*
Criar um algoritmo que leia a idade de uma pessoa e que mostre a sua classe eleitoral:
• Não-eleitor (abaixo de 16 anos);
• Eleitor Obrigatório (entre 18 e 65 anos);
• Eleitor facultativo (entre 16 e 18 anos e maior de 65 anos).
*/


#include<iostream>
using namespace std;
main()
{
	int idade;
	
	cout<<"\nDigite sua idade: ";
	cin>>idade;
	
	if (idade < 16)
	{
		cout<<"\nNão Eleitor."<<endl;
	}
	else if (idade >=18 && 65 >= idade)
	{
		cout<<"\nEleito Obrigatorio."<<endl;
	}
	else if (idade > 16 && idade < 18 || idade > 65)
	{
		cout<<"\nEleitor Facultativo"<<endl;
	}
}
