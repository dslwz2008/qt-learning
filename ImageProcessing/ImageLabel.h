#ifndef IMAGELABEL_H
#define IMAGELABEL_H

#include <QLabel>
#include <QRubberBand>

class ImageLabel :	public QLabel
{
	Q_OBJECT
public:
	ImageLabel(QWidget *parent = 0);
	~ImageLabel(void);
	QRect drawnRect();
signals:
	void drawRectFinished();
	void drawLineFinished();
protected:
	virtual void mouseMoveEvent ( QMouseEvent * ev );
	virtual void mousePressEvent ( QMouseEvent * ev );
	virtual void mouseReleaseEvent ( QMouseEvent * ev );
	virtual void paintEvent ( QPaintEvent * ev);
private:
	//保存操作模式
	//0 --- 默认模式，不采用任何操作
	//1 --- 图像处理中的区域增强功能
	//2 --- 画线，标定
	//3 --- 画线，长度测量
	//4 --- 画矩形，面积测量
	QRubberBand *_rubberBand;
	QPoint _originPoint;
	QPoint _endPoint;
};

#endif
