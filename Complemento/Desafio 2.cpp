#include <iostream>
#include <climits>
using namespace std;
main ()
{
	setlocale(LC_ALL,"");
	int posi, valor, p, sinal, tam, pos;
	bool resul;
	string num;
	cout<<"\nLimite númerico Inteiro positivo "<<INT_MAX;
	cout<<"\nLimite númerico Inteiro negativo "<<INT_MIN;
	
	do
	{
		cout<<"\nDigite o número inteiro entre -2147483647 e 2147483648 ";
		getline (cin, num);
		
		resul = true;
		pos=0;
		sinal = 1;
		tam = num.length();
		valor=0;
		
		if (num[0]=='-')
		{
			pos++;
			sinal=sinal*(-1);
		}
		if (num[0]=='+')
		{
			pos++;
		}
		p=pos;
		
		while ((p<tam)&&(resul==true))
		{
			if (num[p]<48||num[p]>57)
			{
				resul=false;
			}
			p++;			
		}
		
		if (resul==true)
		{
			while (num[pos]=='0')
			{
				cout<<"\ntam "<<tam;
				pos++;
				if (tam-pos > 10)
				{
					resul = false;
				}
				else
				{
					if (num[pos+1]-48==1 && num[pos+2]-48>4)
					{
						resul = false;
					}
					else
					{
						if (num[pos+2]-48==4 && num[pos+3]-48>7)
						{
							resul = false;
						}
						else
						{
							if (num[pos+3]-48==7 && num[pos+4]-48>4)
							{
								resul = false;
							}
							else
							{
								if (num[pos+4]-48==4 && num[pos+5]-48>8)
								{
									resul = false;
								}
								else
								{
									if (num[pos+5]-48==8 && num[pos+6]-48>3)
									{
										resul = false;
									}
									else
									{
										if (num[pos+6]-48==3 && num[pos+7]-48>6)
										{
											resul = false;
										}
										else
										{
											if (num[pos+7]-48==6 && num[pos+8]-48>4)
											{
												resul = false;
											}
											else
											{
												if (num[pos+8]-48==4 && num[pos+9]>7)
												{
													if (sinal>0||num[pos+9]-48>8)
													{
														resul=false;
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
			}		
		}
	}while (resul==false);
	while (pos<tam)
	{
		valor = valor*10+num[pos]-48;
		pos++;
	}
	valor = valor * sinal;
	cout<<"\nO número digitado em String convertido para Inteiro dentro do limite definido "<<endl;
	cout<<"\n: "<<valor<<endl;
}
