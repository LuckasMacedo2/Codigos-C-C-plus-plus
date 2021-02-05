//
//  startFuncao.cpp
//  
//
//  Created by Nagela Bitar & Pedro Valle on 25/08/16.
//
//
/* Elaborar um programa para:
 
 a) Exibir os seguintes menus na tela:
 
    Estado civil:
    (1) Solteiro
    (2) Relacionamento sério
    (3) Casado
    (4) Outros
 
    Escolaridade:
    (1) Analfabeto
    (2) Ensino fundamental completo
    (3) Ensino médio completo
    (4) Superior completo
 
 b) Receber e validar os dados de 30 pessoas;
 
 c) Calcular e exibir quantos solteiros tem curso superior completo.
 */

#include <iostream>
using namespace std;


int validacao ()
{
	int opcao;		//variavel local
	cin>>opcao;
	while (opcao<1 || opcao>4)
	{
		cout<<"\nOpção Invalida, Digite novamente: ";
		cin>>opcao;
	}
	return opcao;	//Retorna para opcao do int main ()
}

//Para não precisar validar toda hora.


int main()
{
	setlocale(LC_ALL,"portuguese");
    const int qtde = 3;   //Const não pode-se alterar o valor.
    int estadoCivil, escolaridade, solteiroSuperior, nPessoas, opcao;
    solteiroSuperior = 0;
    cout<<"\nEntre com os dados das "<<qtde<<" pessoas, conforme as opções listadas:\n";
    for(nPessoas=1; nPessoas<=qtde; nPessoas++){
        cout<<"\nEstado civil da "<<nPessoas<<"ª pessoa:\n";
        cout<<"(1) Solteira\n";
        cout<<"(2) Relacionamento sério\n";
        cout<<"(3) Casada\n";
        cout<<"(4) Outros\n";
        cout<<"   Opção [ ]\b\b";
        opcao=validacao();

        estadoCivil = opcao;
        cout<<"\nEscolaridade da "<<nPessoas<<"ª pessoa:\n";
        cout<<"(1) Analfabeta\n";
        cout<<"(2) Ensino fundamental completo\n";
        cout<<"(3) Ensino médio completo\n";
        cout<<"(4) Superior completo\n";
        cout<<"   Opção [ ]\b\b";
       	opcao=validacao();

        escolaridade = opcao;
        if(estadoCivil==1 && escolaridade==4)
            solteiroSuperior++;
    }
    cout<<"\nAs pessoas solteiras com curso superior completo são em número de "<<solteiroSuperior<<endl<<endl;
}
