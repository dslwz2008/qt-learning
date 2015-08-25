#include "showimage.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ShowImage w;
	w.show();
	return a.exec();
}
