/*
Desenvolver um algoritmo que calcule o salário bruto e o salário líquido de um funcionário.
• Dados de Entrada: Nome do funcionário;
 Quantidade de horas-extras trabalhadas.
• Constantes: Salário Mínimo = R$ 350,00;
Valor da Hora-Extra = R$ 10.00.
Sabe-se:
• Salário hora-extra = horas-extras * Valor da Hora-Extra;
• Salário bruto = 3 * Salário Mínimo + Salário hora-extra;
• Desconto INSS = 12 % do salário bruto, se salário bruto for maior que R$ 1500,00;
• Desconto do Imposto de Renda = 20 % do Salário Bruto, se o mesmo for maior que R$ 2000,00;
• Salário liquido = salário bruto – deduções.
*/


#include<iostream>
using namespace std;
main()
{
	string nome;
	float h, salH, salB, inss, ir, Salliq, dedu;
	float const salMin = 350, valorh = 10;
	
	cout<<"\nDigite o seu primeiro nome: ";
	cin>>nome;
	
	cout<<"\nDigite a Quantidade de Horas extras trabalhadas: ";
	cin>>h;
	
	salH = h * valorh;
	salB = (3*salMin) + salH;
	 
	cout<<"\n\nBom dia Sr(a) "<<nome;
	cout<<" , seu salario Bruto e de: "<<salB;
	cout<<" Reais."<<endl<<endl;
	
	if (salB>1500)
	{
		inss = salB - (salB*12/100);
		cout<<"\n\nBom dia Sr(a) "<<nome;
		cout<<" , seu salario Bruto foi maior que 1500 reais, então com inss voce recebera: "<<inss;
		cout<<" Reais."<<endl<<endl;
	}
	else if (salB>2000)
	{
		
		ir = salB - (salB*20/100);
		cout<<"\n\nBom dia Sr(a) "<<nome;
		cout<<" , seu salario Bruto foi maior que 2000 reais, entao com desconto do ir voce recebera: "<<ir;
		cout<<" Reais."<<endl<<endl;	
	}	
}
