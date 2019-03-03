#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton *but1 = new QPushButton("quit");
    QObject::connect(but1,SIGNAL(clicked(bool)),&a,SLOT(quit()));
    but1->show();
    return a.exec();
}
