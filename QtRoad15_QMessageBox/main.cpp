#include "myqmessagebox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyQMessageBox w;
    w.show();

    return a.exec();
}
