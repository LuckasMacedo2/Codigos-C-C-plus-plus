/*
Escreva um algoritmo que descubra se um ano lido é bissexto. Um ano é bissexto se ele for múltiplo de 4, exceto quando ele for
múltiplo de 100. Os anos múltiplos de 100 somente são bissextos quando são múltiplos de 400, usado a partir de 1752 (por exemplo
1800 não é bissexto, mas 2000 é).
*/

#include<iostream>
using namespace std;
main()
{
	float ano, mult4, mult100, mult400;
	
	cout<<"\nDigite o ano: ";
	cin>>ano;
	
	mult4 = ano/4;
	mult100 = ano/100;
	mult400 = ano/400;
	
	if (mult4 == 0 && mult100 !=0)
	{
		cout<<"\nO ano e bisexto, pois e multiplo de 4, mas nao de 100"<<endl;	
	}	
	else if (mult100 ==0 && mult400 ==0)
	{
		cout<<"\nO ano e bisexto, pois e multiplo de 100 e 400"<<endl;
	}	
}
