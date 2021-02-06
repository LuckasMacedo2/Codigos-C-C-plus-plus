/*
Escrever um algoritmo que lê o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos
exercícios que fazem parte da avaliação. Calcular a média de aproveitamento do aluno, usando a fórmula:
Média Final=
nota1 = (nota2+2*nota3+3*médiados exercícios)/7
e o seu conceito, utilizando a tabela a seguir:
Média de Aproveitamento Conceito
9,1 à 10,0 A
7,6 à 9,0 B
6,1 à 7,5 C
4,1 à 6,0 D
< 4,0 E
O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o conceito
correspondente e a mensagem: APROVADO se o conceito for A, B ou C e REPROVADO, se o conceito for D ou E.

*/

#include<iostream>
using namespace std;
main()
{
	float n1, n2, n3, ex, md;
	
	cout<<"\nDigite as tres notas do aluno sucessivamente: ";
	cin>>n1>>n2>>n3;
	cout<<"\nDigite a media dos exercicios: ";
	cin>>ex;
	
	md = (n1 + (n2*2) + (n3*3) + ex)/7;
	
	if (md >= 9.1)
	{
		cout<<"\nO Aluno conseguiu conceito A!, e a media foi: "<<md<<endl;
	}
	else if (md>=7.6 && 9>=md)
	{
		cout<<"\nO aluno conseguiu conceito B!, e a media foi: "<<md<<endl;
	}
	else if (md>=6.1 && 7.5>=md)
	{
		cout<<"\nO aluno conseguiu conceito C!, e a media foi: "<<md<<endl;
	}
	else if (md>=4.1 && 6>=md)
	{
		cout<<"\nO aluno conseguiu conceito D!, e a media foi: "<<md<<endl;
	}
	else if (md<4)
	{
		cout<<"\nO aluno conseguiu conceito E!,e a media foi: "<<md<<endl;
	}
}
