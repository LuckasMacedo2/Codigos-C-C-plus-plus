/*
Desenvolver um algoritmo para calcular e imprimir o preço final de um carro. O valor do preço inicial de fábrica é fornecido por
um meio de entrada. O carro pode ter as seguintes opções:
(a) (S,N)Ar condicionado: R$ 1750,00
(b) (S,N)Pintura Metálica: R$ 800,00
(c) (S,N)Vidro Elétrico: R$ 1200,00
(d) (S,N)Direção Hidráulica: R$ 2000,00. 
*/

#include<iostream>
using namespace std;
main()
{
	float preco, precoF;
	string a, b, c, d;
	int tipo;
	
	cout<<"\nDigite o preço de fabrica: ";
	cin>>preco;
	
	cout<<"\nDigite a opção: 1) Para Ar condicionado, 2) Para Pintura Metalio, 3) Para Vidro Eletrico ou 4) para Direção Hidraulica: ";
	cin>>tipo;
	if (tipo<0||tipo>4)
	{
		cout<<"Favor Digitar uma opção valida";
	}
	else
	{
	switch (tipo)
	{
	case 1:
		precoF = preco + 1750;
		cout<<"\nO preço do carro fica por: "<<precoF<<endl;
	break;
	
	case 2:
		precoF = preco + 800;
		cout<<"\nO preço do carro fica por: "<<precoF<<endl;
	break;
	
	case 3:
		precoF = preco + 1200;
		cout<<"\nO preço do carro fica por: "<<precoF<<endl;
	break;
	
	case 4:
		precoF = preco + 2000;
		cout<<"\nO preço do carro fica por: "<<precoF<<endl;
	break;
	}
	}
}
