//
//  ordena3valores.cpp
//  
//
//  Created by Nagela Bittar & Pedro Valle on 29/08/16.
//
//
/* Fazer um programa, em C++, que leia 3 valores inteiros, classifique os mesmos em ordem crescente e imprima o resultado.
 */

// Versao 3: solucao com funcao não elegante

#include <iostream>
using namespace std;
int troca (int & param1, int param2)	
{
	int aux;
	aux=param1;
	param1=param2;
	return aux;	//retorna o valor para troca.
}

int main(){
    // Declaracao das variaveis necessarias
    int n1, n2, n3;
    // Leitura dos valores
    cout<<"Digite 3 valores inteiros:\nPrimeiro valor = ";
    cin>>n1;
    cout<<"Segundo valor = ";
    cin>>n2;
    cout<<"Terceiro valor = ";
    cin>>n3;
    // Ordenacao dos valores
    if(n1>n2 || n1>n3)
        if(n2<n3){
			n2=troca(n1,n2);	//apelida n1 de param1 e troca o valor valor de n2 para o param2 
			cout<<"\nn1= "<<n1<<" , n2= "<<n2;}
        else{
			n3=troca(n1,n3);	//apelida n1 de param1 e troca o valor valor de n3 para o param2 
			cout<<"\nn1= "<<n1<<" , n3= "<<n3;}
    if(n2>n3){
		n3=troca(n2,n3); 		//apelida n2 de param1 e troca o valor valor de n3 para o param2 
		cout<<"\nn2= "<<n2<<" ,n3 "<<n3;}
    // Escrita do resultado
    cout<<"\n";
    cout<<n1<<" -> "<<n2<<" -> "<<n3<<endl;
}
