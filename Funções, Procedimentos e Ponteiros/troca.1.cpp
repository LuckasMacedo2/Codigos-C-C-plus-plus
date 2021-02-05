//
//  ordena3valores.cpp
//  
//
//  Created by Nagela Bittar & Pedro Valle on 29/08/16.
//
//
/* Fazer um programa, em C++, que leia 3 valores inteiros, classifique os mesmos em ordem crescente e imprima o resultado.
 */

// Versao 1: solucao sem funcao

#include <iostream>
using namespace std;

int main(){
    // Declaracao das variaveis necessarias
    int n1, n2, n3, aux;
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
            aux = n1;  // troca n1 com n2
            n1 = n2;
            n2 = aux;}
        else{
            aux = n1;  // troca n1 com n3
            n1 = n3;
            n3 = aux;}
    if(n2>n3){
        aux = n2;  // troca n2 com n3
        n2 = n3;
        n3 = aux;}
    // Escrita do resultado
    cout<<n1<<" -> "<<n2<<" -> "<<n3<<endl;
}
