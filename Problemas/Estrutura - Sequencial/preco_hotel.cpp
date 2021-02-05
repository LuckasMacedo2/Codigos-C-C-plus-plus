/*
Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada, isto é, nos meses de
abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal. A ocupação média do hotel
sem promoção é de 40%. A expectativa é aumentar a taxa de ocupação para 70%. Supondo que as expectativas se confirmem, escrever
um algoritmo que lê a diária normal, que calcule e escreva as seguintes informações:
(a) O valor da diária no período da promoção;
(b) O valor médio arrecadado sem a promoção, durante um mês;
(c) O valor médio arrecadado com a promoção, durante um mês;
(d) O lucro ou prejuízo mensal com a promoção.
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	float diarianormal, valordiariapromo, valormediosempromomes, valormediocompromomes, lucroouprejucompromo;
	
	//ENTRADA DE DADOS
	cout<<"\nDigite o valor da diaria normal: ";
	cin>>diarianormal;
	
	//PROCESSAMENTO DE DADOS
	valordiariapromo = diarianormal * (0.22 * diarianormal);
	valormediosempromomes = (diarianormal * 17) * 30;
	valormediocompromomes = (diarianormal * 30) * 30;
	lucroouprejucompromo = valormediocompromomes - valormediosempromomes;
	
	//SAIDA DE DADOS
	cout<<"\nO valor da diaria no periodo da promoção é de: "<< valordiariapromo<<endl;
	cout<<"\nO valor medio arrecadado sem a promoção, durante um mês foi de: "<< valormediosempromomes<<endl;
	cout<<"\nO valor medio arrecadado com a promoção, durante um mês foi de: "<<valormediocompromomes<<endl;
	cout<<"\nO lucro ou prejuizo mensal, determinado a partir do sinal algebrico (- para prejuizo e + para lucro), foi de: "<< lucroouprejucompromo<<endl;
}
