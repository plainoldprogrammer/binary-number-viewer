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
    bool data[8] = { false, false, false, false, false, false, false, false };
};

#endif // BYTE_H
