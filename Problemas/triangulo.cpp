/*Desenvolver	um	programa	em	C++	que	exiba	na	tela	o	seguinte	menu	de	opções e	leia	
os	três	lados	de	um	triângulo:
1	– Informe área	do	triangulo.
2	– Informar	o	tipo	de	triângulo.
3	– Imprima	os	lados	do	triângulo	em	ordem	crescente.
Na	primeira	opção,	o	programa	deve	calcular	e	imprimir	na	tela	a	área	do	triângulo,	a	
segunda	deve-se	informar	se	o	triângulo	é	triângulo	retângulo,	obtusângulo	ou	
acutângulo	e	finalmente,	na	terceira opção,	imprimir	os	lados	do	triângulo	em	ordem	
crescente.*/

#include<iostream>
#include<math.h>
using namespace std;
main()
{
	
        //Declaração de variaveis
        float l1, l2, l3, area, soma, aux;
        int opc;
       	
        setlocale(LC_ALL,"");           //Dev C++
        cout<<"\nEscolha uma das opções abaixo: ";
        cout<<"\n\t1 - Área\n\t2 - tipo de triangulo\n\t3 - Ordenar os lados em ordem crescente: ";
        cout<<"\n\tOpção: ";
        cin>>opc;
       	
        if (opc>0 && opc<4)
        {
                cout<<"\n\nInforme os lados do triângulo: ";
                cin>>l1>>l2>>l3;
        }
        switch (opc)
        {
                case 1:
		soma = (11+12+13)/2;
		area = sqrt(soma*(soma-11)*(soma-12)*(soma-13));
		cout<<"\nA área do triângulo é: "<<area;
                 break;
                        
                case 2:
		if (l1*l1<l2*l2 + l3*l3)
		{
			cout<<"\n\nTriângulo acutangulo.";
		}
		else if (l1*l1>l2*l2 + l3*l3)
		{
			cout<<"\n\nTriângulo obtusangulo.";
		}
		else 
		{
			cout<<"\n\nTriângulo retângulo.";
		}
                        break;
                case 3:
		if (l1>l2 && l2>l3)
		{
			aux = l1;
			l1 = l3;
			l2 = l2;
			l3 = aux;
		}
                	if (l1>l3 && l3>l2)
                	{
                		aux = l1;
                		l1 = l2;
                		l2 = l3;
                		l3 = aux;
		}
                	if (l2>l1 && l1>l3)
                	{
                		aux = l2;
                		l2 = l1;
                		l1 = l3;
                		l3 = aux;
		}
                	if (l2>l3 && l3>l1)
                	{
                		aux = l2;
                		l1 = l1;
                		l2 = l3;
                		l3 = aux;
		}
                	if (l3>l1 && l1>l2)
                	{
                		aux = l1;
                		l1 = l2;
                		l2 = aux;
                		l3 = l3;
		}
                	if (l3>l2 && l2>l1)
                	{
                		l1 = l1;
                		l2 = l2;
                		l3 = l3;
		}
		cout<<"\nOs lados do triângulo em ordem crescente são: "<<l1<<" , "<<l2<<" e "<<l3;
  break;
                default:
                        	cout<<"\nOpção inválida!! Informar uma opção correta.";
                break;
		}
}
