//
//  semana1.h
//  
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16.
//
//  Biblioteca exemplo utilizando apenas um arquivo ".h"
//  Facilita o reuso de cÛdigo fonte
//

struct tipoDiaSemana{
private:
    int dia;
    string nomesDia[7];
public:
    void inicializaDiaAProcessar(int diaParam){
        dia=diaParam;
    }
    void inicializa(){
        nomesDia[0]="Dom";
        nomesDia[1]="Seg";
        nomesDia[2]="Ter";
        nomesDia[3]="Qua";
        nomesDia[4]="Qui";
        nomesDia[5]="Sex";
        nomesDia[6]="Sab";
    }
    string sucessor(){
        return nomesDia[dia+1];
    }
    string predecessor(){
        return nomesDia[dia-1];
    }
    string atual(){
        return nomesDia[dia];
    }
    
};

