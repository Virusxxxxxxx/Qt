#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include <qapplication.h>
#include <qlabel.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLabel *lab1 = new QLabel("<h1><font color = red>Hello</font> <br>QT</br></h1>");
	lab1->show();
	QtGuiApplication1 w;
	w.show();
	return a.exec();
}
