/*

Muitos países estão passando a utilizar o sistema métrico. Fazer um algoritmo para executar as seguintes conversões:
• Ler uma temperatura dada em graus Fahrenheit e imprimir o equivalente em Celsius
Fahrenheit = 9/5 * C + 32
• Ler uma quantidade de chuva dada em polegadas e imprimir o equivalente em milímetros (1 polegada = 25,4 mm).
*/

#include<iostream>
using namespace std;
main()
{
	float celsius, fhar, chuvapol, chuvamili;

	cout<<"\nInforme a temperatura em graus Faharenheit: ";
	cin>>fhar;
	cout<<"\nInforme a quantidade de chuva dade em polegadas: ";
	cin>>chuvapol;

	celsius = ((fhar - 32) * 5) / 9;
	chuvamili = chuvapol * 25.4;

	cout<<"\nA temperatura expressa em graus Celsius é: "<< celsius<<endl;

	cout<<"\nAquantidade de chuva medidad em milimetros é: "<< chuvamili<<endl;
}
