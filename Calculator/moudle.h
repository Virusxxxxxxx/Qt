#ifndef MOUDLE_H
#define MOUDLE_H
#include <QString>

class Moudle
{
public:
    Moudle();
    void getNum1(int num);
    void getNum2(int num);
    void getFlag(QString f);
    QString getResult();
private:
    int num1;
    int num2;
    QString flag;
};

#endif // MOUDLE_H
