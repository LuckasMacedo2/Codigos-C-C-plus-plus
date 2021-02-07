/*
Uma Companhia de teatro planeja dar uma série de espetáculos. A direção calcula que, a R$ 6,00 o ingresso, serão vendidos
130 ingressos e as despesas montarão em R$300,00. A uma diminuição de R$ 0,60 no preço dos ingressos espera-se que haja um
aumento de 30 ingressos vendidos. Fazer um algoritmo que escreva uma tabela de valores do lucro esperado em função do preço do
ingresso, fazendo-se variar este preço de R$ 6,00 a R$ 1,00 de R$ 0,60 em R$ 0,60. Escreva ainda o lucro máximo esperado, o preço
e o número de ingressos correspondentes.
*/

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	float p, lucro, qtd, desp;
	int x;
	
	for (p=6.00, x=0; p>=1; p=p-0.6, x++)
	{
		qtd = 130 + (30*x);
		desp = 300 + (70*x);
		lucro = (qtd*p) - desp;
		
		cout<<"\nSe o preço do ingresso for R$ "<<p<<" a quantidade vendida será "<<qtd<<" e o lucro "<<lucro;	
		
	} 		
}
