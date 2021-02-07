/*Número primo é aquele que somente é divisível por ele mesmo e pela unidade. Fazer um algoritmo que leia um número inteiro
positivo, calcule e escreva se este é um número primo ou não.*/

#include<iostream>
using namespace std;
main()
{
	//setlocale(LC_ALL,"");
	int n, x, div;
	char opc;
	do
	{
		do
		{
			cout<<"\nDigite um número: ";
			cin>>n;
		}while(!(n>0));
		
		for(x=1, div=0; x<=n; x++)
		{
			if (n%x==0)
			{
				div++;
			}	
		}
		if (div==2)
		{
			cout<<"\nNúmero Primo. "<<n<<endl;
		}
		else
		{
			cout<<"\nNúmero não Primo. "<<n<<endl;
		}
		cout<<"\nDeseja continuar? S para sair, ou qualquer tecla para continuar: "<<endl;
		cin>>opc;
		cin.ignore(); 
		opc=toupper (opc);

		system("clear");
	}while(opc!=’S’);
	
}
