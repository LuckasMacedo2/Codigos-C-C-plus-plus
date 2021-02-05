#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <matriz.h>
#include <QInputDialog> //Cria caixa de dialogo, para inserir os valores da matriz no caso
#include <QMessageBox> //
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //butões para criar as matrizes
    void on_pushButtonCriarMA_clicked();

    void on_pushButtonCriarMatrizB_clicked();

    //Operações
    void on_soma_clicked();

    void on_pushButton_clicked();//diferença

    void on_igualdade_clicked();

    void on_subtracao_clicked();

    void on_multiplicacao_clicked();

    void on_multiplicarK_clicked();

    void on_multiplicarKB_clicked();

    void on_potenciaA_clicked();

    void on_potenciaB_clicked();

    //Limpar e manipular as operações
    void on_LimparB_clicked();

    void on_LimparA_clicked();

    void on_LimparC_clicked();

    void getOperacoes ();

private:
    Ui::MainWindow *ui;
    Matriz<double> *matA;
    Matriz<double> *matB;
    bool a;
    bool b;
};

#endif // MAINWINDOW_H
