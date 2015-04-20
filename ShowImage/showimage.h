#ifndef SHOWIMAGE_H
#define SHOWIMAGE_H

#include <QtGui/QMainWindow>
#include "ui_showimage.h"
#include "ImageShowLabel.h"

class ShowImage : public QMainWindow
{
	Q_OBJECT

public:
	ShowImage(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ShowImage();

private:
	Ui::ShowImageClass ui;
	ImageShowLabel *_lable;
};

#endif // SHOWIMAGE_H
