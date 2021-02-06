/*
- Fazer um algoritmo que converta uma determinada quantia dada em Reais para uma das seguintes moedas de acordo com a opção
do usuário:
• E – Euro R$ 2,617;
• L – Libra Esterlina R$ 3,816;
• D – Dólar R$ 2,071;
• I – Iene R$ 1,018.
*/

#include<iostream>
using namespace std;
main()
{
	float qnt, conv;
	string tipo, euro, libra, dolar, iene, gold;
	
	cout<<"\nDigite a moeda para conversão: ";
	cin>>tipo;
	
	cout<<"\nDigite a quantidade de Reais para ser converitdo: ";
	cin>>qnt;
	
	if (tipo == "euro")
	{
		conv = qnt * 2.617;
		cout<<"\nO total em Euros é: "<<endl<<conv;
	}	
	else if (tipo == "libra")
	{
		conv = qnt * 3.186;
		cout<<"\nO total em Libra é: "<<endl<<conv;
	}
	else if (tipo == "dolar")
	{
		conv = qnt * 2.071;
		cout<<"\nO total em Dólar é: "<<endl<<conv;
	}
	else if (tipo == "iene")
	{
		conv = qnt * 1.018;
		cout<<"\nO total em Iene é: "<<endl<<conv;
	}
	
}
