/*
Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a média é ponderada e que
o peso das notas é: 2,3 e 5, respectivamente. 
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS

	float mdnota1, mdnota2, mdnota3, nota1, nota2, nota3, mediafinal;
	
	//ENTRADA DE DADOS
	
	cout<<"\nDigite a nota 1 do aluno: ";
	cin>>nota1;
	cout<<"\nDigite a nota 2 do aluno: ";
	cin>>nota2;
	cout<<"\nDigite a nota 3 do aluno: ";
	cin>>nota3;
	
	//PROCESSAMENTO DOS DADOS
	
	mdnota1 = nota1 * 2;
	mdnota2 = nota2 * 3;
	mdnota3 = nota3 * 5;
	mediafinal = (mdnota1 + mdnota2 + mdnota3) / 10;
	
	//SAIDA DE DADOS

	cout<<"\nA media do aluno é: "<< mediafinal<<endl;
}
