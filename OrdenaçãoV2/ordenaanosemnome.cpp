#include "ordenaanosemnome.h"

#include <cmath>
using std::pow;

namespace TP2 {
OrdenaAnoSemNome::OrdenaAnoSemNome(QString nomeDoArquivoNoDisco):
    TemplateMethodOrdenacao (nomeDoArquivoNoDisco)
{

}
bool OrdenaAnoSemNome :: ePrimeiro(Aluno a, Aluno b) const
{
    long long int anoA = (a.getMatricula().toLongLong()/pow(10,10));
    long long int semestreA = (a.getMatricula().toLongLong()/pow(10,9));
    long long int anoB = (b.getMatricula().toLongLong()/pow(10,10));
    long long int semestreB = (b.getMatricula().toLongLong()/pow(10,9));

    if (anoA < anoB){//Verificando o ano
        return true;
    }

    if (anoA == anoB)//Verificando se o ano é igual
    {
        if (semestreA< semestreB){
            return true;
        }
        else{
            if(semestreA == semestreB){//Verificando se o semestre é igual
                 if (a.getNome() < b.getNome())
                 {
                     return true;
                 }
                 else{
                     return false;
                 }
            }
        }
    }
 }
}

/*PQ Bill Gates é o primeiro em Situação e matricula*/
