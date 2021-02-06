/*
Fazer um algoritmo que calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média do aluno, uma
mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso contrário. 
*/

#include <iostream>
using namespace std;
	
main()
{
	//DECLARAR VARIAVEIS
	float n1,n2,n3,media;

	//ENTRADA
	cout<<"Informe as 3 avaliações n1,n2 e n3 respectivamente: ";
	cin>>n1>>n2>>n3;

	//PROCESSAMENTO
	media = (n1+n2+n3)/3;
	
	//SAIDA
	cout<<" A média do aluno é "<<media<<" e portanto ele foi ";
	if(media>=6)
		cout<<"aprovado"<<endl;
	else
		cout<<"reprovado"<<endl;
}