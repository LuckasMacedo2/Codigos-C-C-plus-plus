/*
Desenvolver um algoritmo que leia o mês e o ano de uma data e que exiba o número de dias da mesma.
*/

#include<iostream>
using namespace std;
main()
{
	int ano, mes, qntDias, qntAno, qntMes;
	
	cout<<"\nDigite o mes em que esta: ";
	cin>>mes;
	
	cout<<"\nDigite o ano em que esta: ";
	cin>>ano;
	
	qntAno = ano * 365;
	qntMes = mes * 30;
	qntDias = (365-qntMes) + qntAno;
	
	cout<<"\nA quantida de dias da data em questão é: "<<qntDias<<endl;
	
}