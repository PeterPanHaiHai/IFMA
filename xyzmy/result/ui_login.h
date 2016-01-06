/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_Login;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *lineEdit_PassWd;
    QLineEdit *lineEdit_UserName;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(800, 480);
        Login->setStyleSheet(QString::fromUtf8("QDialog[objectName=\"Login\"]\n"
"{\n"
"background-image: url(:/ui/ui_new/Login_bg.png);\n"
"}"));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 440, 800, 61));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/keyboard/ui/ui/copyright.png);"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 100, 481, 101));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/login_banner.png);"));
        label_4 = new QLabel(Login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(225, 199, 71, 27));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui/Login_id.png);\n"
"color:white;"));
        label_5 = new QLabel(Login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(221, 232, 71, 27));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui/Login_Pwd.png);"));
        pushButton_Login = new QPushButton(Login);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(495, 186, 89, 81));
        pushButton_Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/ui/Login1.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/ui/LoginSelect1.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
""));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 190, 211, 51));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui/name_lineedit.png);"));
        label_6 = new QLabel(Login);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(286, 222, 211, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui/password_lineedit.png);"));
        lineEdit_PassWd = new QLineEdit(Login);
        lineEdit_PassWd->setObjectName(QString::fromUtf8("lineEdit_PassWd"));
        lineEdit_PassWd->setGeometry(QRect(307, 231, 141, 27));
        lineEdit_PassWd->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        lineEdit_UserName = new QLineEdit(Login);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        lineEdit_UserName->setGeometry(QRect(307, 200, 141, 27));
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_Login->setText(QString());
        label_2->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
