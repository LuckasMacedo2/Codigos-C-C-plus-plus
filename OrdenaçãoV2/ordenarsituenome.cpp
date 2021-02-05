#include "ordenarsituenome.h"

namespace TP2{
OrdenarSituENome :: OrdenarSituENome(QString nomeDoArquivoNoDisco):
    TemplateMethodOrdenacao(nomeDoArquivoNoDisco)
{
}

bool OrdenarSituENome:: ePrimeiro(Aluno a, Aluno b)const{

    if (a.getSituacao() < b.getSituacao()){
        return true;
    }
    else{
        if (a.getSituacao()==b.getSituacao()){
            if (a.getNome()<b.getNome()){
                return true;
            }
            else{
                return false;
            }
        }
   }
}
}
