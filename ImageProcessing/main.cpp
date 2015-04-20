#include "imageprocessing.h"
#include <QtGui/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());  
	ImageProcessing w;
	w.show();
	return a.exec();
}
