/*
Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em
horas, minutos e segundos.
*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	//VARIAVEIS
	int horas, minutos, segundos, tempohoras, tempominutos, temposegundos;
	
	//ENTRADA DE DADOS
	cout<<"\nDigite a ocorrencia do evento em segundos: ";
	cin>>segundos;
	
	//PROCESSAMENTO
	tempohoras = segundos / 3600;
	tempominutos = segundos / 60;
	temposegundos = segundos;
	
	//SAIDA
	cout<<"\nO tempo do evento foi de....."<< tempohoras<<endl<<"e em minutos...."<< tempominutos<<endl<<"e em segundos...."<< temposegundos<<endl;
}
