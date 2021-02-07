/*Um número inteiro positivo é triangular se este for o resultado do produto de três números naturais consecutivos. Por exemplo,
o número 120 é triangular porque 120 = 4*5*6.
Fazer um algoritmo que:
• leia um número inteiro;
• verifique se o número é ou não triangular. Se for imprimir: “Número Triangular” senão imprimir: “Número não
Triangular”*/

#include<iostream>
using namespace std;
main()
{
	//setlocale(LC_ALL,"");
	int n, comp, a, b, c;
	char opc;
	
	do
	{
	
		do
		{
			cout<<"\nDigite um número: ";
			cin>>n;
		}while(!(n>0));
		
		for(a=0, b=1, c=2; a*b*c<=n;a++, b++, c++)
		{
			comp = a*b*c;
		}
		
		if(comp==n)
		{
			cout<<"\nO número "<<n<<" é Triangular."<<endl;
		}
		else
		{
			cout<<"\nO número "<<n<<" não é Triangular."<<endl;
		}
		cout<<"\n\tDeseja continuar? \n\tPressione qualquer tecla para continuar \n\t(S) Para sair \n\tOpção: ";
		cin>>opc;
		cin.ignore(); 
		opc=toupper (opc);
		system("clear");
	}while(opc!=‘S’);
}
