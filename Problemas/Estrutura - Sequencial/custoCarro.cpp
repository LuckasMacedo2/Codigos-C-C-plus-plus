/*
O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos
(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 12% do preço de fábrica e os impostos de 30% do
preço de fábrica, fazer um algoritmo para ler o custo de fábrica de um carro e imprimir o custo ao consumidor.
*/

#include<iostream>
using namespace std;
main()
{
	//DECLARAÇÃO DAS VARIAVEIS
	float custoconsumidor, custofabrica, distribuidor, impostos;

	//ENTRADA DE DADOS

	cout<<"Informe o preço de fabrica do veiculo: ";
	cin>>custofabrica;

	//PROCESSAMENTO
	distribuidor = 0.12  * custofabrica;
	impostos = 0.3  * custofabrica;
	custoconsumidor = custofabrica + impostos + distribuidor;

	//SAIDA DE DADOS
	cout<<"\nO custo para o consumidor do carro é: "<< custoconsumidor<<endl;
}
