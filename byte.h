#ifndef BYTE_H
#define BYTE_H

#include <qDebug>
#include <cmath>

#define BYTE_SIZE 8


class Byte
{
public:
    Byte();
    void printData();
    void setFromDecimal(QString);
    QString getData();

private:
    bool data[8] = { false, false, false, false, false, false, false, false };
};

#endif // BYTE_H
