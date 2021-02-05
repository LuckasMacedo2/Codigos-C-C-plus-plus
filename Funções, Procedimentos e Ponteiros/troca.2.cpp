//
//  ordena3valores.cpp
//  
//
//  Created by Nagela Bittar & Pedro Valle on 29/08/16.
//
//
/* Fazer um programa, em C++, que leia 3 valores inteiros, classifique os mesmos em ordem crescente e imprima o resultado.
 */

// Versao 2: solucao com funcao incorreta

#include <iostream>
using namespace std;
int troca (int param1, int param2)	
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
			n2=troca(n1,n2);	//copia os valores de n1 no param1 e n2 no param2
			cout<<"\nn1= "<<n1<<" , n2= "<<n2;}
        else{
			n3=troca(n1,n3);	//copia os valores de n1 no param1 e n3 no param2
			cout<<"\nn1= "<<n1<<" , n3= "<<n3;}
    if(n2>n3){
		n3=troca(n2,n3); 		//copia os valores de n2 no param1 e n3 no param2
		cout<<"\nn2= "<<n2<<" ,n3 "<<n3;}
    // Escrita do resultado
    cout<<"\n";
    cout<<n1<<" -> "<<n2<<" -> "<<n3<<endl;
}
