#include <QDebug>
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton button("Quit");
    QObject::connect(&button,&QPushButton::clicked,
                     [](bool){qDebug()<<"You cliked me!";});
    button.show();

    return a.exec();
}
