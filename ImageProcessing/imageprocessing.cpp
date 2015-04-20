#include "imageprocessing.h"
#include "ImageOperation.h"
#include <QMessageBox>
#include <QIcon>
#include <QPainter>
#include <QProcess>
#include <QListWidget>
#include <QAbstractSlider>
#include <QScrollBar>

ImageProcessing::ImageProcessing(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.scrollArea->horizontalScrollBar(), SIGNAL(valueChanged ( int )), this, SLOT(hbarChanged(int)));
	//_testImage = new QImage("bear.png");
	//_imageLabel = new ImageLabel();
	//_imageLabel->setPixmap(QPixmap::fromImage(*_testImage));
	//ui.gridLayout->addWidget(_imageLabel, 0, 0, 1, 1);
	//QIcon rawIcon = QIcon(QPixmap::fromImage(*_testImage));
	//ui.btnIcon->setIcon(overlaySubImage(rawIcon,0));
	//ImageOperation::saveAsGif();
	//connect(ui.action_drawRect, SIGNAL(triggered()), this, SLOT(clicked_DrawRect()));
	//saveAsDcm(tr("Desert.jpg"),tr("test.dcm"));

	//connect(ui.btnIcon, SIGNAL(clicked()), this, SLOT(clicked_IconButton()));
	//connect(ui.tabWidget, SIGNAL(currentChanged(int)), this, SLOT(tabWidget_currentChanged(int)));

	QString imgPath1(tr("C:/Users/Administrator/Pictures/护眼壁纸/5445.jpg"));
	//QString imgPath2(tr("C:/Users/Administrator/Pictures/护眼壁纸/6033.jpg"));
	QImage *img1 = new QImage(imgPath1);
	ui.lblImage->setPixmap(QPixmap::fromImage(*img1));
	int min = ui.scrollArea->horizontalScrollBar()->minimum();
	int max = ui.scrollArea->horizontalScrollBar()->maximum();
	int value = ui.scrollArea->horizontalScrollBar()->value();
	ui.scrollArea->horizontalScrollBar()->setRange(0,img1->width());
	min = ui.scrollArea->horizontalScrollBar()->minimum();
	max = ui.scrollArea->horizontalScrollBar()->maximum();
	value = ui.scrollArea->horizontalScrollBar()->width();
	ui.scrollArea->horizontalScrollBar()->setValue(img1->width()/3);
	//QImage *img2 = new QImage(imgPath2);

	//ui.listWidget->setViewMode(QListWidget::IconMode);

	//ui.listWidget->setIconSize(QSize(200,200));

	//ui.listWidget->setResizeMode(QListWidget::Adjust);
	//ui.listWidget->addItem(new QListWidgetItem(QIcon(imgPath1),"Earth"));
	//ui.listWidget->addItem(new QListWidgetItem(QIcon(imgPath2),"Tornado"));

	//ui.lblLeft->setPixmap(QPixmap::fromImage(*img1));
	//QImage *image1 = ImageOperation::imagePreProcess1(img1, 90, 1, 34, qRgb(100,0,0), qRgb(0,0,0), qRgb(0,0,0));
	//image1->save("test1.jpg");
	//QImage *image2 = ImageOperation::imagePreProcess2(image1/*new QImage("test1.jpg")*/, qRgb(100,0,0), qRgb(-127,128,56), qRgb(125,80,-30));
	//ui.lblRight->setPixmap(QPixmap::fromImage(*image2));

}

ImageProcessing::~ImageProcessing()
{

}
void ImageProcessing::hbarChanged(int val)
{
	statusBar()->showMessage(QString::number(val));
}
void ImageProcessing::clicked_DrawRect()
{
	//ui.btnIcon->hide();
	//ui.splitter->setSizes(sizes);
	//int a=0;
	///* Create the QEventLoop */
	//QEventLoop pause;
	///* connect the QHttp.requestFinished() Signal to the QEventLoop.quit() Slot */
	//connect(_imageLabel, SIGNAL(drawRectFinished()), &pause, SLOT(quit()));
	///* The code that will run during the QEventLoop */
	////login.request(header,&logmein,&result);
	///* Execute the QEventLoop - it will quit when the above finished due to the connect() */
	//pause.exec();

	//int b =0;
	//b =3;
	//QRect rect = _imageLabel->drawnRect();
	//QString msg = QString("%1,%2").arg(QString::number(rect.top()))
	//	.arg(QString::number(rect.bottom()));
	//QMessageBox::information(this, tr("信息"), msg, QMessageBox::Ok);
}


QIcon ImageProcessing::overlaySubImage(QIcon rawIcon, int flag)
{
	QSize size(32, 32);
	QPixmap pixmap(rawIcon.pixmap(size,  QIcon::Normal, QIcon::On));
	QPainter painter(&pixmap);
	if (flag == 0)//video icon
	{
		painter.drawImage(QPoint(10, 10), QImage(tr(":/ImageProcessing/icons/video.png")));
	}
	else if(flag == 1)//delete icon
	{
		painter.drawImage(QPoint(20, 20), QImage(tr(":/ImageProcessing/icons/video.png")));
	}
	return QIcon(pixmap);
}
void ImageProcessing::saveAsDcm(QString srcFilename, QString destFilename)
{
	QString dicomProgram("img2dcm");				//暂未写参数
	QStringList dicomArguments;
	dicomArguments << srcFilename << destFilename;
	QProcess *dicomProcess = new QProcess();
	dicomProcess->start(dicomProgram,dicomArguments);
}

void ImageProcessing::clicked_IconButton()
{
	//ui.listWidget->setMaximumSize(16777215,16777215);
	//ui.btnIcon->hide();
}

void ImageProcessing::tabWidget_currentChanged(int index)
{
	//QString tabname = ui.tabWidget->widget(index)->objectName();
	//if (tabname == tr("tab_2"))
	//{
	//	ui.glyt->addWidget(ui.listWidget,0,0,1,1);
	//}
	//else if (tabname == tr(""))
	//{
	//}
}
