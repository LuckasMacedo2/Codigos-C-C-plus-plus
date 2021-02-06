/*
Uma locadora de filmes tem as seguintes regras para aluguel de fitas.
• Às segundas, terças e quintas (2,3 e 5) : desconto de 40% em relação ao preço normal;
• Às quartas , sextas, sábados e domingos (4,6 ,7 e 1): preço normal;
• Aluguel de fitas comuns: preço normal;
• Aluguel de lançamentos: acréscimo de 15% em relação ao preço normal.
Desenvolver um algoritmo para ler o preço normal da fita alugada(em R$) e sua categoria(comum ou lançamento). Calcular e
imprimir o preço final que será pago pela locação da fita.
*/

#include<iostream>
using namespace std;
main()
{
	int dia, tipo;
	float preco;
	
	cout<<"\nDigite o dia da semana \n1 para domingo \n2 para segunda-feira";
	cout<<" \n3 para terça feira \n4 para qurta-feira \n5 para quinta-feira,";
	cout<<" \n6 para sexta feira \n7 para sabado: "<<endl;
	cin>>dia;
	if (dia <0 || dia >7)
	{
		cout<<"\nDigite um dia Valido!";
	}
	
	else
	{	
	cout<<"\nDigite o tipo de fita, 1 para comum e 2 para lançamento: ";
	cin>>tipo;
	
	cout<<"\nDigite o preco normal da fita: ";
	cin>>preco;
	
	switch (dia)
	{
	case 1:
		if (tipo==1)
		{
			cout<<"\nO preco da fita e: "<<preco<<endl;
		}
		else 
		{
			preco = preco + (preco*15/100);
			cout<<"\nO preço da fita é: "<<preco;
		}
			
	break;
	
	case 2:
		if (tipo == 1)
		{
			preco = preco - (preco*40/100);
			cout<<"\nO preco da fita e: "<<preco;
		}
		else
		{
			preco = (preco + (preco*15/100)) - (preco*40/100);
			cout<<"\nO preco da fita e: "<<preco;		
		}
	break;
	
	case 3:
		if (tipo==1)
		{
			preco = preco - (preco*40/100);
			cout<<"\nO preco da fita e: "<<preco;
		}
		else
		{
			preco = (preco + (preco*15/100)) - (preco*40/100);
			cout<<"\nO preco da fita e: "<<preco;
		}
	break;
	
	case 4:
		if (tipo==1)
		{
			cout<<"\nO preco da fita e: "<<preco<<endl;
		}
		else 
		{
			preco = preco + (preco*15/100);
			cout<<"\nO preço da fita é: "<<preco;
		}
		
	break;
	
	case 5:
		if (tipo==1)
		{
			preco = preco - (preco*40/100);
			cout<<"\nO preco da fita e: "<<preco;
		}
		else
		{
			preco = (preco + (preco*15/100)) - (preco*40/100);
			cout<<"\nO preco da fita e: "<<preco;
		}
	
	case 6:
		if (tipo==1)
		{
			cout<<"\nO preco da fita e: "<<preco<<endl;
		}
		else 
		{
			preco = preco + (preco*15/100);
			cout<<"\nO preço da fita é: "<<preco;
		}		
	
	
	case 7:
		if (tipo==1)
		{
			cout<<"\nO preco da fita e: "<<preco<<endl;
		}
		else 
		{
			preco = preco + (preco*15/100);
			cout<<"\nO preço da fita é: "<<preco;
		}
		
	}
}	
		
}
