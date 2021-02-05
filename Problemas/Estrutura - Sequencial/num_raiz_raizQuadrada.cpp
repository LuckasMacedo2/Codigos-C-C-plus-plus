/*
- Fazer um algoritmo que leia um inteiro positivo, calcule e escreva as seguintes itens:
Numero:
Quadrado:
Raiz Quadrada:

*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	//DECLARAÇÃO DE VARIAVEIS
	int x1, num, qua;
	double raiz;
	//ENTRADA DE DADOS
	cout<<"\nDigite um número inteiro e postivo: ";
	cin>>x1;
	//PROCESSAMENTO DOS DADOS
	num = x1;
	qua = pow(x1,2);
	raiz = (sqrt (x1));
	//SAIDA DOS DADOS
	cout<<"\nO número digitado é: "<< num<<endl;
	cout<<"\nO seu quadrado é: "<< qua<<endl;
	cout<<"\nSua raiz quadrada é: "<< raiz<<endl;
}
