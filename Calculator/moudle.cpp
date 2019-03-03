#include "moudle.h"

Moudle::Moudle()
{
    num1 = 0;
    num2 = 0;
}

void Moudle::getNum1(int num)
{
    num1 = num;
}

void Moudle::getNum2(int num)
{
    num2 = num;
}

void Moudle::getFlag(QString f)
{
    flag = f;
}
QString Moudle::getResult()
{
    int result;
    if(flag == "+")
        result = num1 + num2;
    else if(flag == "-")
        result = num1 - num2;
    else if(flag == "*")
        result = num1 * num2;
    else if(flag == "/")
    {
        if(num2 == 0)
            return "ERROR";
        result = num1 / num2;
    }
    else
        return num1;
    return QString::number(result);
}
