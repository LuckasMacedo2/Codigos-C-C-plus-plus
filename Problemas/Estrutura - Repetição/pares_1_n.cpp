/*
Fazer um algoritmo que imprima na tela todos os números pares de 1 a n, onde n e fornecido pelo usuário.
*/

#include<iostream>
using namespace std;
main()
{
	int n, d;
	char opc;
	do
	{
		do
		{
		cout<<"\nDigite o numero: ";
		cin>>n;
		}while(!(n>0));
		
		cout<<"\nNúmeros Pares desde "<<n<<endl;
		for(d=1;d<=n;d++)
		{	
			if (d%2 == 0)
			{
				cout<<"\n\t "<<d<<endl;
			}
		}
		cout<<"\nDeseja executar novamente qualque tecla para repetir ou (N) para sair ";
		cin>>opc;
		system ("clear");
		cin.ignore(); 
		opc=toupper (opc); 
	}while(opc!='N');

}
