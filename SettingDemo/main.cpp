#include "settingdemo.h"
#include <QtGui/QApplication>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QCoreApplication::setOrganizationName("MySoft");
	QCoreApplication::setOrganizationDomain("mysoft.com");
	QCoreApplication::setApplicationName("Star Runner");
	SettingDemo w;
	w.show();
	return a.exec();
}
