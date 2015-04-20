#include "showimage.h"

ShowImage::ShowImage(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.gridLayout_2->setAlignment(Qt::AlignCenter);
	ui.label->setPixmap(QPixmap::fromImage(QImage("bear.png")));
}

ShowImage::~ShowImage()
{

}
