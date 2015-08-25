#include "settingdemo.h"
#include <QSettings>
#include <QDebug>

SettingDemo::SettingDemo(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	QSettings settings;
	settings.setValue("fridge/default/color", Qt::white);
	settings.setValue("fridge/default/size", QSize(32, 96));
	settings.setValue("fridge/color", Qt::white);
	settings.setValue("fridge/size", QSize(32, 96));
	settings.setValue("sofa", true);
	settings.setValue("tv", false);

	QStringList groups = settings.childGroups();
	qDebug() << groups;
}

SettingDemo::~SettingDemo()
{

}
