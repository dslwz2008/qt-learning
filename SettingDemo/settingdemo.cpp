#include "settingdemo.h"
#include "SettingsEx.h"
#include <QDebug>
#include <QSettings>

SettingDemo::SettingDemo(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	//QSettings settings;
	//settings.clear();

	//设置一下default，如果没有设置过的话
	SettingsEx::setPresetDefault();
	//新加一个
	SettingsEx::addPreset("custom1", 10, 20);
	SettingsEx::addPreset("custom2", 5678, 41563);
	SettingsEx::addPreset("custom3", 45, 123);
	SettingsEx::addPreset("custom4", 8576, 31);
	SettingsEx::addPreset("custom5", 964, 498);
	//添加到ui
	ui.cmbSchemes->addItems(SettingsEx::getPresetNames());

	//删除一个scheme
	SettingsEx::removePreset("custom3");	
	ui.cmbSchemes->removeItem(ui.cmbSchemes->findText("custom3"));

	//同样的，色彩平衡设置这些参数
	////color balance default
	//setttings.setValue("cb-default", 1);//加一个标记位
	//settings.setValue("cb-default/color", Qt::white);
	//settings.setValue("cb-default/size", QSize(32, 96));

	int v = SettingsEx::getPreset("custom4");
	qDebug() << v;
}

SettingDemo::~SettingDemo()
{

}
