#ifndef BYTE_H
#define BYTE_H

#include <qDebug>

#define BYTE_SIZE 8


class Byte
{
public:
    Byte();
    void printData();

private:
    int data[8] = { 0 };
};

#endif // BYTE_H
