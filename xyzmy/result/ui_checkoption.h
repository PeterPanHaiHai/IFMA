/********************************************************************************
** Form generated from reading UI file 'checkoption.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOPTION_H
#define UI_CHECKOPTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckOption
{
public:
    QLabel *label_ID_2;
    QLineEdit *lineEdit_Name;
    QPushButton *pushButton_Cancel;
    QLabel *label_ID;
    QPushButton *pushButton_OK;
    QLineEdit *lineEdit_Bach;
    QLabel *label_Gender;
    QLineEdit *lineEdit_Operator;
    QLineEdit *lineEdit_ID;
    QComboBox *comboBox_gender;
    QLabel *label_Bach;
    QLineEdit *lineEdit_Age;
    QLabel *label_Type;
    QLabel *label_Name;
    QComboBox *comboBox;
    QLabel *label_Age;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *CheckOption)
    {
        if (CheckOption->objectName().isEmpty())
            CheckOption->setObjectName(QString::fromUtf8("CheckOption"));
        CheckOption->resize(516, 236);
        CheckOption->setStyleSheet(QString::fromUtf8("QDialog[objectName=\"CheckOption\"]\n"
"{\n"
"border-image: url(:/ui/Input/Input_Frame.png);\n"
"background-color:transparent;\n"
"border-radius:10px;\n"
"}"));
        label_ID_2 = new QLabel(CheckOption);
        label_ID_2->setObjectName(QString::fromUtf8("label_ID_2"));
        label_ID_2->setGeometry(QRect(280, 113, 221, 51));
        label_ID_2->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        lineEdit_Name = new QLineEdit(CheckOption);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(110, 89, 91, 21));
        lineEdit_Name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        pushButton_Cancel = new QPushButton(CheckOption);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(333, 145, 101, 61));
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Input/cancel.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/Input/canel_select.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
""));
        label_ID = new QLabel(CheckOption);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));
        label_ID->setGeometry(QRect(20, 43, 221, 41));
        label_ID->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        pushButton_OK = new QPushButton(CheckOption);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(83, 145, 106, 61));
        pushButton_OK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Input/ok.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	\n"
"	background-image: url(:/ui/Input/ok_select.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        lineEdit_Bach = new QLineEdit(CheckOption);
        lineEdit_Bach->setObjectName(QString::fromUtf8("lineEdit_Bach"));
        lineEdit_Bach->setGeometry(QRect(370, 53, 91, 31));
        lineEdit_Bach->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        label_Gender = new QLabel(CheckOption);
        label_Gender->setObjectName(QString::fromUtf8("label_Gender"));
        label_Gender->setGeometry(QRect(280, 8, 211, 51));
        label_Gender->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        lineEdit_Operator = new QLineEdit(CheckOption);
        lineEdit_Operator->setObjectName(QString::fromUtf8("lineEdit_Operator"));
        lineEdit_Operator->setGeometry(QRect(370, 123, 91, 31));
        lineEdit_Operator->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        lineEdit_ID = new QLineEdit(CheckOption);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(110, 53, 91, 28));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        comboBox_gender = new QComboBox(CheckOption);
        comboBox_gender->setObjectName(QString::fromUtf8("comboBox_gender"));
        comboBox_gender->setGeometry(QRect(365, 18, 125, 29));
        comboBox_gender->setStyleSheet(QString::fromUtf8(""));
        label_Bach = new QLabel(CheckOption);
        label_Bach->setObjectName(QString::fromUtf8("label_Bach"));
        label_Bach->setGeometry(QRect(280, 43, 211, 51));
        label_Bach->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        lineEdit_Age = new QLineEdit(CheckOption);
        lineEdit_Age->setObjectName(QString::fromUtf8("lineEdit_Age"));
        lineEdit_Age->setGeometry(QRect(370, 87, 91, 31));
        lineEdit_Age->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        label_Type = new QLabel(CheckOption);
        label_Type->setObjectName(QString::fromUtf8("label_Type"));
        label_Type->setGeometry(QRect(20, 9, 211, 41));
        label_Type->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        label_Name = new QLabel(CheckOption);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(20, 77, 211, 51));
        label_Name->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        comboBox = new QComboBox(CheckOption);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(106, 19, 125, 29));
        comboBox->setStyleSheet(QString::fromUtf8(""));
        label_Age = new QLabel(CheckOption);
        label_Age->setObjectName(QString::fromUtf8("label_Age"));
        label_Age->setGeometry(QRect(280, 77, 211, 51));
        label_Age->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/lineaedit.png);"));
        label = new QLabel(CheckOption);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(25, 14, 91, 41));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/type.png);"));
        label_2 = new QLabel(CheckOption);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(24, 48, 91, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/id.png);"));
        label_3 = new QLabel(CheckOption);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(284, 13, 91, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/gender.png);"));
        label_4 = new QLabel(CheckOption);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(289, 51, 79, 31));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/bach.png);"));
        label_5 = new QLabel(CheckOption);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(284, 82, 91, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/age.png);"));
        label_6 = new QLabel(CheckOption);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(281, 117, 91, 41));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/operator.png);"));
        label_7 = new QLabel(CheckOption);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(23, 82, 91, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/name.png);"));
        label_Type->raise();
        label_ID_2->raise();
        pushButton_Cancel->raise();
        label_ID->raise();
        pushButton_OK->raise();
        label_Gender->raise();
        label_Bach->raise();
        label_Name->raise();
        label_Age->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        lineEdit_Operator->raise();
        lineEdit_Name->raise();
        lineEdit_ID->raise();
        lineEdit_Bach->raise();
        lineEdit_Age->raise();
        comboBox->raise();
        comboBox_gender->raise();
        label->raise();

        retranslateUi(CheckOption);

        QMetaObject::connectSlotsByName(CheckOption);
    } // setupUi

    void retranslateUi(QDialog *CheckOption)
    {
        CheckOption->setWindowTitle(QApplication::translate("CheckOption", "Dialog", 0, QApplication::UnicodeUTF8));
        label_ID_2->setText(QString());
        pushButton_Cancel->setText(QString());
        label_ID->setText(QString());
        pushButton_OK->setText(QString());
        label_Gender->setText(QString());
        label_Bach->setText(QString());
        label_Type->setText(QString());
        label_Name->setText(QString());
        label_Age->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CheckOption: public Ui_CheckOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOPTION_H
