#include "byte.h"

Byte::Byte()
{

}

void Byte::logData()
{
    for (int i = BYTE_SIZE; i >= 1; i--)
    {
        qDebug() << "byte[" << i - 1 << "]: " << data[i - 1];
    }
}

void Byte::setFromDecimal(QString decimal)
{
    int decimalNumber = decimal.toInt();

    for (int i = BYTE_SIZE; i>= 1; i--)
    {
        int limit = pow(2, i - 1);
        qDebug() << "limit is " << limit << " and decimal is " << decimalNumber;

        if (decimalNumber >= limit)
        {
            data[i - 1] = true;
            decimalNumber = decimalNumber - limit;
        }
    }
}

QString Byte::getData()
{
    QString converted = "";

    for (int i = BYTE_SIZE; i >= 1; i--)
    {
        if (data[i - 1] == true)
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
