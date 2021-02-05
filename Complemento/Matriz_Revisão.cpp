#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	setlocale(LC_ALL,"");
	
	int const max=4;
	short int matA[max][max], matB[max][max], l,c, k, j;
	j=0;
	k=0;
	
	//Leitura
	
	cout<<"Digite os elementos da Matriz:\n Matriz A:"<<endl;
	
	//Processamento de Dados
	for(l=0; l<max ; l++)
		for(c=0;c<max;c++)
		{
			cout<<"A["<<l<<','<<c<<"]="; 
			cin>>matA[l][c];
		}
		
	//Impressao da Matriz
	
	cout<<"\n\n\n";
	cout<<"\nImpressao no formato matriz:\nMatriz A:\n";
	
	for(l=0; l<max ; l++)
	{
		cout<<'|'<<setw(0);
		for(c=0;c<max;c++)
		{
			cout<<matA[l][c]<<'\t';
		}
		cout<<'|'<<setw(0);
		cout<<endl;
	}
	
	cout<<"\n\n\n";
	
	//Matriz transposta
	cout<<"\n A matirz transposta � : \n";
	for(l=0;l<max;l++)
	{
		cout<<'|'<<setw(0);
		for(c=0;c<max;c++)
		{
			matB[l][c]=matA[c][l];
			cout<<matB[l][c]<<'\t';
		}
		cout<<'|';
		cout<<endl;
	}
	
	cout<<"\n\n\n";
	
	//Diagonal Principal com 1 for
	cout<<"\n A diagonal principal �: ";
	for (l=0;l<max;l++)
	{
		cout<<"\t";
		cout<<matA[l][l]<<setw(0);
	}
	
	cout<<"\n\n\n";
	
	//Verifica��o se a matriz � triangular inferior
	for (l=0; l<max; l++)
	{
		for (c=0; c<max; c++)
		{
			if (c>l)
			{
				if (matA[l][c]==0)
				{
					k=0;
				}
				else
				{
					j++;
				}
				
			}
		}
	}
	if ((k==0) && (j==0))
	{
		cout<<"\n\n\n\nA matriz � triangular inferior!.";
	}
	else
	{
		cout<<"\nA matriz n�o � triangular inferior!.";
	}
		

}
