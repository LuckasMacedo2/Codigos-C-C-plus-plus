//
//
//
//  Created by Nagela Bittar & Pedro Valle on 19/09/16
//  Métodos Construtores
//
//  Quando um objeto de uma classe é criado, seus membros podem ser inicializados através de um método construtor.
//  Tais métodos, quando definidos, devem possuir o mesmo nome da classe.
//  Construtores servem para inicializar dados de um objeto.
//  Uma classe também pode ter vários construtores diferentes implementados.
//  Além disso, eles só podem ser chamados usando o comando new ou na declaração de um objeto de uma certa classe.
//
//  Caso a classe não defina um construtor, então o compilador define um construtor default sem parâmetros.
//  Assim, ao declarar um objeto, não se coloca parênteses após o nome do mesmo.
//  No momento que um construtor é definido, o compilador não define mais um construtor default,
//  exigindo do desenvolvedor a declaração deste                
//                  
//
//
#include <iostream>
using std::cout;
using std::endl;

class TipoExibeAsterisco { 
      public:
          TipoExibeAsterisco()	
          {
          cout << " * ";
          }
          ~TipoExibeAsterisco ()
          {
				cout<<"!\n"; //cout<<"\a\a\a\a\a!\n";
		  }
};

int main()
    {
    setlocale(LC_ALL,"");
    
    // aloca e constrói 5 objetos
    TipoExibeAsterisco objeto1;	
    TipoExibeAsterisco objeto2;
    TipoExibeAsterisco objeto3;

  
  std::cout << "\nFim do Programa\n";

  //system("pause");

}
