#include <iostream>
using namespace std;
int main ()
{
	float resul, n;
	
	resul=1;
	
	for (n=60; n>54; n--)
	{
		if (n-54==0)
		{
			n=55;
		}
		resul = resul*(n/(n-54));
	}
	cout<<"\nA probabilidade é "<<resul;	
}
