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
	//�������ģʽ
	//0 --- Ĭ��ģʽ���������κβ���
	//1 --- ͼ�����е�������ǿ����
	//2 --- ���ߣ��궨
	//3 --- ���ߣ����Ȳ���
	//4 --- �����Σ��������
	QRubberBand *_rubberBand;
	QPoint _originPoint;
	QPoint _endPoint;
};

#endif
