/*
Um certo aço é classificado de acordo com o resultado de três testes, que devem verificar se o mesmo satisfaz às seguintes
especificações:
Teste 1 - conteúdo de carbono abaixo de 7%;
Teste 2 - dureza de Rockwell maior que 50;
xTeste 3 - resistência à tração maior do que 80.000 psi.
Ao aço é atribuído o grau 10, se passa pelos três testes; 9, se passa apenas nos testes 1 e 2; 8, se passa no teste 1; e 7, se não
passou nos três testes. Supondo que sejam lidos de uma unidade de entrada: número de amostra, conteúdo de carbono (em %), a
dureza de Rockwell e a resistência à tração (em psi) - fazer um algoritmo que dê a classificação de 112 amostras de aço que foram
testadas, escrevendo o número da amostra e o grau obtido.
*/
#include <iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int i, teste1, teste2, teste3, cont1, cont2, cont3, a;
	
	for (i=1;i<=3;i++)
	{
		cont1=0;
		cont2=0;
		cont3=0;
		
		cout<<"\nInforme o conteúdo de Carbono do aço: ";
		cin>>teste1;
		
		if (teste1<7)
		{
			cont1=1;		
		}		
		cout<<"\nInforme a dureza de Rockwell do Aço: ";
		cin>>teste2;
		if (teste2>=500)
		{
			cont2=1;
		}
		cout<<"\nInforme a resistência á tração do Aço: ";
		cin>>teste3;
		if (teste3>80000)
		{
			cont3=1;
		}
		
		if (cont1==1 && cont2==1 && cont3==1)
		{
			a=10;
		}
		else
		{
		
			if (cont1==1 && cont2==1)
			{
				a=9;
			}
			else
			{
				if (cont1==1)
				{
					a=8;
				}
				else
				{
						a=7;
				}
			}
		}
		cout<<"\nA classificação do ferro n "<<i<<"º é "<<a<<endl;
	}
}
