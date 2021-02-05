#ifndef ORDENAANOSEMNOME_H
#define ORDENAANOSEMNOME_H
#include <TemplateMethodOrdenacao.h>

namespace TP2 {
class OrdenaAnoSemNome : public TemplateMethodOrdenacao
{
    public:
    OrdenaAnoSemNome(QString nomeDoArquivo);
    bool ePrimeiro(Aluno a, Aluno b)const;
};
}

#endif // ORDENAANOSEMNOME_H
