/*
Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo período. Fazer um algoritmo que:
• leia inicialmente o número de crianças nascidas no período;
• leia, em seguida, um número indeterminado de linhas, contendo, cada uma, o sexo de uma criança morta (masculino, feminino)
e o número de meses de vida da criança. A última linha (que identificará o final da entrada de dados) conterá a palavra “vazio”
no lugar do sexo.
Determine e imprima:
a) a porcentagem de crianças mortas no período;
b) a porcentagem de crianças do sexo masculino mortas no período;
c) a porcentagem de crianças que viveram 24 meses ou menos no período
*/

#include <iostream>
using namespace std;
main()
{

	float porcH, porc24, porcM, n, h, meses, dead, n1;
	string sexo;
	
	meses=0;
	dead=0;
	porcH=0;
	porc24=0;
	h=0;
	porcM=0;
	
	do
	{
		cout<<"\nDigite o número de crianças nascidas no periodo: ";
		cin>>n;
	} while (n<0);
	
	do
	{		
		cout<<"\nDigite o sexo da criança: ";
		cin>>sexo;
	 	while ((sexo!="masculino") && (sexo!="feminino") && (sexo!="vazio"))
	 	{
	 		cout<<"\nSexo Invalido Digite o sexo da criança: ";
			cin>>sexo;	
		}
		
		if (sexo!="vazio")
		{
		cout<<"\ndigite o número de meses de vida da criança: ";
		cin>>meses;
		
			dead++;
			
			if (sexo=="masculino")
			{
				h++;
			}
			
			if (meses<=24)
			{
				n1++;	
			}
		}
	}while(sexo!="vazio");
	
	porcM=(dead/n)*100;
	porcH=(h/n)*100;
	porc24=(n1/n)*100;
	
	cout<<"\nNasceram no periodo: "<<n<<" crianças e morreram "<<dead<<" que equivale a "<<porcM;
	cout<<"% de crianças, sendo "<<porcH<<"% de homens, entre esses "<<porc24<<"% viveram menos de 25 meses."<<endl;
		
}
