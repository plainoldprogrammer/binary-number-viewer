#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    byte.printData();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEditInput_textChanged()
{
    QString decimalNumber = ui->lineEditInput->text();
    byte.setFromDecimal(decimalNumber);
    ui->lineEditOutput->setText(byte.getData());
    qDebug() << byte.getData();
}
