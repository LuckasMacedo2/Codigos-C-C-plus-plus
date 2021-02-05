/*
Numa certa loja de eletrodomésticos, o comerciário encarregado da seção de televisores recebe, mensalmente, um salário fixo
mais comissão. Essa comissão é calculada em relação ao número de televisores vendidos por mês de cada um dos tipos de TV,
obedecendo-se à tabela abaixo:
TV LCD R$ 50,00 de comissão por unidade vendida
TV LED R$ 60,00 de comissão por unidade vendida
TV Plasma R$ 55,00 de comissão por unidade vendida
Sabe-se que o salário total e o fixo mais as comissões. Escrever um algoritmo que calcule e escreva o salário do empregado
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS

	float tvlcd, tvled, tvplasma, salariototal, salariofixo, receberlcd, receberled, recerberplasma;
	
	//ENTRADA DE DADOS
	
	cout<<"\nDigite o salario fixo do comerciario: ";
	cin>>salariofixo;
	cout<<"\nDigite a quantidade de TV's LCD's vebndidas: ";
	cin>>tvlcd;
	cout<<"\nDigite a quantidade de TV's LED vendidas: ";
	cin>>tvled;
	cout<<"\nDigite a quantidade de TV's de PLASMA vendidas: ";
	cin>>tvplasma;
	
	//PROCESSAMENTO
	
	receberlcd = tvlcd * 50;
	receberled = tvled * 60;
	recerberplasma = tvplasma * 55;
	salariototal = receberlcd + receberled + recerberplasma + salariofixo;
	
	//SAIDA DE DADOS
	
	cout<<"\nO salario total do comerciario foi de: "<< salariototal<<endl;
}