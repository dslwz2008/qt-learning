#include "sqltable.h"
#include "database.h"
#include <QTextCodec>
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());  
	if(!createConnection())  
	{
		return 1;  
	}
	SQLTable w;
	w.show();
	return a.exec();
}
