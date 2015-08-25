/********************************************************************************
** Form generated from reading UI file 'settingdemo.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGDEMO_H
#define UI_SETTINGDEMO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDemoClass
{
public:
    QWidget *centralWidget;
    QSlider *horizontalSlider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbSchemes;
    QPushButton *btnNew;
    QPushButton *btnSave;
    QPushButton *btnDelete;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SettingDemoClass)
    {
        if (SettingDemoClass->objectName().isEmpty())
            SettingDemoClass->setObjectName(QString::fromUtf8("SettingDemoClass"));
        SettingDemoClass->resize(600, 400);
        centralWidget = new QWidget(SettingDemoClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(100, 90, 160, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 20, 314, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cmbSchemes = new QComboBox(layoutWidget);
        cmbSchemes->setObjectName(QString::fromUtf8("cmbSchemes"));
        cmbSchemes->setEditable(true);

        horizontalLayout->addWidget(cmbSchemes);

        btnNew = new QPushButton(layoutWidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnSave = new QPushButton(layoutWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);

        btnDelete = new QPushButton(layoutWidget);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

        horizontalLayout->addWidget(btnDelete);

        SettingDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SettingDemoClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        SettingDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SettingDemoClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SettingDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SettingDemoClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SettingDemoClass->setStatusBar(statusBar);

        retranslateUi(SettingDemoClass);

        QMetaObject::connectSlotsByName(SettingDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *SettingDemoClass)
    {
        SettingDemoClass->setWindowTitle(QApplication::translate("SettingDemoClass", "SettingDemo", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("SettingDemoClass", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("SettingDemoClass", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnDelete->setText(QApplication::translate("SettingDemoClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingDemoClass: public Ui_SettingDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGDEMO_H
