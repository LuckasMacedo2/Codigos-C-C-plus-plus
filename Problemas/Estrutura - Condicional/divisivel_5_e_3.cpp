/*
esenvolver um algoritmo que leia um número inteiro e verifique se este é divisível por 5 e por 3 ao mesmo tempo.
*/

#include<iostream>
using namespace std;
main()
{
	int n;

	cout<<"\nInforme um número: ";
	cin>>n;


	if (n % 3 == 0 && n % 5 ==0)
	{
		cout<<"\nO número informado é divisivel por 3 e 5"<<endl;
	}
	else
	{
		cout<<"\nO número não é divisivel por 3 e 5"<<endl;
	}
}
