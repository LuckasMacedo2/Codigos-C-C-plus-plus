#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main(){
    setlocale(LC_ALL,"");
    int diaAProcessar,opcao, data, dia, mes, ano;
        
    struct {
        string nomesDia[7];
        void inicializaDiaAProcessar(int diaParam){//Atualiza o dia private
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
        int conversao (int d, int m, int as )			
        {												
        	if (m==1 || m==2)
        	{
        		m=m+10;
        		as = as-1;
        	}
        	else
        	{
        		m=m-2;
        	}
        	a=as%100;
        	s=as/100;
        	dia = ((int(2.6*m-0.2))+d+a+(a/4)+ (s/4)-2*s)%7;
			return dia;	
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
    private:
        int dia;
        int a, s;
         
    } diaSemana;


    diaSemana.inicializa();
    
    
    std::cout<<"Informe uma data ";
    std::cin>>data;
    
    dia = data/1000000;
    mes = (data%1000000)/10000;
    ano = ((data%1000000)%10000);
    diaAProcessar=diaSemana.conversao(dia, mes, ano);
    diaSemana.inicializaDiaAProcessar(diaAProcessar);

    cout<<"(0) para finalizar\n";
    cout<<"(1) para saber o dia da semana\n";
    cout<<"(2) para saber o dia anterior\n";
    cout<<"(3) para saber o dia posterior\n";
    cout<<"Selecione a opção desejada( ):\b\b\b";
    cin>>opcao;
    while ( opcao!=0 ){
        if( opcao==1 )
            cout<<diaSemana.atual()<<endl;
        if( opcao==2 )
            cout<<diaSemana.predecessor()<<endl;
        if( opcao==3 )
            cout<<diaSemana.sucessor()<<endl;
          
        cout<<"Selecione a opção desejada( ):\b\b\b";
        cin>>opcao;
    }

}
/* 
	1	11
	2	12
	3	1
	4	2
	5	3
	6	4
	.	.
	.	.
	.	.
	12	10






*/
