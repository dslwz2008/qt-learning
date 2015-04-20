#include "ImageShowLabel.h"

#include <QPainter>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QDebug>

ImageShowLabel::ImageShowLabel(QWidget *parent)
	:QLabel(parent)
{
	_pCurrent = new QImage("Desert.jpg");
	_pOriginal = new QImage("Desert.jpg");
	setPixmap(QPixmap::fromImage(*_pOriginal));
}
ImageShowLabel::~ImageShowLabel(void)
{

}
void ImageShowLabel::paintEvent (QPaintEvent * ev)
{
	QLabel::paintEvent(ev); // do the default label display
}
void ImageShowLabel::wheelEvent (QWheelEvent * ev)
{
	int numDegrees = ev->delta() / 8;
	int numSteps = numDegrees / 15;
	if (numSteps > 0)
	{
		zoomIn();
	}
	else
	{
		zoomOut();
	}
	ev->accept();
}
void ImageShowLabel::displayImage()
{

}

void ImageShowLabel::zoomIn()
{
	QImage *scaledImage = new QImage();
	*scaledImage = _pOriginal->scaled(_pCurrent->width()*1.1f, _pCurrent->height()*1.1f,
		Qt::KeepAspectRatio, Qt::FastTransformation);
	setPixmap(QPixmap::fromImage(*scaledImage));
	delete _pCurrent;
	_pCurrent = scaledImage;
}
void ImageShowLabel::zoomOut()
{
	QImage *scaledImage = new QImage();
	*scaledImage = _pOriginal->scaled(_pCurrent->width()*0.9f, _pCurrent->height()*0.9f,
		Qt::KeepAspectRatio, Qt::FastTransformation);
	setPixmap(QPixmap::fromImage(*scaledImage));
	delete _pCurrent;
	_pCurrent = scaledImage;
}

void ImageShowLabel::mouseMoveEvent ( QMouseEvent * ev )
{

}
void ImageShowLabel::mousePressEvent ( QMouseEvent * ev )
{

}
void ImageShowLabel::mouseReleaseEvent ( QMouseEvent * ev )
{

}