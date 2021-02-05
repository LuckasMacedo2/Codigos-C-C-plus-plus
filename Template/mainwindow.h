#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "template.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Pilha <int> objPilha;
};

#endif // MAINWINDOW_H
