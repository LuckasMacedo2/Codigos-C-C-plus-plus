#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    matA(0),
    matB(0),
    a(false),
    b(false)
{
    ui->setupUi(this);

    //Impedindo que o usuario informe letras
    ui->QLinhas->setValidator(new QIntValidator);
    ui->QColunas->setValidator(new QIntValidator);
    ui->QLinhasB->setValidator(new QIntValidator);
    ui->QColunasB->setValidator(new QIntValidator);
    ui->K->setValidator(new QIntValidator);
    ui->KB->setValidator(new QIntValidator);
    ui->potA->setValidator(new QIntValidator);
    ui->potB->setValidator(new QIntValidator);

    //"bloqueando determinados botões"
    ui->tableWidget->setEnabled(false);
    ui->SaidaMA->setEnabled(false);
    ui->SaidaMB->setEnabled(false);
    ui->SaidaMC->setEnabled(false);
    ui->transpostaA->setEnabled(false);
    ui->transpostaB->setEnabled(false);
    ui->soma->setEnabled(false);
    ui->subtracao->setEnabled(false);
    ui->multiplicacao->setEnabled(false);
    ui->igualdade->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->multiplicarK->setEnabled(false);
    ui->multiplicarKB->setEnabled(false);
    ui->potenciaA->setEnabled(false);
    ui->potenciaB->setEnabled(false);
    ui->K->setEnabled(false);
    ui->KB->setEnabled(false);
    ui->potA->setEnabled(false);
    ui->potB->setEnabled(false);
    ui->LimparA->setEnabled(false);
    ui->LimparB->setEnabled(false);
    ui->LimparC->setEnabled(false);

    //Para verificar se o usuario digitou algum valor
    ui->K->setText("");
    ui->potA->setText("");
    ui->potB->setText("");
    ui->KB->setText("");
}


MainWindow::~MainWindow()
{
    if (matA) delete matA;
    if(matB) delete matB;
    delete ui;
}

void MainWindow::on_pushButtonCriarMA_clicked()//criar Matriz A
{
    try {
       int linhas = ui->QLinhas->text().toInt();
       int colunas = ui->QColunas->text().toInt();
       matA = new Matriz<double>(linhas,colunas);

       for (int l = 0; l<linhas; l++){
           for (int c = 0; c<colunas; c++){
              double elemento = QInputDialog::getDouble(this, "Leitura " , "Matriz A["+QString::number(l)+
                                                ", "+QString::number(c) + "] = ");
              matA->setElemento(elemento, l, c);
           }
       }
       ui->SaidaMA->setText(matA->getMatriz());//jogando a matriz na tela

       //"Manipulando os buttons
       a = true;
       ui->LimparA->setEnabled(true);
       ui->multiplicarK->setEnabled(true);
       ui->potenciaA->setEnabled(true);
       ui->K->setEnabled(true);
       ui->potA->setEnabled(true);
       getOperacoes ();

       //Calculando a transposta de A
       ui->transpostaA->setText(matA->matrizTransposta()->getMatriz());

       //verificando todas as caracteristicas da matriz
       QString triSup = "Não";
       if (matA->eTriangularSuperior()) triSup = "Sim";

       QString triInf = "Não";
       if (matA->eTriangularInferior()) triInf = "Sim";

       QString ortogonal = "Não";
       if (matA->eOrtogonal()) ortogonal = "Sim";

       QString simetrica = "Não";
       if (matA->matrizSimetrica()) simetrica = "Sim";

       QString identidade = "Não";
       if (matA->eIdentidade()) identidade = "Sim";

       QString permu = "Não";
       if (matA->eDePermutacao()) permu = "Sim";

       //criando os item pro layout
       QTableWidgetItem *item1 = new QTableWidgetItem (triSup);
       QTableWidgetItem *item2 = new QTableWidgetItem (triInf);
       QTableWidgetItem *item3 = new QTableWidgetItem (ortogonal);
       QTableWidgetItem *item4 = new QTableWidgetItem (simetrica);
       QTableWidgetItem *item5 = new QTableWidgetItem (identidade);
       QTableWidgetItem *item6 = new QTableWidgetItem (permu);
       //Setando os itens
       ui->tableWidget->setItem(0,0,item1);
       ui->tableWidget->setItem(1,0,item2);
       ui->tableWidget->setItem(2,0,item3);
       ui->tableWidget->setItem(3,0,item4);
       ui->tableWidget->setItem(4,0,item5);
       ui->tableWidget->setItem(5,0,item6);

       //Alinhando no centro
       item1->setTextAlignment(Qt::AlignCenter);
       item2->setTextAlignment(Qt::AlignCenter);
       item3->setTextAlignment(Qt::AlignCenter);
       item4->setTextAlignment(Qt::AlignCenter);
       item5->setTextAlignment(Qt::AlignCenter);
       item6->setTextAlignment(Qt::AlignCenter);


    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}
void MainWindow::on_pushButtonCriarMatrizB_clicked()//criar Matriz B
{
    try {
       int linhas = ui->QLinhasB->text().toInt();
       int colunas = ui->QColunasB->text().toInt();
       matB = new Matriz<double>(linhas,colunas);

       for (int l = 0; l<linhas; l++){
           for (int c = 0; c<colunas; c++){
              double elemento = QInputDialog::getDouble(this, "Leitura " , "Matriz B["+QString::number(l)+
                                                ", "+QString::number(c) + "] = ");
              matB->setElemento(elemento, l, c);
           }
       }

       ui->SaidaMB->setText(matB->getMatriz());//jogando a matriz na tela

       //Manipulando os botões
       b=true;
       ui->LimparB->setEnabled(true);
       ui->multiplicarK->setEnabled(true);
       ui->multiplicarKB->setEnabled(true);
       ui->potenciaB->setEnabled(true);
       ui->KB->setEnabled(true);
       ui->potB->setEnabled(true);
       getOperacoes ();

       //Calculando a matriz transposta B
       ui->transpostaB->setText(matB->matrizTransposta()->getMatriz());

       //verificando todas as caracteristicas da matriz
       QString triSup = "Não";
       if (matB->eTriangularSuperior()) triSup = "Sim";

       QString triInf = "Não";
       if (matB->eTriangularInferior()) triInf = "Sim";

       QString ortogonal = "Não";
       if (matB->eOrtogonal()) ortogonal = "Sim";

       QString simetrica = "Não";
       if (matB->matrizSimetrica()) simetrica = "Sim";

       QString identidade = "Não";
       if (matB->eIdentidade()) identidade = "Sim";

       QString permu = "Não";
       if (matB->eDePermutacao()) permu = "Sim";

       //criando os item pro layout
       QTableWidgetItem *item1 = new QTableWidgetItem (triSup);
       QTableWidgetItem *item2 = new QTableWidgetItem (triInf);
       QTableWidgetItem *item3 = new QTableWidgetItem (ortogonal);
       QTableWidgetItem *item4 = new QTableWidgetItem (simetrica);
       QTableWidgetItem *item5 = new QTableWidgetItem (identidade);
       QTableWidgetItem *item6 = new QTableWidgetItem (permu);

       //Setando os itens
       ui->tableWidget->setItem(0,1,item1);
       ui->tableWidget->setItem(1,1,item2);
       ui->tableWidget->setItem(2,1,item3);
       ui->tableWidget->setItem(3,1,item4);
       ui->tableWidget->setItem(4,1,item5);
       ui->tableWidget->setItem(5,1,item6);

       //Alinhando
       item1->setTextAlignment(Qt::AlignCenter);
       item2->setTextAlignment(Qt::AlignCenter);
       item3->setTextAlignment(Qt::AlignCenter);
       item4->setTextAlignment(Qt::AlignCenter);
       item5->setTextAlignment(Qt::AlignCenter);
       item6->setTextAlignment(Qt::AlignCenter);

    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}


//Operações com sobrecarga de operador
void MainWindow::on_soma_clicked()//somar
{
    try{
        Matriz<double> * matC = 0;
        matC  = (*matA)+matB;

        ui->SaidaMC->setText(matC->getMatriz());

        delete matC;
    }
    catch (QString &erro)
    {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}

void MainWindow::on_subtracao_clicked()//subtração
{
    try {
        Matriz<double> * matC = 0;
        matC = (*matA)-matB;

        ui->SaidaMC->setText(matC->getMatriz());

        delete matC;
    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}

void MainWindow::on_multiplicacao_clicked()//multiplicação
{
    try {
       Matriz<double> * matC = 0;
       matC = (*matA) * matB;
       ui->SaidaMC->setText(matC->getMatriz());
       delete matC;
    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}

void MainWindow::on_igualdade_clicked()//igualdade
{
    if ((*matA) ==matB){
        ui->SaidaMC->setText("São Iguais");
    }
    else{
        ui->SaidaMC->setText("Não são iguais");
    }
}

void MainWindow::on_pushButton_clicked()//diferença
{
    if ((*matA) != matB)
    {
        ui->SaidaMC->setText("São Diferentes");
    }
    else
    {
        ui->SaidaMC->setText("Não são diferentes");
    }
}

//Demais operações
void MainWindow::on_multiplicarK_clicked()//Multiplicar uma constante pela matriz A
{
    try{
        Matriz<double> * matC = 0;

        std::string veri = ui->K->text().toStdString();
        if (veri=="")
            throw QString ("Informe um número");

        int k = ui->K->text().toInt();
        matC = matA->multiplicarK(k);
        ui->SaidaMC->setText(matC->getMatriz());
        delete matC;
    }catch (QString &erro)
    {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}

void MainWindow::on_multiplicarKB_clicked()//Multiplica uma constante pela matriz B
{
    try {
        Matriz<double> * matC = 0;

        std::string veri = ui->KB->text().toStdString();
        if (veri=="")
            throw QString ("Informe um número");

        int k = ui->KB->text().toInt();
        matC = matB->multiplicarK(k);
        ui->SaidaMC->setText(matC->getMatriz());
        delete matC;
    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }


}

void MainWindow::on_potenciaA_clicked() //Elevar A á um número
{
    try {
        Matriz<double> * matC = 0;

        std::string veri = ui->potA->text().toStdString();
        if (veri=="")
            throw QString ("Informe um número");

        int k = ui->potA->text().toInt();
        matC = matA->potencia(k);
        ui->SaidaMC->setText(matC->getMatriz());
        delete matC;

    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}

void MainWindow::on_potenciaB_clicked()//Elevar B á um número
{
    try {
        Matriz<double> * matC = 0;

        std::string veri = ui->potB->text().toStdString();
        if (veri=="")
            throw QString ("Informe um número");

        int k = ui->potB->text().toInt();
        matC = matB->potencia(k);
        ui->SaidaMC->setText(matC->getMatriz());
        delete matC;

    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO DO SISTEMA!", erro);
    }
}


//Limpando
void MainWindow::on_LimparA_clicked()//limpar os "dados" de A
{
    a=false;
    ui->QColunas->clear();
    ui->QLinhas->clear();
    ui->SaidaMA->clear();
    ui->transpostaA->clear();
    ui->potA->clear();
    ui->K->clear();
    ui->multiplicarK->setEnabled(false);
    ui->potenciaA->setEnabled(false);
    ui->K->setEnabled(false);
    ui->potA->setEnabled(false);
    ui->LimparA->setEnabled(false);

    ui->tableWidget->setItem(0,0,NULL);
    ui->tableWidget->setItem(1,0,NULL);
    ui->tableWidget->setItem(2,0,NULL);
    ui->tableWidget->setItem(3,0,NULL);
    ui->tableWidget->setItem(4,0,NULL);
    ui->tableWidget->setItem(5,0,NULL);

    getOperacoes();
}

void MainWindow::on_LimparB_clicked()//limpar os "dados" de B
{
    b=false;
    ui->QLinhasB->clear();
    ui->QColunasB->clear();
    ui->SaidaMB->clear();
    ui->transpostaB->clear();
    ui->potB->clear();
    ui->KB->clear();
    ui->multiplicarKB->setEnabled(false);
    ui->LimparB->setEnabled(false);
    ui->potenciaB->setEnabled(false);
    ui->KB->setEnabled(false);
    ui->potB->setEnabled(false);

    ui->tableWidget->setItem(0,1,NULL);
    ui->tableWidget->setItem(1,1,NULL);
    ui->tableWidget->setItem(2,1,NULL);
    ui->tableWidget->setItem(3,1,NULL);
    ui->tableWidget->setItem(4,1,NULL);
    ui->tableWidget->setItem(5,1,NULL);

    getOperacoes();
}

void MainWindow::on_LimparC_clicked()//limpar os "dados" de B
{
    ui->SaidaMC->clear();
    ui->LimparC->setEnabled(false);
}

//manipulando os butões
void MainWindow::getOperacoes(){//manipulando os bottons

    if (a==true && b==true){
        ui->soma->setEnabled(true);
        ui->subtracao->setEnabled(true);
        ui->multiplicacao->setEnabled(true);
        ui->igualdade->setEnabled(true);
        ui->LimparC->setEnabled(true);
        ui->pushButton->setEnabled(true);
    }
    else{
        ui->soma->setEnabled(false);
        ui->subtracao->setEnabled(false);
        ui->multiplicacao->setEnabled(false);
        ui->igualdade->setEnabled(false);
        ui->pushButton->setEnabled(false);
    }
}
