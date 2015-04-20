#pragma once

#include <QImage>
#include "ImageStone.h"
#include "include/effect/effect_ext.h"


class ImageOperation
{
public:
	ImageOperation(void);
	~ImageOperation(void);
	static void saveAsGif();
	static QImage* makeQImageFromFCObj(FCObjImage* fcImg);
	static FCObjImage* makeFCObjFromQImage(QImage *image);
	static void RGB2HSL(QRgb color, double &H,double &S,double &L);
	static QImage* imagePreProcess1(QImage *image, int sharp, int smooth, int contrast, QRgb whitebal, QRgb satu, QRgb hue);
	static QImage* ImageOperation::imagePreProcess2(QImage *image, QRgb whitebal, QRgb satu, QRgb hue);
};
