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
	QWebElement elePatientName = doc.findFirst("#patientName"); //���� 
	QString text = elePatientName.toPlainText();
	elePatientName.setPlainText(tr("���ں���"));

	QWebElement elePatientSex = doc.findFirst("#patientSex"); // �Ա�
	elePatientSex.setPlainText(tr("��"));

	//QWebElement elePatientDate = doc.findFirst("#patientBirthday"); // ��������
	//elePatientDate.setPlainText(_currentPatient->_patient.chushengriqi.toString("yy.MM.dd"));

	//QWebElement elePatientIDcard = doc.findFirst("#patientIdNumber"); // ���֤
	//elePatientIDcard.setPlainText(_currentPatient->_patient.shenfenzheng);

	//QWebElement elePatientSS = doc.findFirst("#patientSocialSecurity"); // �籣
	//elePatientSS.setPlainText(_currentPatient->_patient.sheboka);

	//QWebElement elePatientPhone = doc.findFirst("#patientPhone"); // �绰
	//elePatientPhone.setPlainText(_currentPatient->_patient.dianhua);

	////�޸�ͼƬ·��
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
	//QWebElement elePatientImage1 = doc.findFirst("#firstImage"); //��һ��ͼƬ
	//elePatientImage1.setAttribute("src",paths.at(0));

	//QWebElement elePatientImage2 = doc.findFirst("#secondImage");	 // �ڶ���
	//elePatientImage2.setAttribute("src",paths.at(1));

	//QWebElement elePatientImage3 = doc.findFirst("#thirdImage");// ������
	//elePatientImage3.setAttribute("src",paths.at(2));

	//QWebElement elePatientImage4 = doc.findFirst("#fourthImage");// ������
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
