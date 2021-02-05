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

int ordemAlfabetica (char nome[], char nome1[]);


int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	cliente registro[max], orga;
	int indice, resultado;
	indice = 0;
	int opc;
	
	ifstream armazenamento ("clientes.dat", ios :: in);	//Abre o clientes que contém os dados dos clientes
	if ( !armazenamento )
    {
        cerr << "Erro na abertura do arquivo\n" << endl;
        exit( 1 );
    }

    for (indice=0; indice<max; indice ++)
    {
    	//Armazena o conteudo do arquivo nas variaveis do struct
    	armazenamento >> registro[indice].conta >> registro[indice].nome >> registro[indice].saldo;
	}
	
	armazenamento.close();
	
	//Parte que cuida da ordenação e armazenamento nos arquivos
	do
	{
		cout<<"\nDeseja ver o dado dos clientes: \n(1)Para em ordem do n° da conta \n(2)Para em ordem do saldo \n(3)Para ordem alfabetica \n( )Qualquer outro número para sair \nOpção: ";
		cin>>opc;
		//system ("cls");	//
		
		switch (opc)
		{
		
			case 1:
			{
				ofstream ordemConta ("ordemConta.dat", ios :: out);	
				if (!ordemConta)
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
							
				ifstream leituraConta ("ordemConta.dat", ios:: in);
				if (!leituraConta)
				{
					cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi deletado";
					exit(1);
				}
				indice = 0;
				while (indice<max)
				{
					leituraConta>>registro[indice].conta>>registro[indice].nome>>registro[indice].saldo;
					cadastro(registro[indice]);
					indice++;
				};
				leituraConta.close();
			} break;
				
			case 2:
			{
				ofstream ordemSaldo ("ordemSaldo.dat", ios :: out);
				
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
							
				ifstream leituraSaldo ("ordemSaldo.dat", ios :: in);
				
				if (!ordemSaldo)
				{
					cerr<<"\nHouve um erro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
					exit(1);
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
			}break;

			case 3:
			{		
				ofstream ordemNome ("ordemNome.dat", ios :: out);
				
				if (!ordemNome)
				{
					cerr<<"\nErro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
					exit(1);
				}
				
				for (indice=0; indice<max; indice++)
				{
					for (int aux = indice; aux<max; aux++)
					{
						resultado=ordemAlfabetica(registro[indice].nome, registro[aux].nome);
						if (resultado>0)
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
				
				ifstream leituraNome ("ordemNome.dat", ios :: in);
				
				if (!leituraNome)
				{
					cerr<<"\nErro ao abrir o arquivo, verifique o diretorio ou se o arquivo não foi excluido.";
					exit(1);
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
			}break;
		}
			
	}while (opc>=1&&opc<=3);
	
	return 0;	
}

void cadastro(cliente parametro)
{
	cout<<parametro.conta<<"\t"<<parametro.nome<<"\t"<<parametro.saldo<<endl;
}

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



















