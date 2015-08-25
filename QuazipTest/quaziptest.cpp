#include "quaziptest.h"
#include "DataZip.h"
#include <QDir>

QuazipTest::QuazipTest(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	//QString filepath("./exported.zip");
	//QDir dir(QDir::currentPath() + "/data");
	//QString dirpath = dir.path();
	//DataZip::archive(filepath, dir, tr("comments"));
	//DataZip::extract(filepath, dirpath, "");
	QImage *ppm = new QImage("D:/Programs/flycapture/trunk/FlycapEx/FlycapEx/data/images/demo(1).jpg");
	ui.label->setPixmap(QPixmap::fromImage(*ppm));
}

QuazipTest::~QuazipTest()
{

}
