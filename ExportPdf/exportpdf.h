#ifndef EXPORTPDF_H
#define EXPORTPDF_H

#include <QtGui/QMainWindow>
#include "ui_exportpdf.h"

class ExportPdf : public QMainWindow
{
	Q_OBJECT

public:
	ExportPdf(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ExportPdf();

private slots:
	void onAction_ExportPdf();
	void onAction_ExportWord();

private:
	Ui::ExportPdfClass ui;
};

#endif // EXPORTPDF_H
