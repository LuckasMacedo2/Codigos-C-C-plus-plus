/*
A Companhia de Pulverização Faz Tudo Ltda utiliza aviões para pulverizar lavouras. Os custos de pulverização dependem do tipo
de praga e da área contratada conforme o esquema:
● Tipo 1: pulverização contra ervas daninhas, R$ 5,00 por acre;
● Tipo 2: pulverização contra gafanhotos, R$ 10,00 por acre;
● Tipo 3: pulverização contra broca, R$ 15,00 por acre;
● Tipo 4: pulverização contra tudo acima, R$ 25,00 por acre.
Se a área a ser pulverizada é maior que 300 acres, o fazendeiro recebe um desconto de 5%. Em adição, qualquer fazendeiro cujo
custo total, sem desconto, ultrapasse R$ 1.750,00 recebe um desconto de 10% sobre o valor que ultrapassar os R$ 1.750,00. Se ambos os
descontos se aplicam, aquele relacionado a área é calculado em primeiro lugar.
Preparar um algoritmo que leia as seguintes informações:
● Nome do fazendeiro;
● Tipo de pulverização (de 1 a 4);
● Área a ser pulverizada
*/

#include<iostream>
using namespace std;
main()
{
	int tipo;
	float acre, total, desc, ultra, descU;
	string nome;
	
	cout<<"\nDigite seu nome: ";
	cin>>nome;
		
	cout<<"\nDigite o tipo de Praga: ";
	cin>>tipo;
	
	cout<<"\nDigite quantos acres seram Pulverizados: ";
	cin>>acre;
	
	if (tipo == 1) 
	{
		total = acre*5;
		if (acre < 300 && total > 1750)
		{
			ultra = total - 1750;
			descU = ultra - (ultra*10/100);
			desc = total - descU;
		}
		else if (acre > 300 && total > 1750)
		{
			ultra = total - 1750;
			desc = total - ((total - (total*5/100))- (ultra - (ultra*10/100)));	
		}
		else if (acre > 300)
		{
			desc = total - (total*5/100);
		}
		else if (acre <300 && total < 1750)
		{
			desc = acre *5;
		}
		cout<<"\nSr(a) "<<nome;
		cout<<", o total a ser pago pelo serviço é: "<<desc<<endl;
		
	}
	
	
	if (tipo == 2) 
	{
		total = acre*10;
		if (acre < 300 && total > 1750)
		{
			ultra = total - 1750;
			descU = ultra - (ultra*10/100);
			desc = total - descU;
		}
		else if (acre > 300 && total > 1750)
		{
			ultra = total - 1750;
			desc = total - ((total - (total*5/100))- (ultra - (ultra*10/100)));	
		}
		else if (acre > 300)
		{
			desc = total - (total*5/100);
		}
		else if (acre <300 && total < 1750)
		{
			desc = acre *10;
		}
		cout<<"\nSr(a) "<<nome;
		cout<<", o total a ser pago pelo serviço é: "<<desc<<endl;
		
	}
	
	
		if (tipo == 3) 
	{
		total = acre*15;
		if (acre < 300 && total > 1750)
		{
			ultra = total - 1750;
			descU = ultra - (ultra*10/100);
			desc = total - descU;
		}
		else if (acre > 300 && total > 1750)
		{
			ultra = total - 1750;
			desc = total - ((total - (total*5/100))- (ultra - (ultra*10/100)));	
		}
		else if (acre > 300)
		{
			desc = total - (total*5/100);
		}
		else if (acre <300 && total < 1750)
		{
			desc = acre *15;
		}
		cout<<"\nSr(a) "<<nome;
		cout<<", o total a ser pago pelo serviço é: "<<desc<<endl;
		
	}
	
	
		if (tipo == 4) 
	{
		total = acre*25;
		if (acre < 300 && total > 1750)
		{
			ultra = total - 1750;
			descU = ultra - (ultra*10/100);
			desc = total - descU;
		}
		else if (acre > 300 && total > 1750)
		{
			ultra = total - 1750;
			desc = total - ((total - (total*5/100))- (ultra - (ultra*10/100)));	
		}
		else if (acre > 300)
		{
			desc = total - (total*5/100);
		}
		else if (acre <300 && total < 1750)
		{
			desc = acre *25;
		}
		cout<<"\nSr(a) "<<nome;
		cout<<", o total a ser pago pelo serviço é: "<<desc<<endl;
		
	}	
}
