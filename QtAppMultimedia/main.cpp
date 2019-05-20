#include "QtAppMultimedia.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtAppMultimedia w;
	w.show();
	return a.exec();
}
