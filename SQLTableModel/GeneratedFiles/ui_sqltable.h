/********************************************************************************
** Form generated from reading UI file 'sqltable.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLTABLE_H
#define UI_SQLTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SQLTableClass
{
public:
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QWidget *SQLTableClass)
    {
        if (SQLTableClass->objectName().isEmpty())
            SQLTableClass->setObjectName(QString::fromUtf8("SQLTableClass"));
        SQLTableClass->resize(600, 400);
        tableView = new QTableView(SQLTableClass);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 20, 371, 261));
        label = new QLabel(SQLTableClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 330, 54, 12));
        lineEdit = new QLineEdit(SQLTableClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 330, 113, 20));
        pushButton = new QPushButton(SQLTableClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 330, 75, 23));
        pushButton_2 = new QPushButton(SQLTableClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 370, 75, 23));
        pushButton_3 = new QPushButton(SQLTableClass);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 40, 75, 23));
        pushButton_4 = new QPushButton(SQLTableClass);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 90, 75, 23));
        pushButton_5 = new QPushButton(SQLTableClass);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(460, 140, 75, 23));
        pushButton_6 = new QPushButton(SQLTableClass);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(460, 200, 75, 23));
        pushButton_7 = new QPushButton(SQLTableClass);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(460, 280, 75, 23));
        pushButton_8 = new QPushButton(SQLTableClass);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(460, 320, 75, 23));

        retranslateUi(SQLTableClass);

        QMetaObject::connectSlotsByName(SQLTableClass);
    } // setupUi

    void retranslateUi(QWidget *SQLTableClass)
    {
        SQLTableClass->setWindowTitle(QApplication::translate("SQLTableClass", "SQLTable", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SQLTableClass", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SQLTableClass", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SQLTableClass", "\345\205\250\350\241\250", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("SQLTableClass", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("SQLTableClass", "\346\222\244\351\224\200", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("SQLTableClass", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("SQLTableClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("SQLTableClass", "\346\214\211id\345\215\207\345\272\217", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("SQLTableClass", "\346\214\211id\351\231\215\345\272\217", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SQLTableClass: public Ui_SQLTableClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLTABLE_H
