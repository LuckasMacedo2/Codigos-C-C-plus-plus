/*
Fazer um algoritmo que calcule e imprima o valor do somatório de todos os números de 1 a n, onde n e fornecido pelo usuário
*/

#include<iostream>
using namespace std;
main()
{
	//Windows
	int n, d, soma;
	soma=0;

	cout<<"\nDigite o numero, ou -1 para sair ";
	cin>>n;
	
	
	if (n==-1)
	{
		system("exit");
	}
	
	for(d=0;d<=n;d++)
	{
		soma = soma+(d);
		cout<<"\t\n "<<soma<<endl;
	}
	
}
