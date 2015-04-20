#include "quaziptest.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QuazipTest w;
	w.show();
	return a.exec();
}
