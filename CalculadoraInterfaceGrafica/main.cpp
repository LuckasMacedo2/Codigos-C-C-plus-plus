#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QLabel label (0);
    label.setText ("<font color = black> Hello, Bem Vindo!");//mensagem na janela
    label.setStyleSheet("background-color: white");//mudar a cor da janela de entrada.
    label.resize(300,300);//Aumentar o tamanho da janela
    label.show();//sair


    return a.exec();
}
