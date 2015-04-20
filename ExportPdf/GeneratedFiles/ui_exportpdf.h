/********************************************************************************
** Form generated from reading UI file 'exportpdf.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTPDF_H
#define UI_EXPORTPDF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_ExportPdfClass
{
public:
    QAction *action_toPdf;
    QAction *action_toWord;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWebView *webView;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ExportPdfClass)
    {
        if (ExportPdfClass->objectName().isEmpty())
            ExportPdfClass->setObjectName(QString::fromUtf8("ExportPdfClass"));
        ExportPdfClass->resize(672, 627);
        action_toPdf = new QAction(ExportPdfClass);
        action_toPdf->setObjectName(QString::fromUtf8("action_toPdf"));
        action_toWord = new QAction(ExportPdfClass);
        action_toWord->setObjectName(QString::fromUtf8("action_toWord"));
        centralWidget = new QWidget(ExportPdfClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webView = new QWebView(centralWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("qrc:/ExportPdf/test.html")));

        gridLayout->addWidget(webView, 0, 0, 1, 1);

        ExportPdfClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ExportPdfClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 672, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        ExportPdfClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ExportPdfClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ExportPdfClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ExportPdfClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ExportPdfClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_toPdf);
        menu->addAction(action_toWord);

        retranslateUi(ExportPdfClass);

        QMetaObject::connectSlotsByName(ExportPdfClass);
    } // setupUi

    void retranslateUi(QMainWindow *ExportPdfClass)
    {
        ExportPdfClass->setWindowTitle(QApplication::translate("ExportPdfClass", "ExportPdf", 0, QApplication::UnicodeUTF8));
        action_toPdf->setText(QApplication::translate("ExportPdfClass", "\345\257\274\345\207\272pdf", 0, QApplication::UnicodeUTF8));
        action_toWord->setText(QApplication::translate("ExportPdfClass", "\345\257\274\345\207\272word", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("ExportPdfClass", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ExportPdfClass: public Ui_ExportPdfClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTPDF_H
