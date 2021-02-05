#include "ContatoPersistencia.h"
namespace agenda{//inicio
ContatoPersistencia::ContatoPersistencia(QString nomeDoArquivoNoDisco):
    nomeDoArquivoNoDisco(nomeDoArquivoNoDisco)
{

}

void ContatoPersistencia::incluir(Contato &objeto) const{
    std::ofstream arquivoAgenda;
    arquivoAgenda.open(nomeDoArquivoNoDisco.toStdString().c_str(),
                                   std::ios::out|std::ios::app);
    if(!arquivoAgenda.is_open()){
        throw QString("Arquivo de Agenda nao foi aberto - Metodo incluir");
    }
    arquivoAgenda<<objeto.desmontarObjeto().toStdString()+"\n";
    arquivoAgenda.close();
}

void ContatoPersistencia::excluir(QString nome) const{
    try {
        std::stack<agenda::Contato> pilha;
        std::ifstream arquivoAgenda;
        arquivoAgenda.open(nomeDoArquivoNoDisco.toStdString().c_str());
        if(!arquivoAgenda.is_open()){
            throw QString("Arquivo de Agenda nao foi aberto");
        }
        std::string linha;
        getline(arquivoAgenda,linha);
        while(!arquivoAgenda.eof()){
            agenda::Contato objeto;
            QString str = QString::fromStdString(linha);
            objeto.montarObjeto(str);
            if(objeto.getNome()!=nome)pilha.push(objeto);
            getline(arquivoAgenda,linha);
        }
        arquivoAgenda.close();
        std::ofstream arquivoAgenda2;
        arquivoAgenda2.open(nomeDoArquivoNoDisco.toStdString().c_str());
        if(!arquivoAgenda2.is_open()){
            throw QString("Arquivo de Agenda nao foi aberto");
        }
        while(!pilha.empty()){
            agenda::Contato objeto = pilha.top();
            arquivoAgenda2<<objeto.desmontarObjeto().toStdString()+"\n";
            pilha.pop();
        }
        arquivoAgenda2.close();
    } catch (QString &erro) {
        throw(erro);
    }
}

// Metodo para comparação dos objetos Contatos a ser
// utilizado pelo metodo sort da list para ordenar
// os contatos da lista
bool operator < (agenda::Contato &p1, agenda::Contato &p2)
{
    if (p1.getNome()<p2.getNome())
        return true;
    else return false;
}

std::list<Contato>* ContatoPersistencia::listagem() const{
    try {
        std::ifstream arquivoAgenda;
        arquivoAgenda.open(nomeDoArquivoNoDisco.toStdString().c_str());
        if(!arquivoAgenda.is_open()){
            throw QString("Arquivo de Agenda nao foi aberto");
        }
        std::list<agenda::Contato> *lista = new std::list<Contato>();
        std::string linha;
        getline(arquivoAgenda,linha);
        while(!arquivoAgenda.eof()){
            agenda::Contato objeto;
            QString str = QString::fromStdString(linha);
            objeto.montarObjeto(str);
            lista->push_back(objeto);
            getline(arquivoAgenda,linha);
        }
        arquivoAgenda.close();
        lista->sort();
        return lista;
    } catch (QString &erro) {
        throw(erro);
    }
}

QString ContatoPersistencia::pesquisar(QString nome) const{
    try {
        std::ifstream arquivo;
        arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
        if (!arquivo.is_open())
        {
            throw QString ("Erro ao abrir o arquivo verifique o diretorio");
        }

        QString saida = "";
        std::string linha;
        getline (arquivo, linha);

        while (!arquivo.eof()){
            agenda::Contato objeto;
            QString str = QString::fromStdString(linha);
            objeto.montarObjeto(str);

            if(nome==objeto.getNome()){
                 saida = objeto.desmontarObjeto();
                 return saida;
            }
            getline(arquivo,linha);
        }
        arquivo.close();

        throw QString ("Nome informado inválido, informe novamente");
    } catch (QString &erro) {
        throw (erro);
    }
}

void ContatoPersistencia:: alterar(QString param){
    try {
       std::ifstream arquivo;
       arquivo.open(nomeDoArquivoNoDisco.toStdString().c_str());
       if (! arquivo.is_open()){
           throw QString ("Erro ao abrir o arquivo verifique o diretorio");
       }

       agenda::Contato objAux;
       objAux.montarObjeto(param);

       std::stack<agenda::Contato> pilha;

       std::string linha;
       getline(arquivo,linha);
       while(!arquivo.eof()){
           agenda::Contato objeto;
           QString str = QString::fromStdString(linha);
           objeto.montarObjeto(str);
           if(objeto.getNome()!=objAux.getNome()){
               pilha.push(objeto);
               getline(arquivo,linha);
           }
           else{
              pilha.push(objAux);
              getline(arquivo,linha);
           }
       }

       arquivo.close();

       std::ofstream arquivoSaida;
       arquivoSaida.open(nomeDoArquivoNoDisco.toStdString().c_str());
       if (!arquivoSaida.is_open()){
           throw QString ("Erro ao abrir o arquivo verifique o diretorio");
       }

       while(!pilha.empty()){
           agenda::Contato objeto = pilha.top();
           arquivoSaida<<objeto.desmontarObjeto().toStdString()+"\n";
           pilha.pop();
       }
       arquivoSaida.close();
    } catch (QString &erro) {
        throw (erro);
    }
}

}//fim

