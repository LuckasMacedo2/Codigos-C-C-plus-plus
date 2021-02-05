#ifndef TELAALTERACAO_H
#define TELAALTERACAO_H

#include <QDialog>
#include<ContatoPersistencia.h>
#include<Contato.h>
#include<list>
#include<QMessageBox>

namespace Ui {
class TelaAlteracao;
}

class TelaAlteracao : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAlteracao(QWidget *parent = 0);
    ~TelaAlteracao();

private slots:
    void on_pesquisar_clicked();

    void on_salvar_clicked();

    void on_sair_clicked();

    void getDesbloqueio () const;

private:
    Ui::TelaAlteracao *ui;
};

#endif // TELAALTERACAO_H
