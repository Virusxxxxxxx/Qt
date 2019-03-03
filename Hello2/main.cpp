#include <QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel lable("Hello,world");
    lable.show();

    return app.exec();
}
