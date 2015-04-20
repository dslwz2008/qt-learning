#include "ImageLabel.h"
#include <QPainter>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QMessageBox>

ImageLabel::ImageLabel(QWidget *parent)
	:QLabel(parent),_rubberBand(NULL)
{
}


ImageLabel::~ImageLabel(void)
{
}

void ImageLabel::mousePressEvent ( QMouseEvent * ev )
{
	_originPoint = ev->pos();
	if (!_rubberBand)
		_rubberBand = new QRubberBand(QRubberBand::Rectangle, this);
	_rubberBand->setGeometry(QRect(_originPoint, QSize()));
	_rubberBand->show();
}
void ImageLabel::mouseMoveEvent ( QMouseEvent * ev )
{
	_rubberBand->setGeometry(QRect(_originPoint, ev->pos()).normalized());

}
void ImageLabel::mouseReleaseEvent ( QMouseEvent * ev )
{
	_rubberBand->hide();
	_endPoint = ev->pos();
	QString msg = QString("%1,%2,%3,%4").arg(QString::number(_originPoint.rx())).arg(QString::number(_originPoint.ry()))
		.arg(QString::number(_endPoint.rx())).arg(QString::number(_endPoint.ry()));
	//QMessageBox::information(this, tr("信息"), msg, QMessageBox::Ok);
	QRect rect(_originPoint,_endPoint);
	emit drawRectFinished();
	//repaint();
}
void ImageLabel::paintEvent ( QPaintEvent * ev)
{
	QLabel::paintEvent(ev); // do the default label display

	QPainter draw(this);
	draw.setPen(QPen(QColor(Qt::red)));
	//draw.drawLine(rect().topLeft(), rect().bottomRight());
	QRect rect(_originPoint,_endPoint);
	draw.drawRect(rect);
	QImage rectImage = pixmap()->toImage().copy(rect);
	//图像处理
	draw.drawImage(QPoint(0,0), rectImage);
}
QRect ImageLabel::drawnRect()
{
	return QRect(_originPoint,_endPoint);
}