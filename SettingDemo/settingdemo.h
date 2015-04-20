#ifndef SETTINGDEMO_H
#define SETTINGDEMO_H

#include <QtGui/QMainWindow>
#include "ui_settingdemo.h"

class SettingDemo : public QMainWindow
{
	Q_OBJECT

public:
	SettingDemo(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SettingDemo();

private:
	Ui::SettingDemoClass ui;
};

#endif // SETTINGDEMO_H
