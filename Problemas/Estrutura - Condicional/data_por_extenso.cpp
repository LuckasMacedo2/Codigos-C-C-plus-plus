/*
- Fazer um algoritmo que leia uma data, dia/mês/anos, no formato inteiro e escreva a mesma data no formato dia de (mês por
extenso) de ano.
*/

#include <iostream>
using namespace std;
main()
{
	int data, d1, d2, d3;
	
	cout<<"\nDigite a data no formato inteiro: ";
	cin>>data;
	
	d1 = data / 1000000;
	d2 = (data%1000000)/10000;
	d3 = (data%1000000)%10000;
	
	if (d1 < 32 && d2 < 13)
	{
		if (d2 == 1)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Janeiro, de "<<d3<<endl;
		}
		else if (d2 == 2)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Fevereiro, de "<<d3<<endl;
		}
		else if (d2 == 3)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Março, de "<<d3<<endl;
		}
		else if (d2 == 4)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Abril, de "<<d3<<endl;
		}		
		else if (d2 == 5)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Maio, de "<<d3<<endl;
		}		
		else if (d2 == 6)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Junho, de "<<d3<<endl;
		}		
		else if (d2 == 7)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Julho, de "<<d3<<endl;
		}
		else if (d2 == 8)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Agosto, de "<<d3<<endl;
		}		
		else if (d2 == 9)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Setembro, de "<<d3<<endl;
		}		
		else if (d2 == 10)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Outubro, de "<<d3<<endl;
		}		
			else if (d2 == 11)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Novembro, de "<<d3<<endl;
		}	
		else if (d2 == 12)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Dezembro, de "<<d3<<endl;
		}
	}
	else if (d1 < 10 && d2 >0)
	{
		d1 = data / 100000;
		d2 = (data%1000000)/10000;
		d3= (data%1000000)%10000;
		if (d2 == 1)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Janeiro, de "<<d3<<endl;
		}
		else if (d2 == 2)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Fevereiro, de "<<d3<<endl;
		}
		else if (d2 == 3)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Março, de "<<d3<<endl;
		}
		else if (d2 == 4)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Abril, de "<<d3<<endl;
		}		
		else if (d2 == 5)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Maio, de "<<d3<<endl;
		}		
		else if (d2 == 6)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Junho, de "<<d3<<endl;
		}		
		else if (d2 == 7)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Julho, de "<<d3<<endl;
		}
		else if (d2 == 8)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Agosto, de "<<d3<<endl;
		}		
		else if (d2 == 9)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Setembro, de "<<d3<<endl;
		}		
		else if (d2 == 10)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Outubro, de "<<d3<<endl;
		}		
			else if (d2 == 11)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Novembro, de "<<d3<<endl;
		}	
		else if (d2 == 12)
		{
			cout<<"\nA data informada é dia "<<d1;
			cout<<" de Dezembro, de "<<d3<<endl;
		}
	}
	else
	{
		cout<<"\nData Invalida."<<endl;
	}

}
