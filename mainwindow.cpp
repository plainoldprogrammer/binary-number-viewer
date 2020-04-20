#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonConvert_clicked()
{
    QString decimalNumber = ui->lineEditInput->text();

    if (decimalNumber.toInt() <= 255)
    {
        byte.setFromDecimal(decimalNumber);
        ui->lineEditOutput->setText(byte.getData());
    }
    else
    {
        byte.clear();
        ui->lineEditOutput->setText("NaN");
    }
}
