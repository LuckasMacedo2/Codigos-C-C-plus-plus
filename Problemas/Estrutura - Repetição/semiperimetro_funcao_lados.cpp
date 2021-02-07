/*Para um polígono regular inscrito numa circunferência, quanto maior o número de lados do polígono, mais seu perímetro se
aproxima do comprimento da circunferência. Se o número de lados for muito grande e o raio da circunferência for unitário, o
semiperímetro do polígono terá um valor muito próximo de π.
Fazer um algoritmo que escreva uma tabela do semiperímetro em função do número de lados, para polígonos regulares
inscritos, numa circunferência de raio unitário. O número de lados deverá variar de 5 a 100 de 5 em 5.*/

#include <iostream>
#include<math.h>
using namespace std;
main()
{
	int n, n1, x;
	float apotema, perimetro, lado, medida, raio, lado1;
	double area;
	x=0;
		
	for (lado=5; lado<=100; lado=lado+5)
	{	
		lado1 = (lado1+lado)/2;
		apotema = sqrt((pow(lado1,2))-(pow(raio,2)));
		area = (lado1*apotema)/2;
		cout<<"\nA área do poligono de "<<lado<<" lados é "<<area<<endl;
	}
}
