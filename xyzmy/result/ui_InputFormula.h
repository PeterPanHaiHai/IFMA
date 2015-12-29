/********************************************************************************
** Form generated from reading UI file 'InputFormula.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFORMULA_H
#define UI_INPUTFORMULA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QWidget *Formula;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(800, 480);
        Form->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/wholeBackgroundbetter_2.png);"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 91, 17));
        label->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color: rgb(255, 0, 4);\n"
"font: oblique 10pt \"Abyssinica SIL\";\n"
""));
        comboBox = new QComboBox(Form);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(240, 120, 85, 27));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 128, 51, 20));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 130, 51, 20));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(520, 120, 113, 27));
        Formula = new QWidget(Form);
        Formula->setObjectName(QString::fromUtf8("Formula"));
        Formula->setGeometry(QRect(170, 190, 471, 221));
        comboBox_2 = new QComboBox(Formula);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 21, 141, 30));
        label_4 = new QLabel(Formula);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 28, 91, 20));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        pushButton = new QPushButton(Formula);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 120, 161, 111));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/rectButton.png);\n"
"font-size:26px bold;\n"
"\n"
"border-radius:20px;"));
        pushButton_2 = new QPushButton(Formula);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 120, 161, 111));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/rectButton.png);\n"
"font-size:26px bold;\n"
"\n"
"border-radius:20px;"));
        lineEdit_2 = new QLineEdit(Formula);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 80, 41, 27));
        label_5 = new QLabel(Formula);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 82, 31, 20));
        label_5->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color: rgb(255, 0, 4);\n"
"font: oblique 10pt \"Abyssinica SIL\";\n"
""));
        label_6 = new QLabel(Formula);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 84, 21, 20));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color: rgb(255, 0, 4);\n"
"font: oblique 10pt \"Abyssinica SIL\";\n"
""));
        lineEdit_3 = new QLineEdit(Formula);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(130, 80, 41, 27));
        lineEdit_4 = new QLineEdit(Formula);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 80, 41, 27));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form", "Add Formula", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "CRP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "HIV", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Form", "Type", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "Batch", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Form", "Linear Formula", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Logarithmic", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Form", "Formula Type", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Form", "Revoke", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("Form", "a", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Form", "y=", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Form", "x", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QApplication::translate("Form", "+", 0, QApplication::UnicodeUTF8));
        lineEdit_4->setText(QApplication::translate("Form", "b", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORMULA_H
