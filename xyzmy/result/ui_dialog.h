/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_DeleteBackup;
    QPushButton *pushButton_checkshow;
    QPushButton *pushButton_test;
    QPushButton *pushButton_Set;
    QLabel *label;
    QLabel *label_date;
    QLabel *label_Time;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_Test;
    QLabel *label_Search;
    QLabel *label_Delete;
    QLabel *Label_UserName;
    QPushButton *pushButton_LogOut;
    QLabel *Label_SoftWareVersion;
    QLabel *label_SET;
    QLabel *label_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 480);
        Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui_new/bg_Frame.jpg);"));
        pushButton_DeleteBackup = new QPushButton(Dialog);
        pushButton_DeleteBackup->setObjectName(QString::fromUtf8("pushButton_DeleteBackup"));
        pushButton_DeleteBackup->setGeometry(QRect(407, 252, 215, 171));
        pushButton_DeleteBackup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/ui/dialog_button.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/ui/dialog_pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"	background-image: url(:/ui/ui/dialog_button_gray.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        pushButton_checkshow = new QPushButton(Dialog);
        pushButton_checkshow->setObjectName(QString::fromUtf8("pushButton_checkshow"));
        pushButton_checkshow->setGeometry(QRect(162, 82, 215, 171));
        pushButton_checkshow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/ui/dialog_button.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/ui/dialog_pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        pushButton_test = new QPushButton(Dialog);
        pushButton_test->setObjectName(QString::fromUtf8("pushButton_test"));
        pushButton_test->setGeometry(QRect(407, 82, 215, 171));
        pushButton_test->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/ui/dialog_button.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/ui/dialog_pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        pushButton_Set = new QPushButton(Dialog);
        pushButton_Set->setObjectName(QString::fromUtf8("pushButton_Set"));
        pushButton_Set->setGeometry(QRect(162, 252, 215, 171));
        pushButton_Set->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/ui/dialog_button.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/ui/dialog_pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"	background-image: url(:/ui/ui/dialog_button_gray.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 801, 54));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui_new/Up_Frame.jpg);"));
        label_date = new QLabel(Dialog);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(90, 10, 91, 17));
        label_date->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_Time = new QLabel(Dialog);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(90, 30, 91, 17));
        label_Time->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 407, 801, 73));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/Test_Cut/Test_Copyright.png);"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(212, 90, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/ui/Dialog_TestW.png);\n"
"color:white;"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(458, 89, 121, 31));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/ui/Dialog_SearchW.png);\n"
"color:white;"));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(444, 261, 151, 31));
        label_8->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/ui/Dialog_backupandDeletew.png);\n"
"color:white;"));
        label_Test = new QLabel(Dialog);
        label_Test->setObjectName(QString::fromUtf8("label_Test"));
        label_Test->setGeometry(QRect(218, 131, 111, 101));
        label_Test->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/ui_new/Test_in.png);"));
        label_Search = new QLabel(Dialog);
        label_Search->setObjectName(QString::fromUtf8("label_Search"));
        label_Search->setGeometry(QRect(474, 125, 111, 101));
        label_Search->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/ui_new/Search_in.png);"));
        label_Delete = new QLabel(Dialog);
        label_Delete->setObjectName(QString::fromUtf8("label_Delete"));
        label_Delete->setGeometry(QRect(461, 304, 111, 101));
        label_Delete->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background:transparent;\n"
"background-image: url(:/ui/ui_new/Delete_in.png);\n"
"color:white;\n"
"}\n"
"\n"
"QLabel:!enabled{\n"
"  background:transparent;\n"
"background-image: url(:/ui/ui_new/Delete_in_gray.png);\n"
"color:white;\n"
"}\n"
""));
        Label_UserName = new QLabel(Dialog);
        Label_UserName->setObjectName(QString::fromUtf8("Label_UserName"));
        Label_UserName->setGeometry(QRect(613, 8, 91, 21));
        Label_UserName->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_UserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_LogOut = new QPushButton(Dialog);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(710, 4, 51, 31));
        pushButton_LogOut->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"color:white;\n"
"\n"
""));
        Label_SoftWareVersion = new QLabel(Dialog);
        Label_SoftWareVersion->setObjectName(QString::fromUtf8("Label_SoftWareVersion"));
        Label_SoftWareVersion->setGeometry(QRect(686, 30, 91, 21));
        Label_SoftWareVersion->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_SET = new QLabel(Dialog);
        label_SET->setObjectName(QString::fromUtf8("label_SET"));
        label_SET->setGeometry(QRect(220, 290, 131, 111));
        label_SET->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background:transparent;\n"
"background-image: url(:/ui/ui_new/set_in.png);\n"
"color:white;\n"
"}\n"
"\n"
"QLabel:!enabled{\n"
"  background:transparent;\n"
"background-image: url(:/ui/ui_new/set_in_gray.png);\n"
"color:white;\n"
"}\n"
""));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(200, 260, 141, 31));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background:transparent;\n"
"background-image: url(:/ui/ui/Dialog_SystemSetW.png);\n"
"color:white;\n"
"}"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_DeleteBackup->setText(QString());
        pushButton_checkshow->setText(QString());
        pushButton_test->setText(QString());
        pushButton_Set->setText(QString());
        label->setText(QString());
        label_date->setText(QString());
        label_Time->setText(QString());
        label_3->setText(QString());
        label_2->setText(QString());
        label_6->setText(QString());
        label_8->setText(QString());
        label_Test->setText(QString());
        label_Search->setText(QString());
        label_Delete->setText(QString());
        Label_UserName->setText(QApplication::translate("Dialog", "admin", 0, QApplication::UnicodeUTF8));
        pushButton_LogOut->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion->setText(QApplication::translate("Dialog", "V1.0", 0, QApplication::UnicodeUTF8));
        label_SET->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
