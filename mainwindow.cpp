#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Byte byte;
    byte.printData();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEditInput_textChanged()
{
    qDebug() << "lineEditInput text changed";
}
