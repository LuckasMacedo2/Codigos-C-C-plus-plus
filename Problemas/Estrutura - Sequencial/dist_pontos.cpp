/*
Calcular a distância entre dois pontos
*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	//DECLARAÇÃO DAS VARIAVEIS
	float xa, xb, ya, yb, distab;
	//PROCESSAMENTO

	cout<<"\nInforme o valor de X para a coordenada A: ";
	cin>>xa;

	cout<<"\nInforme o valor de X para a coordenada B: ";
	cin>>xb;

	cout<<"\nInforme o valor de Y para a coordenada A: ";
	cin>>ya;

	cout<<"\nInforme o valor de Y para a coordenada B: ";
	cin>>yb;
	//DETERMINAÇÃO DA DISTANCIA ENTRE A E B 
	
	distab = sqrt((pow(xb-xa,2)) + (pow(yb-ya,2)));
	//SAIDA DOS DADOS
	cout<<"\nA distancia entre A e B é igual á: "<< distab<<endl;
}