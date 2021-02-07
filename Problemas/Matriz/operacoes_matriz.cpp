/*Desenvolver um sistema, contendo um menu de escolha, para ler duas
matrizes de ordem 3 e executar as operações matriciais abaixo:
1 - Calcular a subtração das duas matrizes;
2 - Calcular a multiplicação das duas matrizes;
3 - Determinar se as duas matrizes são triangular superior;
4 - Determinar se as duas matrizes são triangular inferior;
5 - Determinar se as duas matrizes são simétrica;
6 - Determinar se as duas matrizes são anti-simétrica;
7 - Determinar se as duas matrizes são iguais;
8 - Determinar se as duas matrizes são ortogonal;*/

#include <iostream>
#include<math.h>
#include<stdlib.h>
#define col 3
#define lin 3
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	int m1[lin][col], m2[lin][col], res[lin][col], i, j, es, l, k, aux;
	float soma;
	
	do
	{
		aux=0;
		soma=0;
		k=0;
		l=0;
		do
		{
			cout<<"\nDigite a opção desejada Para a operação com as Matrizes \n\t1)Subtração \n\t2)Multiplicação  \n\t3)Determinar se são Triangulares Superiores";
			cout<<"\n\t4)Determinar se são triangulares inferiores \n\t5)Determinar se são Simetricas \n\t6)Determinar se são anti-simetricas";
			cout<<"\n\t7)Determinar se são iguais \n\t8)Determinar se são Ortogonais \n\t9)Sair \n\tOpção: ";
			cin>>es;
		} while (es<=0||es>9);
		system ("clear");
		//system ("cls");
		
		if (es<9)
		{
			for (i=0; i<lin; i++)
			{
				for (j=0; j<col; j++)
				{
					//system ("clear");
					//system ("cls");
					cout<<"\nDigite o valor de A["<<i<<"]["<<j<<"] ";
					cin>>m1[i][j];	
				}		
			}
			for (i=0; i<lin; i++)
			{
				for (j=0; j<col; j++)
				{
					//system ("clear");
					//system ("cls");
					cout<<"\nDigite o valor de B["<<i<<"]["<<j<<"] ";
					cin>>m2[i][j];	
				}	
			}
			
			switch (es)
			{
				case 1:
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							res[i][j]=(m1[i][j]-m2[i][j]);
							cout<<"Resultado "<<res[i][j]<<"\t";			
						}
							cout<<"\n";
					}
				break;
					
				case 2:
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							for (l=0; l<col; l++)
							{
								soma = soma + (m1[i][l]*m2[l][j]);	
							}
							res[i][j]=soma; 
							soma=0;			
						}	
					}
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							cout<<"["<<i<<"]["<<j<<"] = "<<res[i][j]<<"\t";
						}
						cout<<"\n";
					}
		
				break;
						
				case 3:
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i>j)
							{
								if (m1[i][j]==0)
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nA matriz A é triangular superior";
					}
					else
					{
						cout<<"\nA matriz A não é triangular superior";
					}
						
					l=0;	
					k=0;
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i>j)
							{
								if (m2[i][j]==0)
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nA matriz B é triangular superior";
					}
					else
					{
						cout<<"\nA matriz B não é triangular superior";
					}
				break;
					
				case 4:
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i<j)
							{
								if (m1[i][j]==0)
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nA matriz A é triangular inferior";
					}
					else
					{
						cout<<"\nA matriz A não é triangular inferior";
					}
						
					l=0;
					k=0;
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i<j)
							{
								if (m2[i][j]==0)
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nA matriz B é triangular inferior";
					}
					else
					{
						cout<<"\nA matriz B não é triangular inferior";
					}
				break;
				
				case 5:
					k=0;
					l=0;
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i!=j)
							{
								if (m1[i][j]==m1[j][i])
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nA matriz A é simetrica";
					}
					else
					{
						cout<<"\nA matriz A não é simetrica";				
					}
					
					l=0;
					k=0;
					
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i!=j)
							{
								if (m2[i][j]==m2[j][i])
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nA matriz B é simetrica";
					}
					else
					{
						cout<<"\nA matriz B não é simetrica";				
					}			
				break; 
				
				case 6:
					soma=0;
					l=0;
					k=0;
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i==j)
							{
								if ((m1[i][j]==0))
								{
									k=0;	
								}	
								else
								{
									soma++;
								}
							}
							else
							{
								if (m1[i][j]==-(m1[j][i]))	
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((l==0) && (k==0) && (soma==0))
					{
						cout<<"\nAs Matrizes A é anti simetricas";
					}			
					else
					{
						cout<<"\nAs Matrizes A não é anti simetricas";
					}
					
					soma=0;
					l=0;
					k=0;
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if(i==j)
							{
								if ((m2[i][j]==0))
								{
									k=0;	
								}	
								else
								{
									soma++;
								}
							}
							else
							{
								if (m2[i][j]==-(m2[j][i]))	
								{
									k=0;
								}
								else
								{
									l++;
								}
							}	
						}
					}
					if ((l==0) && (k==0) && (soma==0))
					{
						cout<<"\nAs Matrizes B é anti simetricas";
					}			
					else
					{
						cout<<"\nAs Matrizes B não é anti simetricas";
					}
					
				break;
				case 7:
					k=0;
					l=0;
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if (m1[i][j]==m2[i][j])
							{
								k=0;
							}
							else
							{
								l++;
							}
						}
					}
					if ((k==0)&&(l==0))
					{
						cout<<"\nAs Matrizes A e B são iguais.";
					}
					else
					{
						cout<<"\nAs Matrizes A e B são diferentes";
					}
				break;
				
				case 8:
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							for (l=0; l<col; l++)
							{
								soma = soma + (m1[i][l]*m2[l][j]);	
							}
							res[i][j]=soma; 
							soma=0;			
						}	
					}
					for (i=0; i<lin; i++)
					{
						for (j=0; j<col; j++)
						{
							if (i==j)
							{
								if (res[i][j]==1)
								{
									k=0;
								}
								else
								{
									l++;
								}
							}
							else
							{
								if (res[i][j]==0)
								{
									k=0;
								}
								else
								{
									aux++;
								}
							}
						}
					}
					if ((k==0)&&(l==0)&&(aux==0))
					{
						cout<<"\nAs matrizes A e B são ortogonais";
					}
					else
					{
						cout<<"\nAs matrizes A e B não são ortogonais";
					}
				break;	
			}
		}			
	} while(es<9);
}
