#ifndef SQLTABLE_H
#define SQLTABLE_H

#include <QtGui/QWidget>
#include <QSqlTableModel>
#include "ui_sqltable.h"

class SQLTable : public QWidget
{
	Q_OBJECT

public:
	SQLTable(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SQLTable();

private:
	Ui::SQLTableClass ui;
	QSqlTableModel *model;
};

#endif // SQLTABLE_H
