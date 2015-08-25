/********************************************************************************
** Form generated from reading UI file 'showimage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWIMAGE_H
#define UI_SHOWIMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowImageClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShowImageClass)
    {
        if (ShowImageClass->objectName().isEmpty())
            ShowImageClass->setObjectName(QString::fromUtf8("ShowImageClass"));
        ShowImageClass->resize(803, 626);
        centralWidget = new QWidget(ShowImageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 783, 549));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        ShowImageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ShowImageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 803, 23));
        ShowImageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ShowImageClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ShowImageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ShowImageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ShowImageClass->setStatusBar(statusBar);

        retranslateUi(ShowImageClass);

        QMetaObject::connectSlotsByName(ShowImageClass);
    } // setupUi

    void retranslateUi(QMainWindow *ShowImageClass)
    {
        ShowImageClass->setWindowTitle(QApplication::translate("ShowImageClass", "ShowImage", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ShowImageClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShowImageClass: public Ui_ShowImageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWIMAGE_H
