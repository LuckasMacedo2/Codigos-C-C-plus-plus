/*
Escrever um algoritmo que lê o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, o
número de filhos com idade menor que 14 anos e o valor do salário família (pago por filho com menos de 14 anos), e que calcule o
salário total deste funcionário e escreva o seu número e o seu salário total.

*/

#include<iostream>
using namespace std;
main()
{ 
	//DECLARAÇÃO DE VARIAVEIS
	int numerofunc, horastrabalhadas, numerodefilhos14;
	float valorhora, salariofamilia, salariototal;
	
	//ENTRADA DE DADOS
	cout<<"\nDigite o numero do funcionario:...........";
	cin>>numerofunc;
	cout<<"\nInforme a quantidade de horas trabalhadas: ";
	cin>>horastrabalhadas;
	cout<<"\nInforme o numero de filhos menores de 14 anos que o mesmo possui: ";
	cin>>numerodefilhos14;
	cout<<"\nInforme o valor da hora trabalhada: ";
	cin>>valorhora;
	cout<<"\nInforme o salario toral da familia do trabalhador: ";
	cin>>salariofamilia;
	
	//PROCESSAMENTO
	salariototal = (horastrabalhadas * valorhora) + (numerodefilhos14 * salariofamilia);
	
	//SAIDA DE DADOS
	cout<<"\nO salario total do funcionario de numero: "<< numerofunc<<endl<<"é de: "<< salariototal<<endl;
}
