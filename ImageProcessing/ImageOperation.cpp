#include "ImageOperation.h"

#include <QFile>

ImageOperation::ImageOperation(void)
{
}


ImageOperation::~ImageOperation(void)
{
}

void ImageOperation::saveAsGif()
{
	QString testimg("C:/Users/Public/Pictures/Sample Pictures/Hydrangeas.gif");
	
	FCObjImage   img;
	img.Load (testimg.toStdWString().c_str());
	QString output("test.gif");
	img.Save(output.toStdWString().c_str());
}


QImage* ImageOperation::imagePreProcess1(QImage *image, int sharp, int smooth, int contrast, QRgb whitebal, QRgb satu, QRgb hue)
{
	int width = image->width();
	int height = image->height();
	FCObjImage *img = ImageOperation::makeFCObjFromQImage(image);

	FCEffectSharp effSharp(sharp);//数值越小锐化越强
	img->ApplyEffect(effSharp);

	FCEffectBlur_Gauss c1(smooth, true);
	img->ApplyEffect(c1);

	FCEffectBrightnessContrast bc(0, contrast);
	img->ApplyEffect(bc);

	QImage *result = ImageOperation::makeQImageFromFCObj(img);
	return result;
}

QImage* ImageOperation::imagePreProcess2(QImage *image, QRgb whitebal, QRgb satu, QRgb hue)
{
	int width = image->width();
	int height = image->height();
	FCObjImage *img = ImageOperation::makeFCObjFromQImage(image);

	int red = qRed(whitebal);
	int green = qGreen(whitebal);
	int blue = qBlue(whitebal);
	FCEffectAdjustRGB adjust(red, green, blue);
	img->ApplyEffect(adjust);

	double h1,s1,l1,h2,s2,l2;
	ImageOperation::RGB2HSL(satu, h1,s1,l1);
	ImageOperation::RGB2HSL(hue, h2,s2,l2);
	FCEffectHueSaturation hs(s1*100, h2*100);
	img->ApplyEffect(hs);

	QImage *result = ImageOperation::makeQImageFromFCObj(img);
	return result;
}

void ImageOperation::RGB2HSL(QRgb color, double &H,double &S,double &L)
{
	double R,G,B,Max,Min,del_R,del_G,del_B,del_Max;
	R = qRed(color) / 255.0;       //Where RGB values = 0 ÷ 255
	G = qGreen(color) / 255.0;
	B = qBlue(color) / 255.0;

	Min = min(R, min(G, B));    //Min. value of RGB
	Max = max(R, max(G, B));    //Max. value of RGB
	del_Max = Max - Min;        //Delta RGB value

	L = (Max + Min) / 2.0;

	if (del_Max == 0)           //This is a gray, no chroma...
	{
		//H = 2.0/3.0;          //Windows下S值为0时，H值始终为160（2/3*240）
		H = 0;                  //HSL results = 0 ÷ 1
		S = 0;
	}
	else                        //Chromatic data...
	{
		if (L < 0.5) S = del_Max / (Max + Min);
		else         S = del_Max / (2 - Max - Min);

		del_R = (((Max - R) / 6.0) + (del_Max / 2.0)) / del_Max;
		del_G = (((Max - G) / 6.0) + (del_Max / 2.0)) / del_Max;
		del_B = (((Max - B) / 6.0) + (del_Max / 2.0)) / del_Max;

		if      (R == Max) H = del_B - del_G;
		else if (G == Max) H = (1.0 / 3.0) + del_R - del_B;
		else if (B == Max) H = (2.0 / 3.0) + del_G - del_R;

		if (H < 0)  H += 1;
		if (H > 1)  H -= 1;
	}
}


FCObjImage* ImageOperation::makeFCObjFromQImage(QImage *image)
{
	int width = image->width();
	int height = image->height();
	FCObjImage *fcImg = new FCObjImage();
	if(!fcImg->Create(width, height, 32))
	{
		return NULL;
	}
	for (int y = 0; y < height; y++)  
	{
		for (int x = 0; x < width; x++)  
		{
			QRgb color = image->pixel(x, y);
			RGBQUAD rgbquad;
			rgbquad.rgbRed = qRed(color);
			rgbquad.rgbGreen = qGreen(color);
			rgbquad.rgbBlue = qBlue(color);
			*(RGBQUAD*)fcImg->GetBits(x, y) = rgbquad;
		}
	}
	return fcImg;
}

QImage* ImageOperation::makeQImageFromFCObj(FCObjImage* fcImg)
{
	int width = fcImg->Width();
	int height = fcImg->Height();
	QImage *qImg = new QImage(width, height, QImage::Format_RGB32);
	for (int y = 0; y < height; y++)  
	{
		for (int x = 0; x < width; x++)
		{
			RGBQUAD *rgbquad = (RGBQUAD*)fcImg->GetBits(x, y);
			int red = rgbquad->rgbRed;
			int green = rgbquad->rgbGreen;
			int blue = rgbquad->rgbBlue;
			qImg->setPixel(x,y,qRgb(red,green,blue));
		}
	}
	return qImg;
}

