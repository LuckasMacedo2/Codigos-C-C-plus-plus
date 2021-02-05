#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    int x, y, res;
    x = ui->lineEdit->text().toInt();
    y = ui->lineEdit_2->text().toInt();
    res = obj.getResul(x, y);
    QString aux = QString::number(res);
    ui->lineEdit_3->setText(aux);


}

void MainWindow::on_pushButton_2_clicked()
{
    double z, w, res;
    z = ui->lineEdit->text().toDouble();
    w = ui->lineEdit_2->text().toDouble();
    res = obj.getMult(z, w);
    QString aux = QString::number(res);
    ui->lineEdit_3->setText(aux);

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();

}

void MainWindow::on_pushButton_4_clicked()
{
   double a, b, res;
   a = ui->lineEdit->text().toInt();
   b = ui->lineEdit_2->text().toInt();
   res = obj.getSub(a, b);
   QString aux = QString ::number(res);
   ui->lineEdit_3->setText(aux);
}

void MainWindow::on_pushButton_5_clicked()
{
    double a, b, res;
    a = ui->lineEdit->text().toDouble();
    b = ui->lineEdit_2->text().toDouble();
    res = obj.getDiv(a, b);
    QString aux = QString ::number(res);
    ui->lineEdit_3->setText(aux);
}

void MainWindow::on_pushButton_6_clicked()
{
    double a, b, resul;
    QString aux;
    a = ui->lineEdit->text().toDouble();
    b = ui->lineEdit_2->text().toDouble();
    resul = obj.getAB(a,b);
    aux = QString :: number(resul);
    ui->lineEdit_3->setText(aux);
}

void MainWindow::on_pushButton_7_clicked()
{
    double a, b, resul;
    QString aux;
    a = ui->lineEdit->text().toDouble();
    b = ui->lineEdit_2->text().toDouble();
    resul = obj.getBA(a,b);
    aux = QString :: number(resul);
    ui->lineEdit_3->setText(aux);
}
