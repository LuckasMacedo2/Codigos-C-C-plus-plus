#include "classe.h"

int main(){
    setlocale(LC_ALL,"");
    int diaAProcessar,opcao;
        
    tipoDiaSemana diaSemana; //está utilizando a classe. //instanciação de objetos
    
    //diaSemana.inicializa();	//Aqui é mandado executar o construtor

    std::cout<<"Informe um dia da semana( ):\b\b\b";
    std::cin>>diaAProcessar;
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
