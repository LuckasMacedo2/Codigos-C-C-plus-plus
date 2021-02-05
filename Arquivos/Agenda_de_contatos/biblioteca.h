#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;
using std::cin;

#include <fstream> 
using std::ifstream;
using std::ofstream;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <string.h>
using std::string;


#include <cstdlib>
using std::exit;

#include <stdio.h>

struct registro 
{
		char nome[30];
		long long int num;
		string email;

		int ordemAlfabetica (char nome[], char nome1[])
		{
			int resultado;
			char nome2[30], nome3[30];
		
			strcpy (nome2,nome);
			strcpy (nome3,nome1);
			
			for (int i=0; nome[i] != '\0'; i++)
			{
				nome2[i]=toupper(nome2[i]);
				nome3[i]=toupper(nome3[i]);
			}	
				
			
			resultado=strcmp(nome2,nome3);
			
			return resultado;
		}
		
		void exibir (registro param)
		{
			cout<<setw(10)<<param.nome<<setw(10)<<"\t"<<param.num<<setw(20)<<"\t"<<param.email<<endl;
		}
		
};
