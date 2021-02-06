/*
Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. O custo da água varia dependendo do tipo do
consumidor - residencial, comercial ou industrial. A regra para calcular a conta é:
• Residencial: R$ 5,00 de taxa mais R$ 0,05 por m3
 gastos;
• Comercial: R$ 500,00 para os primeiros 80 m3
 gastos mais R$ 0,25 por m3
 gastos acima dos 80 m3
;
• Industrial: R$ 800,00 para os primeiros 100 m3
 gastos mas R$ 0,04 por m3
 gastos acima dos 100 m3
;
O algoritmo deverá ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de água em metros cubos.
Como resultado imprimir a conta do cliente e o valor em real a ser pago pelo mesmo.
*/

#include<iostream>
#include <math.h>
using namespace std;
main()
{
 
	int tipo;
	float gasto, m;
	
	cout<<"\nDigite o tipo de comsumidor: ";
	cout<<"\n1 para residencial \n2 para comercial \n3 para industrail";
	cout<<"\nDigite a opção: ";
	cin>>tipo;
	if (tipo<0 || tipo >3)
	{
		cout<<"\nDigite uma opção valida!";
	}
	
	else
	{
	
	cout<<"\nDigite a quantidade de metros cubicos gastos: ";
	cin>>m;
	
	switch (tipo)
	{
		case 1:
			gasto = 5 + (m*0.05);
			cout<<"\nO total a ser pago é: "<<gasto<<endl;
			break;
		case 2:
			if (m < 80)
			{
			gasto = 500;
			cout<<"\nO total a ser pago é: "<<gasto<<endl;
			}
			else
			{
				gasto = ((m-80)*0.25)+ 500;
				cout<<"\nO total a ser pago é: "<<gasto<<endl;
			}
			break;
		case 3:
			if (m<=100)
			{
				gasto = 800;
				cout<<"\nO total a ser pago é: "<<gasto<<endl;
			}
			else
			{
				gasto = ((m-100)*0.04)+800;
				cout<<"\nO total a ser pago é: "<<gasto<<endl;
			}
			break;
	}
	}
	
}
