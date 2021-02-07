/*
Cinema
*/

#include <iostream>
#include <stdlib.h>
#define l 9
#define c 9
using namespace std;
main()
{
	setlocale(LC_ALL,"");
	char vet1[l][c], vet2[l][c], m, v1[l], es;
	int i, j, n, m1, opc, tipo;
	float ing, totalA, totalB, nA, nB;
	
	do
	{
		cout<<"\nInforme o valor do ingresso: ";
		cin>>ing;
		system("clear");
		//system("cls");
	}while (ing<0);
	
	totalA=0; totalB=0; nA=0; nB=0;
	
	//Gerar os espaços em Branco
	for (i=0; i<=l; i++)
	{
		for (j=0; j<=c; j++)
		{
			vet1[i][j]=' ';
		}
	}
	for (i=0; i<=l; i++)
	{
		for (j=0; j<=c; j++)
		{
			vet2[i][j]=' ';
		}
	}
	
	//Coordenadas da matriz
	v1[0]='A'; v1[1]='B'; v1[2]='C'; v1[3]='D'; v1[4]='E'; v1[5]='F'; v1[6]='G'; v1[7]='H'; v1[8]='I'; v1[9]='J';
	
	do
	{
		do 
		{
			cout<<"\n***Informe a Opção desejada***";
			cout<<"\n\t(1) Para Mostrar os assentos \n\t(2) Para Venda de Ingressos \n\t(3) Para Apresentar o total arrecado até o momento \n\t(4) Para mostrar o total geral e sair";
			cout<<"\n\tOpção: ";
			cin>>opc;
			system("clear");
			//system("cls");			
		}while(opc<1||opc>4);
		
		switch (opc)
		{
			case 1:
				do
				{
					cout<<"\nMostrar quais assentos da sessão das 18:00 (A) ou da sessão das 21:00(B)? ";
					cin>>es;
					cin.ignore(); 		//ignorar letras minusculas
					es=toupper (es); 	//ignorar letras minusculas
					system("clear");
					//system("cls");
				}while (es!='A' && es!='B');
				
				//Matriz da sessão das 18:00
				if (es=='A')
				{
					cout<<"\n";
					cout<<"\n  0 \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9";
					cout<<"\n";
					for (i=0; i<=l; i++)
					{
						cout<<v1[i];
						for (j=0; j<=c; j++)
						{
								cout<<" "<<vet1[i][j]<<"\t";	
						}
							cout<<"\n";
					}
				}
				
				//Matriz da sessão das 21:00
				else
				{
					cout<<"\n";
					cout<<"\n  0 \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9";
					cout<<"\n";
					for (i=0; i<=l; i++)
					{
						cout<<v1[i];
						for (j=0; j<=c; j++)
						{
							cout<<" "<<vet2[i][j]<<"\t";	
						}
						cout<<"\n";
					}
				}
			break;
			
			case 2:
				do
				{
					cout<<"\nInforme o tipo da entrada Inteira (1) ou Meia (2): ";
					cin>>tipo;
					system("clear");
					//system("cls");	
				}while (tipo<1 || tipo>2);
				do
				{
					cout<<"\nInforme a sessão (A) para sessão das 18:00 (B) para a sessão das 21:00 ";
					cin>>es;
					cin.ignore(); 		
					es=toupper (es); 
					system("clear");
					//system("cls");
				}while(es!='A' && es!='B');
				
				if (es=='A')
				{
					nA++;
					cout<<"\nInforme os valor da coluna para a coordenada da poltrona: ";
					cin>>m;
					cin.ignore(); 		
					m=toupper (m);
					//Para processar as coordenadas
					if (m=='A')
					{
						m1=0;
					}
					else
					{
						if (m=='B')
						{
							m1=1;
						}
						else
						{
							if (m=='C')
							{
								m1=2;
							}
							else
							{
								if (m=='D')
								{
									m1=3;
								}
								else
								{
									if (m=='E')
									{
										m1=4;
									}
									else
									{
										if (m=='F')
										{
											m1=5;
										}
										else
										{
											if (m=='G')
											{
												m1=6;
											}
											else
											{
												if (m=='H')
												{
													m1=7;
												}
												else
												{
													if (m=='I')
													{
														m1=8;
													}
													else
													{
														if (m=='J')
														{
															m1=9;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					cout<<"\nInforme o valor da linha para a coordenada da poltrona ";
					cin>>n;
					
					//Impressão da matriz da sessão das 18:00
					cout<<"\n";
					cout<<"\n  0 \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9";
					cout<<"\n";
					for (i=0; i<=l; i++)
					{
						cout<<v1[i];
						for (j=0; j<=c; j++)
						{
							if ((m1==i)&&(n==j))
							{
								vet1[i][j]='X';
							}
							cout<<" "<<vet1[i][j]<<"\t";	
						}
						cout<<"\n";
					}
					if (tipo==1)
					{
						totalA=totalA+ing;
					}
					else
					{
						if(tipo==2)
						{
							totalA=totalA+(ing/2);
						}
					}
				}
				else
				{
					nB++;
					cout<<"\nInforme os valor da coluna para a coordenada da poltrona: ";
					cin>>m;
					cin.ignore(); 		
					m=toupper (m);
					//Processamento das coordenadas
					if (m=='A')
					{
						m1=0;
					}
					else
					{
						if (m=='B')
						{
							m1=1;
						}
						else
						{
							if (m=='C')
							{
								m1=2;
							}
							else
							{
								if (m=='D')
								{
									m1=3;
								}
								else
								{
									if (m=='E')
									{
										m1=4;
									}
									else
									{
										if (m=='F')
										{
											m1=5;
										}
										else
										{
											if (m=='G')
											{
												m1=6;
											}
											else
											{
												if (m=='H')
												{
													m1=7;
												}
												else
												{
													if (m=='I')
													{
														m1=8;
													}
													else
													{
														if (m=='J')
														{
															m1=9;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					cout<<"\nInforme o valor da linha para a coordenada da poltrona ";
					
					//Impressão da Matriz da sessão das 21:00
					cin>>n;
					cout<<"\n";
					cout<<"\n  0 \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9";
					cout<<"\n";
					for (i=0; i<=l; i++)
					{
						cout<<v1[i];
						for (j=0; j<=c; j++)
						{
							if ((m1==i)&&(n==j))
							{
								vet2[i][j]='X';
							}
							cout<<" "<<vet2[i][j]<<"\t";	
						}
						cout<<"\n";
					}
					
					if (tipo==1)
					{
						totalB=totalB+ing;
					}
					else
					{
						if (tipo==2)
						{
							totalB=totalB+(ing/2);
						}
					}				
				}
			break;
			
			case 3:
				cout<<"\nO total arrecado até o momento na sessão das 18:00 (A), R$ "<<totalA<<" reais";
				
				cout<<"\nO total arrecado até o momento na sessão das 21:00 (B), R$ "<<totalB<<" reais";
			break;
			
			case 4:
				cout<<"\n"<<nA<<" pessoas assistiram o filme na sessão das 18:00 (A)\n";
				cout<<"\nO total arrecado na sessão das 18:00 (A), R$ "<<totalA<<" reais\n";
				cout<<"\n"<<nB<<" pessoas assistiram o filme na sessão das 21:00 (B)\n";
				cout<<"\nO total arrecado na sessão das 21:00 (B), R$ "<<totalB<<" reais\n";
				cout<<"\nO total arrecadado nas duas sessões foi de R$ "<<totalA+totalB<<" reais\n";
				
		}
	}while (opc!=4);
	
}

	
