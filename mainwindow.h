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
    void customizeWindow();
    void enableShiftOperations();
    void disableShiftOperations();

private:
    Ui::MainWindow *ui;
    Byte byte;

private slots:
    void on_pushButtonConvert_clicked();
    void on_pushButtonBitShiftLeft_clicked();
    void on_pushButtonBitShiftRight_clicked();
    void on_lineEditInput_textChanged();
};
#endif // MAINWINDOW_H
