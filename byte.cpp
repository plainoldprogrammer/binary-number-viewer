#include "byte.h"

Byte::Byte()
{

}

void Byte::printData()
{
    for (int i = BYTE_SIZE; i >= 1; i--)
    {
        qDebug() << "byte[" << i << "]: " << data[i];
    }
}
