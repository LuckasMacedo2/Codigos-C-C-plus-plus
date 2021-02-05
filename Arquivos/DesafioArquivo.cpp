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

#include <cstdio>

struct cliente
{
	int conta;
	char nome[30];
	double saldo;
};

#define max 5

void cadastro(cliente parametro);
//int ordemAlfabetica (char nome, char nome1);


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	cliente registro[max], orga;
	int indice;
	indice = 0;
	int opc;
		
	ofstream cadastramento ("clientes.dat", ios :: out);
	
	if (!cadastramento)
	{
		cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi deletado";
		exit(1);
	}	
	
	while (indice<max)
	{
		cout<<"\nInforme o número da conta: ";
		cin>>registro[indice].conta;
		cout<<"\nInforme o nome do cliente: ";
		cin>>registro[indice].nome;
		cout<<"\nInforme o saldo do mesmo: ";
		cin>>registro[indice].saldo;
		cadastramento<<registro[indice].conta<<' '<<registro[indice].nome<<' '<<registro[indice].saldo<<setprecision(2)<<' ';
		indice++;
		//system ("cls");	//
	};

	ifstream leitura ("clientes.dat", ios :: in);
	
	if (!leitura)
	{
		cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi deletado";
		exit(1);
	}
	
	indice=0;
	
	cout<<"\nCONTA \tNOME \tSALDO"<<endl;
	while (indice<max)
	{
		leitura>>registro[indice].nome>>registro[indice].conta>>registro[indice].saldo;
		cadastro(registro[indice]);
		indice++;
	};
	
	leitura.close();
	
	
	do
	{
		cout<<"\nDeseja ver o dado dos clientes: \n(1)Para em ordem do n° da conta \n(2)Para em ordem do saldo \n(3)Para ordem alfabetica \n( )Qualquer outro número para sair \nOpção: ";
		cin>>opc;
		system ("cls");	//
	
	
		if (opc==1)
		{
			ofstream ordemConta ("ordemConta.dat", ios :: out);	
			if (!ordemConta)
			{
				cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi deletado";
				exit(1);
			}

			
			ifstream leituraConta ("ordemConta.dat", ios:: in);
			if (!leituraConta)
			{
				cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi deletado";
				exit(1);
			}
			
			for (indice=0; indice<max; indice++)
			{
				for (int aux = indice; aux<max; aux++)
				{
					if (registro[indice].conta<registro[aux].conta)
					{
						orga = registro[indice];
						registro[indice]=registro[aux];
						registro[aux]=orga;
					}
					
				}
			}
			
			for (indice=max; indice>=0; indice--)
			{
				ordemConta<<registro[indice].conta<<' '<<registro[indice].nome<<' '<<registro[indice].saldo<<' ';
			}
			
			cout<<"\nCONTA \tNOME \tSALDO"<<endl;
			indice = 0;
			while (indice<max)
			{
				leituraConta>>registro[indice].conta>>registro[indice].nome>>registro[indice].saldo;
				cadastro(registro[indice]);
				indice++;
			};
			leituraConta.close();
		}
			
		if (opc==2)
		{
			ofstream ordemSaldo ("ordemSaldo.dat", ios :: out);
			
			if (!ordemSaldo)
			{
				cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
				exit(1);
			}
			
			ifstream leituraSaldo ("ordemSaldo.dat", ios :: in);
			
			if (!ordemSaldo)
			{
				cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
				exit(1);
			}
			
			for (indice=0; indice<max; indice++)
			{
				for (int aux = indice; aux<max; aux++)
				{
					if (registro[indice].saldo<registro[aux].saldo)
					{
						orga = registro[indice];
						registro[indice]=registro[aux];
						registro[aux]=orga;
					}
					
				}
			}
			
			for (indice=max; indice>=0; indice--)
			{
				ordemSaldo<<registro[indice].conta<<' '<<registro[indice].nome<<' '<<registro[indice].saldo;
			}
			indice=0;
			
			cout<<"CONTA \tNOME \t SALDO"<<endl;
			while (indice<max)
			{
				leituraSaldo>>registro[indice].conta>>registro[indice].nome>>registro[indice].saldo;
				cadastro(registro[indice]);
				indice++;	
			};
			
			leituraSaldo.close();
		}

		if (opc==3)
		{		
			ofstream ordemNome ("ordemNome.dat", ios :: out);
			
			if (!ordemNome)
			{
				cerr<<"\nErro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
				exit(1);
			}
			
			ifstream leituraNome ("ordemNome.dat", ios :: in);
			
			if (!leituraNome)
			{
				cerr<<"\nErro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
				exit(1);
			}
			
			for (indice=0; indice<max; indice++)
			{
				for (int aux = indice; aux<max; aux++)
				{
					//resultado=ordemAlfabetica(registro[indice].nome[i], registro[aux].nome[i])
					if (strcmp(registro[indice].nome, registro[aux].nome)>0)
					{
						orga = registro[indice];
						registro[indice]=registro[aux];
						registro[aux]=orga;

					}
				}
				
			}
			
			indice = 0;
			
			for (indice=max; indice>=0; indice--)
			{
				ordemNome<<registro[indice].conta<<' '<<registro[indice].nome<<' '<<registro[indice].saldo;
			}
			
			indice=0;
			
			cout<<"CONTA \tNOME \t SALDO"<<endl;
			while (indice<max)
			{
				leituraNome>>registro[indice].conta>>registro[indice].nome>>registro[indice].saldo;
				cadastro(registro[indice]);
				indice++;	
			};
			
			leituraNome.close();
			
		}
	}while (opc>=1&&opc<=3);
	
	return 0;	
}

void cadastro(cliente parametro)
{
	cout<<parametro.conta<<"\t"<<parametro.nome<<"\t"<<parametro.saldo<<endl;
}

/*int ordemAlfabetica (char nome[], char nome1[])
{
	int resultado;
//	nome=toupper(nome);
//	nome1=toupper(nome1);
	
	resultado=strcmp(nome,nome1);
	
	return resultado;
	
}*/



















