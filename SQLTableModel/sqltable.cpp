#include "sqltable.h"

SQLTable::SQLTable(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
	model = new QSqlTableModel(this);  
	model->setTable("scooter");  
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->setFilter("limit 5");
	model->select(); //ѡȡ�������������  
	// model->removeColumn(1); //����ʾname������,�����ʱ��Ӽ�¼��������Ե�ֵ��Ӳ���  
	ui.tableView->setModel(model);  
	// ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);   //ʹ�䲻�ɱ༭ 
}

SQLTable::~SQLTable()
{

}
