/*Faça um algoritmo que receba a sigla da cidade de origem de um grupo de pessoas, ao final informe quantas foram digitadas
das cidades do Rio de Janeiro, Belo Horizonte e São Paulo. O algoritmo encerra quando digitado “fim”.*/

#include <iostream>
using namespace std;
main()
{
	string sigla;
	int rj, bh, sp, outros;
	
	rj=0;
	bh=0;
	sp=0;
	outros=0;
	
	do
	{
		cout<<"\nDigite a sigla do estado: ";
		cin>>sigla;
		
		if (sigla!="fim")
		{
			if (sigla=="RJ")
			{
				rj++;
			}
			else
			{
				if (sigla=="BH")
				{
					bh++;
				}
				else
				{
					if (sigla=="SP")
					{
						sp++;
					}
					else
					{
						outros++;
					}
				}
			}
		}			
	}while(sigla!="fim");
	cout<<"\n "<<rj<<" pessoas vieram de alguma cidade do estado do Rio de Janeiro";
	cout<<"\n "<<sp<<" pessoas vieram de alguma cidade do estado de São Paulo";
	cout<<"\n "<<rj<<" pessoas vieram de alguma cidade do estado de Belo Horizonte";
}
