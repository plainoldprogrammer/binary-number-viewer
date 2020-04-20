#ifndef BYTE_H
#define BYTE_H

#include <QDebug>
#include <cmath>

#define BYTE_SIZE 8

class Byte
{
public:
    Byte();
    void logData();
    void setFromDecimal(QString);
    QString getData();
    void clear();

private:
    bool bit[8];
};

#endif // BYTE_H
