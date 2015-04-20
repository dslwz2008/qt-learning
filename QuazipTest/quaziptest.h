#ifndef QUAZIPTEST_H
#define QUAZIPTEST_H

#include <QtGui/QMainWindow>
#include "ui_quaziptest.h"

class QuazipTest : public QMainWindow
{
	Q_OBJECT

public:
	QuazipTest(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QuazipTest();

private:
	Ui::QuazipTestClass ui;
};

#endif // QUAZIPTEST_H
