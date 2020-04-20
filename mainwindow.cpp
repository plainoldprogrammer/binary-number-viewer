#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    customizeWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonConvert_clicked()
{
    QString decimalNumber = ui->lineEditInput->text();
    bool isNotANumber = false;

    QRegExp re("\\d*");
    if (re.exactMatch(decimalNumber))
    {
        if (!decimalNumber.compare("") == 0)
        {
            if ((decimalNumber.toInt() >= 0) && (decimalNumber.toInt() <= 255))
            {
                byte.setFromDecimal(decimalNumber);
                ui->lineEditOutput->setText(byte.getData());
            }
            else
            {
                isNotANumber = true;
            }
        }
        else
        {
            isNotANumber = true;
        }
    }
    else
    {
        isNotANumber = true;
    }


    if (isNotANumber)
    {
        byte.clear();
        ui->lineEditOutput->setText("NaN");
    }
}

void MainWindow::customizeWindow()
{
    setWindowTitle("Binary Number Viewer v0.1 (Dev)");

    setMinimumSize(width(), height());
    setMaximumSize(width(), height());
}
