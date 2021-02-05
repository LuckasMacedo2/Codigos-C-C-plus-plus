/*
Em uma padaria o padeiro quer saber qual o custo de fabricação do pão francês para saber por quanto terá que vender o pão,
tendo um lucro de 30%. Sabendo-se que a receita do pão leva farinha, água e fermento, escreva um algoritmo que: leia a quantidade de
quilos de farinha, o valor do quilo de farinha, a quantidade de litros de água, o valor do litro de água, a quantidade de quilowatts hora de
energia, o valor do quilowatt hora e o percentual do imposto que o padeiro paga pelo pão, calcule o preço de custo e o valor de venda, e
escreva estes valores.
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	float quantfarinha, valorfarinha, precofarinhat, quantagua, valoragua, precoagua, quantenergia, valorenergia, precoenergiat, imposto, valordevenda, valortotal, precoaguat, precoenergia;
	
	//ENTRADA DE DADOS
	cout<<"\nDigite a quantidade de farinha gasta na preparação do pão francês: ";
	cin>>quantfarinha;
	cout<<"\nDigite o preço do quilograma de farinha: ";
	cin>>valorfarinha;
	cout<<"\nDigite a quantidade de água gasta na preparação do pão francês: ";
	cin>>quantagua;
	cout<<"\nDigite a o preço do litro de água: ";
	cin>>valoragua;
	cout<<"\nDigite a quantidade de energia gasta na preparação do pão francês: ";
	cin>>quantenergia;
	cout<<"\nDigite o preço do kilowhatt-hora: ";
	cin>>precoenergia;
	cout<<"\nDigite o imposto pago na fabricação: ";
	cin>>imposto;
	
	//FORMULAÇÃO
	precofarinhat = quantfarinha * valorfarinha;
	precoaguat = quantagua * valoragua;
	precoenergia = quantenergia * valorenergia;
	valortotal = precofarinhat + precoaguat + precoenergiat;
	imposto = valortotal + (valortotal * imposto * 0.01);
	valordevenda = (valortotal + imposto) * 0.3;
	
	//INFORMAÇÃO DO PREÇO
	cout<<"\nO valor de venda do pão francês é de: "<< valordevenda<<endl;
}