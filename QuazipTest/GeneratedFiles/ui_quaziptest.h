/********************************************************************************
** Form generated from reading UI file 'quaziptest.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUAZIPTEST_H
#define UI_QUAZIPTEST_H

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

class Ui_QuazipTestClass
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

    void setupUi(QMainWindow *QuazipTestClass)
    {
        if (QuazipTestClass->objectName().isEmpty())
            QuazipTestClass->setObjectName(QString::fromUtf8("QuazipTestClass"));
        QuazipTestClass->resize(600, 400);
        centralWidget = new QWidget(QuazipTestClass);
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 580, 323));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        QuazipTestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QuazipTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        QuazipTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QuazipTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QuazipTestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QuazipTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QuazipTestClass->setStatusBar(statusBar);

        retranslateUi(QuazipTestClass);

        QMetaObject::connectSlotsByName(QuazipTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QuazipTestClass)
    {
        QuazipTestClass->setWindowTitle(QApplication::translate("QuazipTestClass", "QuazipTest", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QuazipTestClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QuazipTestClass: public Ui_QuazipTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUAZIPTEST_H
