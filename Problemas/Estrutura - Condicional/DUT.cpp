/*
A polícia rodoviária resolveu fazer cumprir a lei e cobrar dos motoristas o DUT. Sabe-se que o mês em que o emplacamento do
carro deve ser renovado é determinado pelo último número da placa do veiculo. Criar um algoritmo que, a partir da leitura da placa do
carro, informe o mês em que o emplacamento deve ser renovado
*/


#include <iostream>
using namespace std;
main()
{
	int dv, n, x, y;
	
	cout<<"\nDigite a placa do carro: ";
	cin>>n;
	
	x = n%1000;
	dv = y%100;
	
	if (dv > 0 && (dv <12 || dv ==12))
	{
		if (dv==1)
		{
			cout<<"\nDeve ser renovada em Janeiro!"<<endl;
		}
		else if (dv==2)
		{
			cout<<"\nDeve ser renovada em Fevereiro!"<<endl;
		}	
		else if (dv==3)
		{
			cout<<"\nDeve ser renovada em Março!"<<endl;
		}	
		else if (dv==4)
		{
			cout<<"\nDeve ser renovada em Abril!"<<endl;
		}
		else if (dv==5)
		{
			cout<<"\nDeve ser renovada em Maio!"<<endl;
		}		
		else if (dv==6)
		{
			cout<<"\nDeve ser renovada em Junho!"<<endl;
		}		
		else if (dv==7)
		{
			cout<<"\nDeve ser renovada em Julho!"<<endl;
		}		
		else if (dv==8)
		{
			cout<<"\nDeve ser renovada em Agosto!"<<endl;
		}		
		else if (dv==9)
		{
			cout<<"\nDeve ser renovada em Setembro!"<<endl;
		}		
		else if (dv==10)
		{
			cout<<"\nDeve ser renovada em Outubro!"<<endl;
		}		
		else if (dv==11)
		{
			cout<<"\nDeve ser renovada em Novembro!"<<endl;
		}		
		else if (dv==12)
		{
			cout<<"\nDeve ser renovada em Dezembro!"<<endl;
		}		
}	
	
	else
	{
		cout<<"\nDigite um placa valida!"<<endl;
	}	
}
