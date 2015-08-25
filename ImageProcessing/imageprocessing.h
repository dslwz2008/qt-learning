#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <QtGui/QMainWindow>
#include "ui_imageprocessing.h"
#include "ImageLabel.h"

class ImageProcessing : public QMainWindow
{
	Q_OBJECT

public:
	ImageProcessing(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ImageProcessing();
private slots:
	void clicked_DrawRect();
	void clicked_IconButton();
	void tabWidget_currentChanged(int index);
	void hbarChanged(int);
private:
	QIcon overlaySubImage(QIcon rawIcon, int type);
	void saveAsDcm(QString srcFilename, QString destFilename);

private:
	Ui::ImageProcessingClass ui;
	ImageLabel *_imageLabel;
	QImage *_testImage;
};

#endif // IMAGEPROCESSING_H
