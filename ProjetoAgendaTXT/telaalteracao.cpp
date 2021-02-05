#include "telaalteracao.h"
#include "ui_telaalteracao.h"

TelaAlteracao::TelaAlteracao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAlteracao)
{
    ui->setupUi(this);
    ui->nome->setText("");
    ui->email->setText("");
    ui->telefone->setText("");
    ui->endereco->setText("");
    ui->nome->setEnabled(false);
    ui->email->setEnabled(false);
    ui->telefone->setEnabled(false);
    ui->endereco->setEnabled(false);
    ui->salvar->setEnabled(false);
}

TelaAlteracao::~TelaAlteracao()
{
    delete ui;
}

void TelaAlteracao::on_pesquisar_clicked()
{
    try {
       QString nome = ui->pesquisa->text();
       if (nome=="")
        throw QString ("Informe o nome");

       agenda::ContatoPersistencia obj("dados.txt");
       QString pesquisa = obj.pesquisar(nome);

       agenda::Contato aux;

       aux.montarObjeto(pesquisa);

       ui->nome->setText(aux.getNome());
       ui->telefone->setText(QString ::number(aux.getTelefone()));
       ui->endereco->setText(aux.getEndereco());
       ui->email->setText(aux.getEmail());
       getDesbloqueio();
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void TelaAlteracao::on_salvar_clicked()
{
    try {
        QString nome = ui->nome->text();
        long telefone = ui->telefone->text().toLong();
        QString endereco = ui->endereco->text();
        QString email = ui->email->text();

        QString saida = nome;
        saida += ";";
        saida += endereco;
        saida += ";";
        saida += QString::number(telefone);
        saida += ";";
        saida += email;

        agenda::ContatoPersistencia obj("dados.txt");

        obj.alterar(saida);

        ui->nome->clear();
        ui->telefone->clear();
        ui->endereco->clear();
        ui->email->clear();
        ui->pesquisa->clear();

    } catch (QString erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void TelaAlteracao::on_sair_clicked()
{
    this->close();
}


void TelaAlteracao:: getDesbloqueio () const{
    ui->telefone->setEnabled(true);
    ui->email->setEnabled(true);
    ui->endereco->setEnabled(true);
    ui->salvar->setEnabled(true);
}
