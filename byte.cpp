#include "byte.h"

Byte::Byte()
{
    clear();
}

void Byte::logData()
{
    for (int i = BYTE_SIZE; i >= 1; i--)
    {
        qDebug() << "byte[" << i - 1 << "]: " << bit[i - 1];
    }
}

void Byte::setFromDecimal(QString decimal)
{
    clear();

    int decimalNumber = decimal.toInt();

    for (int i = BYTE_SIZE; i>= 1; i--)
    {
        int limit = pow(2, i - 1);

        if (decimalNumber >= limit)
        {
            bit[i - 1] = true;
            decimalNumber = decimalNumber - limit;
        }
    }
}

QString Byte::getData()
{
    QString converted = "";

    for (int i = BYTE_SIZE; i >= 1; i--)
    {
        if (bit[i - 1] == true)
        {
            converted.append("1");
            converted.append(" ");
        }
        else
        {
            converted.append("0");
            converted.append(" ");
        }
    }

    return converted;
}

void Byte::clear()
{
    for (int i = BYTE_SIZE; i >= 1; i--)
    {
        bit[i - 1] = false;
    }
}

void Byte::leftShift()
{
}
