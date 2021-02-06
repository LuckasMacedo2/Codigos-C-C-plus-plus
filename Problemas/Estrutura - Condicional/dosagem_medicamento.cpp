/*
- Criar um algoritmo que a partir da idade e peso do paciente calcule a dosagem de determinado medicamento e imprima a receita
informando quantas gotas do medicamento o paciente deve tomar por dose. Considere que o medicamento em questão possui 500 mg
por ml, e que cada ml corresponde a 20 gotas.
● Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 quilos devem tomar 1000
mg; com peso abaixo de 60 quilos devem tomar 875 mg.
● Para crianças e adolescentes abaixo de 12 anos a dosagem e calculada pelo peso corpóreo conforme a tabela a
seguir:
Peso dosagem
5 kg a 9 kg 125 mg
9.1 kg a 16 kg 250 mg
16.1 kg a 24 kg 375 mg
24.1 kg a 30 kg 500 mg
acima de 30 kg 750 mg
*/

#include <iostream>
using namespace std;
main()
{
	int const ml = 20;
	float const mg = 500;
	float peso, dose;
	int idade, d1;
	
	cout<<"\nInforme sua idade: ";
	cin>>idade;
	cout<<"\nInforme o peso: ";
	cin>>peso;
	
	if (idade < 12)
	{
		if (peso>5 && peso <9)
		{
		d1 = 125/mg;
			dose = d1 * ml;
			cout<<"\nDosagem indicada: "<<dose<<endl;
		}
		else if (peso>9.1 && peso <16)
		{
		d1 = 250/mg;
		dose = d1 * ml;
		cout<<"\nDosagem indicada: "<<dose;
		}
		else if (peso>16.1 && peso <24)
		{
		d1 = 375/mg;
			dose = d1 * ml;
			cout<<"\nDosagem indicada: "<<dose<<endl;
		}
		else if (peso>24.1 && peso < 30)
		{
		d1 = 500/mg;
			dose = d1 * ml;
			cout<<"\nDosagem indicada: "<<dose<<endl;
		}
		else if (peso > 30)
		{
			d1 = 750/mg;
			cout<<"\nDosagem indicada: "<<dose<<endl;
		}
	}
	else if (idade > 12 && (peso > 60 || peso == 60))
	{
		dose = 1000 / mg;
		cout<<"\nDosagem indicada: "<<dose;	
	}
	else if (idade>12 && peso <60)
	{
		dose = 875/mg;
		cout<<"\nDosagem indicada: "<<dose<<endl;
	}
}
