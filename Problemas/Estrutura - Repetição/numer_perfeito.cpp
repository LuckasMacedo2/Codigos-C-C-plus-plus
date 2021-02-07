/*Fazer um algoritmo que imprima todos os números perfeitos entre 1 e 1000. Número perfeito é aquele cuja soma de seus
divisores, exceto ele próprio, é igual ao número. Exemplo: 6 é um número perfeito porque 1 + 2 + 3 = 6.*/

#include <iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int cont, n, aux1,  aux;
	float soma;
	soma = 0;
	
	n=1;
	soma=0;
	
	for (cont=1; cont<=10000; cont++, n=1, soma=0)
	{
		do
		{
			aux = cont%n;;
			if (aux==0)
			{
				soma = soma + n;	
			}
			n++;
		}while(n<cont);

		if (soma==cont)
		{
		cout<<"\nO número "<<cont<<" é perfeito.";	//Aqui
		}			
	}	
	
}
