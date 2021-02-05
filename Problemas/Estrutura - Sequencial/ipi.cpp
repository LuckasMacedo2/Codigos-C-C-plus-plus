/*
Calcular o IPI
*/

#include<iostream>
using namespace std;
main()
{ 
	
	
	float valorupeca1, valorupeca2, valortotal, codigopeca1, codigopeca2, quantpeca1, quantpeca2, ipi;
	
	
	cout<<"\nDigite o valor do IPI: ";
	cin>>ipi;
	cout<<"\nDigite o codigo da peça 1:............";
	cin>>codigopeca1;
	cout<<"\nDigite a quantidade de peças da marca 1: ";
	cin>>quantpeca1;
	cout<<"\nDigite o preço unitario da peça 1: ";
	cin>>valorupeca1;
	cout<<"\nDigite o codigo da peça 2:............";
	cin>>codigopeca2;
	cout<<"\nDigite a quantidade de peças da marca 2: ";
	cin>>quantpeca2;
	cout<<"\nDigite o preço unitario da peça 2: ";
	cin>>valorupeca2;
	
	
	valortotal = (valorupeca1 * quantpeca1 + valorupeca2 * quantpeca2) * ((ipi * 0.01) + 1);
	
	
	cout<<"\nO valor total a ser pago pela compra é de: "<< valortotal<<endl;
}
