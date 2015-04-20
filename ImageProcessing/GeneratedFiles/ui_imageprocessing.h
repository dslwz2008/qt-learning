/********************************************************************************
** Form generated from reading UI file 'imageprocessing.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPROCESSING_H
#define UI_IMAGEPROCESSING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageProcessingClass
{
public:
    QAction *action_drawRect;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *lblImage;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageProcessingClass)
    {
        if (ImageProcessingClass->objectName().isEmpty())
            ImageProcessingClass->setObjectName(QString::fromUtf8("ImageProcessingClass"));
        ImageProcessingClass->resize(594, 479);
        action_drawRect = new QAction(ImageProcessingClass);
        action_drawRect->setObjectName(QString::fromUtf8("action_drawRect"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ImageProcessing/icons/video.png"), QSize(), QIcon::Normal, QIcon::On);
        action_drawRect->setIcon(icon);
        centralWidget = new QWidget(ImageProcessingClass);
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 574, 402));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblImage = new QLabel(scrollAreaWidgetContents);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));

        gridLayout_2->addWidget(lblImage, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        ImageProcessingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageProcessingClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 594, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        ImageProcessingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageProcessingClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ImageProcessingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageProcessingClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ImageProcessingClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_drawRect);

        retranslateUi(ImageProcessingClass);

        QMetaObject::connectSlotsByName(ImageProcessingClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageProcessingClass)
    {
        ImageProcessingClass->setWindowTitle(QApplication::translate("ImageProcessingClass", "ImageProcessing", 0, QApplication::UnicodeUTF8));
        action_drawRect->setText(QApplication::translate("ImageProcessingClass", "\345\255\230\344\270\272GIF", 0, QApplication::UnicodeUTF8));
        lblImage->setText(QApplication::translate("ImageProcessingClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("ImageProcessingClass", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImageProcessingClass: public Ui_ImageProcessingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPROCESSING_H
