#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

class tipoDiaSemana{
private:
    int dia;
    string nomesDia[7];
public:   
	tipoDiaSemana (){ 		//Metodo construtor. Cria o cenario inicial ao objeto instanciado
        nomesDia[0]="Dom";
        nomesDia[1]="Seg";
        nomesDia[2]="Ter";
        nomesDia[3]="Qua";
        nomesDia[4]="Qui";
        nomesDia[5]="Sex";
        nomesDia[6]="Sab";
    }
    
    void inicializaDiaAProcessar(int diaParam){
        dia=diaParam;
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

