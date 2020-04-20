#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QRegExp>
#include "byte.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Byte byte;
    void customizeWindow();

private slots:
    void on_pushButtonConvert_clicked();
    void on_pushButtonBitShiftLeft_clicked();
};
#endif // MAINWINDOW_H
