#include "exportpdf.h"
#include <QtWebKit/QWebView>
#include <QtWebKit/QWebPage>
#include <QtWebKit/QWebFrame>
#include <QMessageBox>
#include <Qprinter>
#include <QTextDocument>
#include <QtWebKit/QWebElement>

ExportPdf::ExportPdf(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.action_toPdf, SIGNAL(triggered()), this, SLOT(onAction_ExportPdf()));
	connect(ui.action_toWord, SIGNAL(triggered()), this, SLOT(onAction_ExportWord()));
}

ExportPdf::~ExportPdf()
{

}

void ExportPdf::onAction_ExportPdf()
{
	//QWebPage *page = ui.webView->page();
	//QWebFrame *frame = page->mainFrame();
	//QString html = frame->toHtml();
	//QMessageBox::information(this, tr("qwe"), html, QMessageBox::Ok);

	QWebPage *page = ui.webView->page();
	QWebFrame *frame = 	page->mainFrame();
	QWebElement doc = frame->documentElement();
	QWebElementCollection first = doc.findAll("label");
	int count = first.count();
	QWebElement elePatientName = doc.findFirst("#patientName"); //姓名 
	QString text = elePatientName.toPlainText();
	elePatientName.setPlainText(tr("进口韩国"));

	QWebElement elePatientSex = doc.findFirst("#patientSex"); // 性别
	elePatientSex.setPlainText(tr("男"));

	//QWebElement elePatientDate = doc.findFirst("#patientBirthday"); // 出生日期
	//elePatientDate.setPlainText(_currentPatient->_patient.chushengriqi.toString("yy.MM.dd"));

	//QWebElement elePatientIDcard = doc.findFirst("#patientIdNumber"); // 身份证
	//elePatientIDcard.setPlainText(_currentPatient->_patient.shenfenzheng);

	//QWebElement elePatientSS = doc.findFirst("#patientSocialSecurity"); // 社保
	//elePatientSS.setPlainText(_currentPatient->_patient.sheboka);

	//QWebElement elePatientPhone = doc.findFirst("#patientPhone"); // 电话
	//elePatientPhone.setPlainText(_currentPatient->_patient.dianhua);

	////修改图片路径
	//QVector<QString> paths;
	//for(int j=0; j < items.size()&& j < 4; ++j)
	//{
	//	quint64 id = items.at(j)->data(Qt::ToolTipRole).toULongLong();
	//	for(int i=0; i< _currentPatient->_images.count(); ++i)
	//	{
	//		if(id == _currentPatient->_images[i].id)
	//		{
	//			QString imagePath = _currentPatient->_images[i].yulanlujing;
	//			QDir dir;
	//			QString tempPath = dir.currentPath() +'/' + imagePath;
	//			paths.push_back(tempPath);
	//			break;
	//		}
	//	}
	//}
	//QWebElement elePatientImage1 = doc.findFirst("#firstImage"); //第一张图片
	//elePatientImage1.setAttribute("src",paths.at(0));

	//QWebElement elePatientImage2 = doc.findFirst("#secondImage");	 // 第二张
	//elePatientImage2.setAttribute("src",paths.at(1));

	//QWebElement elePatientImage3 = doc.findFirst("#thirdImage");// 第三张
	//elePatientImage3.setAttribute("src",paths.at(2));

	//QWebElement elePatientImage4 = doc.findFirst("#fourthImage");// 第四张
	//elePatientImage4.setAttribute("src",paths.at(3));

	QString filename("test.pdf");
	QPrinter  printer;
	printer.setPageSize(QPrinter::A4);
	printer.setOutputFormat(QPrinter::PdfFormat);
	printer.setOutputFileName(filename);
	ui.webView->print(&printer);

	//QTextDocument textDocument;
	//textDocument.setHtml(html);
	//textDocument.print(&printer);
}
void ExportPdf::onAction_ExportWord()
{

}
