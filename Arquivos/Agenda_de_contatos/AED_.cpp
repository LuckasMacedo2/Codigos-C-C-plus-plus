#include "biblioteca.h"
int main ()
{
	setlocale(LC_ALL,"portuguese");
	
	
	int opc, sair, i, cont, aux, resultado;
	char nome[30];
	registro orga, agenda[100], funcao;

	
	do
	{	
		cout<<"\n\t***Informe a opção desejada***";
		cout<<"\n\t(1)Apagar a agenda anterior e criar uma nova."
		<<"\n\t(2)Informar um novo contato.\n\t(3)Ver agenda Telefonica.\n\t(4)Procurar por um contato.\n\t(5)Editar um contato.\n\t(0)Para sair."
		<<"\n\tOpção: ";
		cin>>opc;
		system ("cls");
		//system ("clear");
		if (opc !=1)
		{
			ifstream leituraArmazenar ("contato.dat", ios :: in);
			if (!leituraArmazenar)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado\nOu crie uma nova agenda ^^: ";
				exit (1);
			}
			//contando a quantidade de elementos armazenados em contato
			for (i=0; !leituraArmazenar.eof(); i++)
			{
				leituraArmazenar >> agenda[i].nome >> agenda[i].num >> agenda[i].email;
			}
			cont=i-1;
			leituraArmazenar.close();
		}
		
		if (opc==1)
		{
			ofstream criarAgenda ("contato.dat", ios :: out);
			if (!criarAgenda)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado: ";
				exit (1);
			}
				
			i=0;
			do
			{
				cout<<"\nInforme o nome: ";
				cin>>agenda[i].nome;
				cout<<"\nInforme o número: ";
				cin>>agenda[i].num;
				cout<<"\nInforme o E-mail: ";
				cin>>agenda[i].email;
				criarAgenda<<agenda[i].nome<<"\n"<<agenda[i].num<<"\n"<<agenda[i].email<<endl;					
				i++;
				cout<<"\nSe deseja sair digite -1, senão informe qualquer número: ";
				cin>>sair;
				system ("cls");
				//system ("clear");
			}while (sair!=-1);
			cont=i-1;
				
			ifstream leituraAgenda ("contato.dat", ios :: in);
			if (!criarAgenda)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado: ";
				exit (1);
			}
				
			i=0;
			cout<<"\n\n";
			cout<<setw(10)<<"NOME"<<setw(20)<<"\tNúmero"<<setw(30)<<"\tE-Mail"<<endl;
			while (i<cont)
			{
				leituraAgenda>>agenda[i].nome>>agenda[i].num>>agenda[i].email;
				funcao.exibir(agenda[i]);
				i++;
			}
			leituraAgenda.close();
		}
			
		if (opc==2)
		{
			
			ofstream novoContato ("contato.dat",ios::out);
			if (!novoContato)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado: ";
				exit (1);
			}
			
			i=0;
			do
			{
				cout<<"\nInforme o nome: ";
				cin>>agenda[cont+i].nome;
				cout<<"\nInforme o número: ";
				cin>>agenda[cont+i].num;
				cout<<"\nInforme o E-mail: ";
				cin>>agenda[cont+i].email;					
				i++;
				cout<<"\nSe deseja sair digite -1, senão informe qualquer número: ";
				cin>>sair;
				system ("cls");
				//system ("clear");
			}while (sair!=-1);	
				
			cont=cont+i;
			
			for (i=0; i<cont; i++)
			{
				novoContato<<agenda[i].nome<<"\n"<<agenda[i].num<<"\n"<<agenda[i].email<<endl;
			}
			
		}
		if (opc == 3)
		{
			ofstream verContato ("verContato.dat", ios :: out);
			if (!verContato)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado.";
				exit (1);	
			}
			
			for (i=0; i<cont; i++)
			{
				for (aux=i; aux<cont; aux++)
				{
					resultado=funcao.ordemAlfabetica(agenda[i].nome, agenda[aux].nome);
					if (resultado>0)
					{
						orga = agenda[i];
						agenda[i]=agenda[aux];
						agenda[aux]=orga;
					}
				}
			}
				
			for (i=0; i<cont; i++)
			{
				verContato<<agenda[i].nome<<"\n"<<agenda[i].num<<"\n"<<agenda[i].email<<"\n";	
			}
			
			ifstream leituraVer ("verContato.dat", ios :: in);
			if (!leituraVer)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado: ";
				exit (1);	
			}				
				
			i=0;
			cout<<"\n\n";
			cout<<setw(10)<<"NOME"<<setw(20)<<"\tNúmero"<<setw(30)<<"\tE-Mail"<<endl;
			while (i<cont)
			{
				leituraVer>>agenda[i].nome>>agenda[i].num>>agenda[i].email;
				funcao.exibir(agenda[i]);
				i++;
			}
			leituraVer.close();		
		}
			
		if (opc == 4)
		{
			cout<<"\nInforme o nome que deseja procurar: ";
			cin>>nome;
			
			for (i=0; i<cont; i++)
			{
				resultado = funcao.ordemAlfabetica(nome, agenda[i].nome);
				if (resultado==0)
				{
					cout<<"\nNome: "<<agenda[i].nome<<"\nNúmero: "<<agenda[i].num<<"\nE-mail: "<<agenda[i].email;
					i=cont+1;
				}
			}	
		}			
		
		if (opc==5)
		{
			cout<<"\nInforme o nome do contato que deseja alterar: ";
			cin>>nome;
			
			for (i=0; i<cont; i++)
			{
				resultado = funcao.ordemAlfabetica(nome, agenda[i].nome);
				if (resultado==0)
				{
					cout<<"\nNome: "<<agenda[i].nome<<"\nNúmero: "<<agenda[i].num<<"\nE-mail: "<<agenda[i].email;
					cout<<"\nInforme o novo nome: ";
					cin>>agenda[i].nome;
					cout<<"\nInforme o novo número telefonico: ";
					cin>>agenda[i].num;
					cout<<"\nInforme o novo E-mail: ";
					cin>>agenda[i].email;
					i=cont+1;
				}
			}
			ofstream alterar ("contato.dat", ios :: in);
			if (!alterar)
			{
				cerr << "\nHouve um Erro, verifique o diretorio ou se o arquivo foi deletado: ";
				exit (1);	
			}				
			for (i=0; i<cont; i++)
			{
				alterar<<agenda[i].nome<<"\n"<<agenda[i].num<<"\n"<<agenda[i].email<<"\n";
			}	
		}
	}while (opc!=0);
}

