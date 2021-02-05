/*
Escrever um algoritmo que lê o público total de futebol e forneça a renda do jogo, sabendo-se que havia 4 tipos de ingressos
assim distribuídos: popular - 10% a R$1,00, geral - 50% a R$5,00, arquibancada - 30% a R$10,00 e cadeiras - 10% a R$20,00.
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	float popular, geral, arquibancada, cadeiras, publicototal, publicopopular, totalpopular, publicogeral, totalgeral, publicoarquibancada, totalarquibancada, publicocadeira, totalcadeira, renda;
	
	//ENTRADA DE DADOS

	cout<<"\nEscreva o publico total do jogo de futebol: ";
	cin>>publicototal;
	
	//CALCULOS
	
	publicopopular = publicototal - (0.1 * publicototal);
	totalpopular = publicopopular * 1;
	publicogeral = publicototal - (0.5 * publicototal);
	totalgeral = publicogeral * 5; 
	publicoarquibancada = publicototal - (0.3 * publicototal);
	totalarquibancada = publicoarquibancada * 10;
	publicocadeira = publicototal - (0.1 * publicototal);
	totalcadeira = publicocadeira * 20;
	renda = totalpopular + totalgeral + totalarquibancada + totalcadeira;

	//RESULTADOS
	
	cout<<"\nA renda do jogo foi de: "<< renda<<endl;
}