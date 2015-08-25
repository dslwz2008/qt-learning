#ifndef IMAGESHOWLABEL_H
#define IMAGESHOWLABEL_H

#include <QLabel>

class ImageShowLabel:public QLabel
{
	Q_OBJECT
public:
	ImageShowLabel(QWidget *parent = 0);
	~ImageShowLabel(void);
protected:
	virtual void paintEvent (QPaintEvent * ev);
	virtual void wheelEvent (QWheelEvent * ev);
	virtual void mouseMoveEvent ( QMouseEvent * ev );
	virtual void mousePressEvent ( QMouseEvent * ev );
	virtual void mouseReleaseEvent ( QMouseEvent * ev );
private:
	void displayImage();
	void zoomIn();
	void zoomOut();
	QImage * _pOriginal;
	QImage * _pCurrent;
};

#endif