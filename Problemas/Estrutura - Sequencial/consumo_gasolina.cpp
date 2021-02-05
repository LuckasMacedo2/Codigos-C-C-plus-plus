/*
Fazer um algoritmo que calcule e escreva a quantidade de dinheiro a ser gasto em uma viagem. Sabe-se que o veículo a ser usado
faz 12 Km por litro de gasolina e que o litro de gasolina custa R$ 2,90. O usuário ira fornecer o tempo de viagem e a velocidade média
do veículo.
◦ Distância = tempo de viagem * velocidade média.
◦ Quantidade de litros = distância / 12.
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	float tempo, dist, quantlitro, totalgasto, vm;
	
	//ENTRADA DOS DADOS
	cout<<"\nInforme a velocidade media descrita no percurso: ";
	cin>>vm;
	cout<<"\nInforme o tempo gasto durante a viagem: ";
	cin>>tempo;
	
	//PROCESSAMENTO
	dist = vm * tempo;
	quantlitro = dist / 12;
	totalgasto = quantlitro * 290 / 100;
	
	//INFORMAÇÃO AO USUARIO
	cout<<"\nO total gasto na viagem foi de: "<< totalgasto<<endl;
}
