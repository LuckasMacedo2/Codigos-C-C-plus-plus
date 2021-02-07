/*
Para evitar erros de digitação de seqüências numéricas de importância fundamental, como a matrícula de um aluno, o número
de conta bancária, o CPF do imposto de renda, etc, geralmente se adiciona ao número um dígito verificador. Por exemplo, o número
de matrícula 811057 é usado como 811057-3, onde 3 é o dígito verificador, calculado da seguinte maneira:
Cada algarismo do número é multiplicado por um peso começando de 2 e crescendo de 1, da direita para a esquerda: 8*7, 1*6 ,
1*5 , 0*4 , 5*3 , 7*2;
Somando-se as parcelas obtidas: 8*7 + 1*6 + 1*5 + 0*4 + 5*3 + 7*2
56 + 6 + 5 + 0 + 15 + 14 = 96;
Calcula-se o resto da divisão desta por 11: 96 dividido por 11 dá resto 8 (96 = 8*11+8);
Subtrai-se de 11 o resto obtido: 11 – 8 = 3;
Se o valor encontrado for 10 ou 11, o dígito verificador será 0; nos outros casos, o dígito verificador é o próprio valor encontrado.
Fazer um algoritmo que leia o CPF de uma pessoa, o CPF e composto de 11 dígitos sendo os 9 primeiros os de identificação e os
dois últimos os dígitos de verificação, calcule e escreva se o CPF digitado é válido ou não.
*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	setlocale(LC_ALL," ");
	int dv2, dv1, cpf, dv, resto, n, dig1, dig, soma, a, comp;
	
	cout<<"\nInforme os nove primeiros digitos da sua conta: ";
	cin>>cpf;
	
	cout<<"\nInforme o digito verificador da sua conta: ";
	cin>>dv;
	
	soma = 0;
	n = 8;
	dig1 = (cpf / 100000000);
	
	do
	{
		a = pow(10,n);
		resto = cpf%a;
		dig = (resto*10)/a;
		soma = soma + (dig*(n+1));
		//cout<<"\nresto "<<resto<<" soma "<<soma<<" dig "<<dig;
		n--;
	}while (n>0);
	
	dv1 = 11-((soma+(dig1*10))%11);
	//cout<<" dv1 "<<dv1;
	
	if (dv1==10 ||dv1==11)
	{
		comp=0;
	}
	else
	{
		comp = dv1;
	}
	//cout<<"\nComp "<<comp;
	
	
	dig1 = (cpf / 100000000);
	soma = 0;
	n = 8;
	do
	{
		a = pow(10,n);
		resto = cpf%a;
		dig = (resto*10)/a;
		soma = soma + (dig*(n));
		//cout<<"\nresto "<<resto<<" soma "<<soma<<" dig "<<dig;
		n--;
	}while (n>=1);
	
	dv2 = 11 - ((soma +(dig1*11))%11);
	//cout<<"\ndv2 "<<dv2;
	
	if (dv2 == 10 || dv2 == 11)
	{
		comp = comp * 10;
	} 
	else
	{
		comp = comp*10+dv2;
	}
	//cout<<"\nComp "<<comp;
	
	if ((comp%10==dv%10) && (comp/10==dv/10))
	{
		cout<<"\nCPF valido."<<endl;
	}
	else
	{
		cout<<"\nCPF invalido."<<endl;
	}
}
