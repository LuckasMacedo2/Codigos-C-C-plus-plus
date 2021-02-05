//
//  semana2.cpp
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16.
//
//  Biblioteca exemplo utilizando 2 arquivos: este com ".cpp"
//  Utiliza operador de escopo
//

#include "semana2.h" // inclui o arquivo com os protÛtipos

void tipoDiaSemana::inicializaDiaAProcessar(int diaParam){ //Sendo o tipo pré definido o :: indica que está na biblioteca.
    dia=diaParam;
}
void tipoDiaSemana::inicializa(){
    nomesDia[0]="Dom";
    nomesDia[1]="Seg";
    nomesDia[2]="Ter";
    nomesDia[3]="Qua";
    nomesDia[4]="Qui";
    nomesDia[5]="Sex";
    nomesDia[6]="Sab";
}
string tipoDiaSemana::sucessor(){
    return nomesDia[dia+1];
}
string tipoDiaSemana::predecessor(){
    return nomesDia[dia-1];
}
string tipoDiaSemana::atual(){
    return nomesDia[dia];
}



