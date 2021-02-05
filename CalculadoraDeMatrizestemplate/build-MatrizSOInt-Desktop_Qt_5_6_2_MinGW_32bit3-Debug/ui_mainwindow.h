/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *QLinhas;
    QLineEdit *QColunas;
    QTextEdit *SaidaMA;
    QPushButton *pushButtonCriarMA;
    QLabel *label_4;
    QLineEdit *QLinhasB;
    QLabel *label_5;
    QLineEdit *QColunasB;
    QPushButton *pushButtonCriarMatrizB;
    QTextEdit *SaidaMB;
    QPushButton *soma;
    QPushButton *LimparB;
    QTextBrowser *SaidaMC;
    QLabel *label_6;
    QPushButton *subtracao;
    QPushButton *LimparA;
    QPushButton *LimparC;
    QPushButton *multiplicacao;
    QLabel *label_7;
    QPushButton *multiplicarK;
    QLineEdit *K;
    QPushButton *igualdade;
    QTableWidget *tableWidget;
    QTextEdit *transpostaA;
    QTextEdit *transpostaB;
    QPushButton *multiplicarKB;
    QLineEdit *KB;
    QPushButton *potenciaA;
    QPushButton *potenciaB;
    QLineEdit *potA;
    QLineEdit *potB;
    QLabel *label_9;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_10;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMatrizwe;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(868, 655);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 81, 16));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 151, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 151, 16));
        QLinhas = new QLineEdit(centralWidget);
        QLinhas->setObjectName(QStringLiteral("QLinhas"));
        QLinhas->setGeometry(QRect(160, 20, 41, 25));
        QColunas = new QLineEdit(centralWidget);
        QColunas->setObjectName(QStringLiteral("QColunas"));
        QColunas->setGeometry(QRect(160, 60, 41, 25));
        SaidaMA = new QTextEdit(centralWidget);
        SaidaMA->setObjectName(QStringLiteral("SaidaMA"));
        SaidaMA->setGeometry(QRect(10, 110, 161, 121));
        pushButtonCriarMA = new QPushButton(centralWidget);
        pushButtonCriarMA->setObjectName(QStringLiteral("pushButtonCriarMA"));
        pushButtonCriarMA->setGeometry(QRect(10, 240, 61, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 30, 151, 20));
        QLinhasB = new QLineEdit(centralWidget);
        QLinhasB->setObjectName(QStringLiteral("QLinhasB"));
        QLinhasB->setGeometry(QRect(420, 30, 41, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(270, 60, 151, 16));
        QColunasB = new QLineEdit(centralWidget);
        QColunasB->setObjectName(QStringLiteral("QColunasB"));
        QColunasB->setGeometry(QRect(420, 60, 41, 21));
        pushButtonCriarMatrizB = new QPushButton(centralWidget);
        pushButtonCriarMatrizB->setObjectName(QStringLiteral("pushButtonCriarMatrizB"));
        pushButtonCriarMatrizB->setGeometry(QRect(270, 230, 61, 31));
        SaidaMB = new QTextEdit(centralWidget);
        SaidaMB->setObjectName(QStringLiteral("SaidaMB"));
        SaidaMB->setGeometry(QRect(270, 100, 181, 121));
        soma = new QPushButton(centralWidget);
        soma->setObjectName(QStringLiteral("soma"));
        soma->setGeometry(QRect(180, 110, 31, 31));
        LimparB = new QPushButton(centralWidget);
        LimparB->setObjectName(QStringLiteral("LimparB"));
        LimparB->setGeometry(QRect(350, 230, 90, 31));
        SaidaMC = new QTextBrowser(centralWidget);
        SaidaMC->setObjectName(QStringLiteral("SaidaMC"));
        SaidaMC->setGeometry(QRect(500, 60, 201, 171));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 0, 91, 16));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        label_6->setFont(font1);
        subtracao = new QPushButton(centralWidget);
        subtracao->setObjectName(QStringLiteral("subtracao"));
        subtracao->setGeometry(QRect(220, 110, 31, 31));
        LimparA = new QPushButton(centralWidget);
        LimparA->setObjectName(QStringLiteral("LimparA"));
        LimparA->setGeometry(QRect(90, 240, 75, 31));
        LimparC = new QPushButton(centralWidget);
        LimparC->setObjectName(QStringLiteral("LimparC"));
        LimparC->setGeometry(QRect(560, 240, 75, 31));
        multiplicacao = new QPushButton(centralWidget);
        multiplicacao->setObjectName(QStringLiteral("multiplicacao"));
        multiplicacao->setGeometry(QRect(180, 190, 31, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(510, 30, 221, 16));
        label_7->setFont(font);
        multiplicarK = new QPushButton(centralWidget);
        multiplicarK->setObjectName(QStringLiteral("multiplicarK"));
        multiplicarK->setGeometry(QRect(20, 300, 31, 23));
        K = new QLineEdit(centralWidget);
        K->setObjectName(QStringLiteral("K"));
        K->setGeometry(QRect(60, 300, 31, 20));
        igualdade = new QPushButton(centralWidget);
        igualdade->setObjectName(QStringLiteral("igualdade"));
        igualdade->setGeometry(QRect(180, 150, 31, 31));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(170, 255, 255));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(170, 255, 255));
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(170, 255, 255));
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(170, 255, 255));
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(170, 255, 255));
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(QColor(170, 255, 255));
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setBackground(QColor(170, 255, 255));
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setBackground(QColor(170, 255, 255));
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(470, 290, 381, 211));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        transpostaA = new QTextEdit(centralWidget);
        transpostaA->setObjectName(QStringLiteral("transpostaA"));
        transpostaA->setGeometry(QRect(20, 410, 151, 121));
        transpostaB = new QTextEdit(centralWidget);
        transpostaB->setObjectName(QStringLiteral("transpostaB"));
        transpostaB->setGeometry(QRect(270, 410, 171, 121));
        multiplicarKB = new QPushButton(centralWidget);
        multiplicarKB->setObjectName(QStringLiteral("multiplicarKB"));
        multiplicarKB->setGeometry(QRect(270, 280, 31, 23));
        KB = new QLineEdit(centralWidget);
        KB->setObjectName(QStringLiteral("KB"));
        KB->setGeometry(QRect(310, 280, 31, 20));
        potenciaA = new QPushButton(centralWidget);
        potenciaA->setObjectName(QStringLiteral("potenciaA"));
        potenciaA->setGeometry(QRect(20, 350, 31, 23));
        potenciaB = new QPushButton(centralWidget);
        potenciaB->setObjectName(QStringLiteral("potenciaB"));
        potenciaB->setGeometry(QRect(270, 340, 31, 23));
        potA = new QLineEdit(centralWidget);
        potA->setObjectName(QStringLiteral("potA"));
        potA->setGeometry(QRect(60, 350, 31, 20));
        potB = new QLineEdit(centralWidget);
        potB->setObjectName(QStringLiteral("potB"));
        potB->setGeometry(QRect(310, 340, 31, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(460, 150, 47, 13));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_9->setFont(font3);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 150, 31, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 380, 171, 21));
        label_8->setFont(font);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(270, 380, 151, 21));
        label_10->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 868, 21));
        menuMatrizwe = new QMenu(menuBar);
        menuMatrizwe->setObjectName(QStringLiteral("menuMatrizwe"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMatrizwe->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Matriz A", 0));
        label_2->setText(QApplication::translate("MainWindow", "Quantidade de Linhas", 0));
        label_3->setText(QApplication::translate("MainWindow", "Quantidade de Colunas", 0));
        pushButtonCriarMA->setText(QApplication::translate("MainWindow", "Criar", 0));
        label_4->setText(QApplication::translate("MainWindow", "Quantidade de Linhas", 0));
        label_5->setText(QApplication::translate("MainWindow", "Quantidade de Colunas", 0));
        pushButtonCriarMatrizB->setText(QApplication::translate("MainWindow", "Criar", 0));
        soma->setText(QApplication::translate("MainWindow", "+", 0));
        LimparB->setText(QApplication::translate("MainWindow", "Limpar", 0));
        label_6->setText(QApplication::translate("MainWindow", "Matriz B", 0));
        subtracao->setText(QApplication::translate("MainWindow", "-", 0));
        LimparA->setText(QApplication::translate("MainWindow", "Limpar", 0));
        LimparC->setText(QApplication::translate("MainWindow", "Limpar", 0));
        multiplicacao->setText(QApplication::translate("MainWindow", "*", 0));
        label_7->setText(QApplication::translate("MainWindow", "Matriz Resultante", 0));
        multiplicarK->setText(QApplication::translate("MainWindow", "A*", 0));
        igualdade->setText(QApplication::translate("MainWindow", "=", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Matriz A", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Matriz B", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Triangular Superior", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Triangular Inferior", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Matriz Ortogonal", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Matriz Simetrica", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Matriz Identidade", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Matriz de Permuta\303\247\303\243o", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        multiplicarKB->setText(QApplication::translate("MainWindow", "B*", 0));
        potenciaA->setText(QApplication::translate("MainWindow", "A^", 0));
        potenciaB->setText(QApplication::translate("MainWindow", "B^", 0));
        label_9->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton->setText(QApplication::translate("MainWindow", "!=", 0));
        label_8->setText(QApplication::translate("MainWindow", "Transposta de A", 0));
        label_10->setText(QApplication::translate("MainWindow", "Transposta de B", 0));
        menuMatrizwe->setTitle(QApplication::translate("MainWindow", "Matrizes", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
