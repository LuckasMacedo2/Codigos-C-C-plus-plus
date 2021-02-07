/*Fazer um algoritmo para calcular e escrever a área de um polígono regular de N lados inscrito numa circunferência de raio R.
O número de polígonos será fornecido na primeira linha de dados e nas linhas seguintes serão fornecidos os valores de N e R*/
#include <iostream>
#include<math.h>
using namespace std;
main()
{
	int n, n1, x;
	float apotema, perimetro, lado, medida, raio;
	double area;
	x=0;
	
	cout<<"\nInforme quantos poligonos deseja calcular a área: ";
	cin>>n;
	
	do
	{
		cout<<"\nInforme o número de lados do poligono: ";
		cin>>lado;
		cout<<"\nDigite o raio do circulo: ";
		cin>>raio;
		
		apotema = sqrt((pow(lado/2,2))-(pow(raio,2)));
		area = (lado*apotema)/2;
		
		cout<<"\nA área do poligono de "<<lado<<" lados é "<<area<<endl;
		
	} while (x<=n);	
}
