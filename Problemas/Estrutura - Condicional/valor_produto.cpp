/*
Elabore um algoritmo que calcule o valor a ser pago por um produto considerando o preço normal de etiqueta e a escolha da
condição de pagamento. Utilize os códigos da tabela a seguir para saber qual a condição de pagamento escolhida e efetuar o cálculo
adequado.
Código Condição Pagamento
1 À vista, dinheiro ou cheque, 10% de desconto
2 À vista, cartão de credito, 5% de desconto
3 Em 2 vezes, preço normal da etiqueta sem juros
4 Em 3 vezes, preço normal da etiqueta + 10% de juros
*/

#include<iostream>
using namespace std;
main()
{
	int tipo;
	float preco, av, parc;
	
	cout<<"\nDigite o preco de etiqueta do produto: ";
	cin>>preco;
	
	cout<<"\nDigite o tipo de pagamento \n1: A vista, dinheiro ou cheque,";
	cout<<" \n2: A vista cartao, \n3: 2 vezes parcelado, \n4: 3 vezes parcelado.";
	cin>>tipo;
	if (tipo<0 ||tipo>4)
	{
		cout<<"\nInforme uma Opção Valida!";
	}
	else
	{
		
	switch (tipo)
	{
	
	case 1:
	
		av = preco - (preco * 10/100);
		cout<<"\nO valor a pagar a vista no cheque ou dineheiro e: "<<av;
		cout<<" Reais"<<endl;
	break;
	
	case 2:
		av = preco - (preco*5/100);
		cout<<"\nO valor a pagar com carta de credito e: "<<av;
		cout<<" Reais"<<endl;
	break;
	
	case 3:
		parc = preco / 2;
		cout<<"\nO preco a pagar nas parcelas e: "<<parc;
		cout<<" Reais"<<endl;
		cout<<"\nO preco do produto e: "<<preco;
		cout<<" Reais";
	break;
	
	case 4:
		parc = preco / 3;
		preco = preco + (preco*30/100);
		cout<<"\nO preco a pagar em cada parcela e: "<<parc;
		cout<<" Reais";
		cout<<"\nO preco do produto ficou em: "<<preco;
		cout<<" Reais";
	break;	
		
	}
	}		
}
