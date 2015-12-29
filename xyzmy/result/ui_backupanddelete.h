/********************************************************************************
** Form generated from reading UI file 'backupanddelete.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUPANDDELETE_H
#define UI_BACKUPANDDELETE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BackUpandDelete
{
public:
    QPushButton *pushButton_BackUp;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Exit;
    QLabel *label_Time;
    QLabel *label_6;
    QLabel *label_date;
    QLabel *label;
    QLabel *Label_UserName;
    QPushButton *pushButton_LogOut;
    QLabel *Label_SoftWareVersion;

    void setupUi(QDialog *BackUpandDelete)
    {
        if (BackUpandDelete->objectName().isEmpty())
            BackUpandDelete->setObjectName(QString::fromUtf8("BackUpandDelete"));
        BackUpandDelete->resize(800, 480);
        BackUpandDelete->setStyleSheet(QString::fromUtf8("QDialog[objectName=\"BackUpandDelete\"]\n"
"{\n"
"background-image: url(:/ui/ui_new/bg_Frame.jpg);\n"
"\n"
"\n"
"}"));
        pushButton_BackUp = new QPushButton(BackUpandDelete);
        pushButton_BackUp->setObjectName(QString::fromUtf8("pushButton_BackUp"));
        pushButton_BackUp->setGeometry(QRect(120, 150, 221, 151));
        pushButton_BackUp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:ui/icon/BackUpRecord_up.png);\n"
"\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/icon/BackUpRecord_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        pushButton_Delete = new QPushButton(BackUpandDelete);
        pushButton_Delete->setObjectName(QString::fromUtf8("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(440, 150, 221, 151));
        pushButton_Delete->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:ui/icon/DeleteRecord_up.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/icon/DeleteRecord_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        pushButton_Exit = new QPushButton(BackUpandDelete);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(710, 417, 81, 61));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-image: url(:/ui/Test_Cut/Test_Back.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"font-size:30px bold;\n"
"	background-image: url(:/ui/Test_Cut/Test_Back_Pressed.png);\n"
"border-radius:20px;\n"
"}\n"
""));
        label_Time = new QLabel(BackUpandDelete);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(86, 31, 101, 17));
        label_Time->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_6 = new QLabel(BackUpandDelete);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 801, 54));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui_new/Up_Frame.jpg);"));
        label_date = new QLabel(BackUpandDelete);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(86, 11, 101, 17));
        label_date->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label = new QLabel(BackUpandDelete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 407, 821, 81));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Test_Cut/Test_Copyright.png);"));
        Label_UserName = new QLabel(BackUpandDelete);
        Label_UserName->setObjectName(QString::fromUtf8("Label_UserName"));
        Label_UserName->setGeometry(QRect(560, 10, 141, 21));
        Label_UserName->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_UserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_LogOut = new QPushButton(BackUpandDelete);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(710, 4, 51, 31));
        pushButton_LogOut->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"color:white;\n"
"\n"
""));
        Label_SoftWareVersion = new QLabel(BackUpandDelete);
        Label_SoftWareVersion->setObjectName(QString::fromUtf8("Label_SoftWareVersion"));
        Label_SoftWareVersion->setGeometry(QRect(686, 30, 91, 21));
        Label_SoftWareVersion->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        pushButton_BackUp->raise();
        pushButton_Delete->raise();
        label_6->raise();
        label_date->raise();
        label->raise();
        pushButton_Exit->raise();
        label_Time->raise();
        Label_UserName->raise();
        pushButton_LogOut->raise();
        Label_SoftWareVersion->raise();

        retranslateUi(BackUpandDelete);

        QMetaObject::connectSlotsByName(BackUpandDelete);
    } // setupUi

    void retranslateUi(QDialog *BackUpandDelete)
    {
        BackUpandDelete->setWindowTitle(QApplication::translate("BackUpandDelete", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_BackUp->setText(QString());
        pushButton_Delete->setText(QString());
        pushButton_Exit->setText(QString());
        label_Time->setText(QString());
        label_6->setText(QString());
        label_date->setText(QString());
        label->setText(QString());
        Label_UserName->setText(QString());
        pushButton_LogOut->setText(QApplication::translate("BackUpandDelete", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion->setText(QApplication::translate("BackUpandDelete", "V1.06", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BackUpandDelete: public Ui_BackUpandDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUPANDDELETE_H
