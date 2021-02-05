// Alias (referências em Linguagem C++)
//
//  apelido.cpp
//  
//
//  Created by Nagela Bittar & Pedro Valle on 08/09/16.
//
//
/*
Programa, em C++, para demonstrar a utilização de alias (apelidos)
Uma referência consiste em um apelido (alias) de uma variável,
ou seja, apesar de possuírem nomes distintos, uma referência e
sua variável de inicialização ocupam o mesmo endereço de memória.
A modificação de uma afeta a outra. A principal utilidade de uma 
referência é melhorar a sintaxe de manipulação de parâmetros 
por referência. A sintaxe de declaração de referência é a seguinte: 
<tipo> &refer = var;

Também deve-se ter em mente que uma referência não 
é uma cópia nem um ponteiro para uma variável.Trata
-se da própria variável com um nome diferente. 
<tipo> &refer = var;
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int& r = n;
    n = 20;
    cout<<n<<endl;
    r = 18;
    cout<<n<<endl;
}
