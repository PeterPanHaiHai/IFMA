/********************************************************************************
** Form generated from reading UI file 'mywarning.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWARNING_H
#define UI_MYWARNING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Mywarning
{
public:
    QLabel *label_warning;
    QPushButton *pushButton_yes;
    QLabel *label;

    void setupUi(QDialog *Mywarning)
    {
        if (Mywarning->objectName().isEmpty())
            Mywarning->setObjectName(QString::fromUtf8("Mywarning"));
        Mywarning->resize(344, 198);
        Mywarning->setStyleSheet(QString::fromUtf8("QDialog[objectName=\"Mywarning\"]\n"
"{\n"
"background:transparent;\n"
"\n"
"border-image: url(:/ui/ui/Messagebox_Bg.png);\n"
"border-radius:5px;\n"
"border:none;\n"
"}"));
        label_warning = new QLabel(Mywarning);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setGeometry(QRect(90, 40, 181, 51));
        label_warning->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px bold;\n"
"\n"
"color:black;"));
        label_warning->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_warning->setWordWrap(true);
        pushButton_yes = new QPushButton(Mywarning);
        pushButton_yes->setObjectName(QString::fromUtf8("pushButton_yes"));
        pushButton_yes->setGeometry(QRect(120, 110, 99, 43));
        pushButton_yes->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"\n"
"background-image: url(:/ui/ui/Messagebox_yes.png);\n"
"\n"
"border-radius:10px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-image: url(:/ui/ui/Messagebox_yes_Pressed.png);\n"
"\n"
"\n"
"border-radius:10px;\n"
"}\n"
""));
        label = new QLabel(Mywarning);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 61, 61));
        label->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"	background-image: url(:/ui/wrong.png);\n"
"}\n"
"\n"
"QLabel:!enabled {\n"
"	background-image: url(:/ui/right.png);\n"
"}\n"
""));

        retranslateUi(Mywarning);

        QMetaObject::connectSlotsByName(Mywarning);
    } // setupUi

    void retranslateUi(QDialog *Mywarning)
    {
        Mywarning->setWindowTitle(QApplication::translate("Mywarning", "Dialog", 0, QApplication::UnicodeUTF8));
        label_warning->setText(QString());
        pushButton_yes->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Mywarning: public Ui_Mywarning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWARNING_H
