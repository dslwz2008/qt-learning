#include "sqltable.h"

SQLTable::SQLTable(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
	model = new QSqlTableModel(this);  
	model->setTable("scooter");  
	model->setEditStrategy(QSqlTableModel::OnManualSubmit);
	model->setFilter("limit 5");
	model->select(); //选取整个表的所有行  
	// model->removeColumn(1); //不显示name属性列,如果这时添加记录，则该属性的值添加不上  
	ui.tableView->setModel(model);  
	// ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);   //使其不可编辑 
}

SQLTable::~SQLTable()
{

}
