/*
Um fabricante de latas deseja desenvolver um algoritmo para calcular o custo de uma lata cilíndrica de alumínio. O custo do
alumínio é R$ 100,00 por m2
. Dados de Entrada: raio e altura da lata (em metros). Área da lata = área da base(π * raio2
 * 2) + área do
lado(2 * π * raio * altura). Considere o preço do alumínio por m2
 como sendo uma constante.
*/

#include <iostream>
#include <chmat>
using namespace std;

main()
{
// declaração de variaveis
	float raio, altura, areaL, areaB, areaT, custoT;
	const float   pi = 3.14;

// Informar a entrada de dados

	cout<<"Informe o valor do raio e altura repectivamente: ";
	cin>>raio;    //ler as duas variaveis em um unico comando:   cin>>raio>>altura;
	cin>>altura;

//Precessamento

areaL = 2*pi*raio*altura;
areaB = 2*pi*pow(raio,2);      //pow(base, expoente) = base^expoente
areaT = areaL+ areaB;
custoT = 100*areaT

// Exibir o resultado na tela

cout<<" O custo total e: "<< custoT<<endl<<endl;
}
