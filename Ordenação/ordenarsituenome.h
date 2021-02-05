#ifndef ORDENARSITUENOME_H
#define ORDENARSITUENOME_H
#include<TemplateMethodOrdenacao.h>
namespace TP2{
class OrdenarSituENome : public TemplateMethodOrdenacao
{
public:
    OrdenarSituENome(QString nomeDoArquivoNoDisco);
    bool ePrimeiro(Aluno a, Aluno b)const;
};
}

#endif // ORDENARSITUENOME_H
