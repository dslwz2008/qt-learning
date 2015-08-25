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

	//����һ��default�����û�����ù��Ļ�
	SettingsEx::setPresetDefault();
	//�¼�һ��
	SettingsEx::addPreset("custom1", 10, 20);
	SettingsEx::addPreset("custom2", 5678, 41563);
	SettingsEx::addPreset("custom3", 45, 123);
	SettingsEx::addPreset("custom4", 8576, 31);
	SettingsEx::addPreset("custom5", 964, 498);
	//��ӵ�ui
	ui.cmbSchemes->addItems(SettingsEx::getPresetNames());

	//ɾ��һ��scheme
	SettingsEx::removePreset("custom3");	
	ui.cmbSchemes->removeItem(ui.cmbSchemes->findText("custom3"));

	//ͬ���ģ�ɫ��ƽ��������Щ����
	////color balance default
	//setttings.setValue("cb-default", 1);//��һ�����λ
	//settings.setValue("cb-default/color", Qt::white);
	//settings.setValue("cb-default/size", QSize(32, 96));

	int v = SettingsEx::getPreset("custom4");
	qDebug() << v;
}

SettingDemo::~SettingDemo()
{

}
