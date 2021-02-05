//
//  semana2.h
//  
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16.
//
//  Biblioteca exemplo utilizando 2 arquivos: este com ".h"
//  Utiliza protôtipos
//

#ifndef SEMANA2_H_	//Verifica se SEMANA2_H_ não foi criada
	#define SEMANA2_H_	//"então" do ifndef, cria SEMANA2_H_

#include <string>
using std::string;

struct tipoDiaSemana{
private:
    int dia;
    string nomesDia[7];
public:
    void inicializaDiaAProcessar(int);
    void inicializa();
    string sucessor();
    string predecessor();
    string atual();
};

#endif	//SEMANA2_H_ finaliza #ifndef (condicional simples)
