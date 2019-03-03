#include "hello.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("hello! hxx is back!");
    label.show();

    return a.exec();
}
