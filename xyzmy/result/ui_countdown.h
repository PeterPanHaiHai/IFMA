/********************************************************************************
** Form generated from reading UI file 'countdown.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTDOWN_H
#define UI_COUNTDOWN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CountDown
{
public:
    QLabel *label_warning;
    QLabel *label_2;
    QLabel *label_Seconds;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *CountDown)
    {
        if (CountDown->objectName().isEmpty())
            CountDown->setObjectName(QString::fromUtf8("CountDown"));
        CountDown->resize(508, 210);
        CountDown->setStyleSheet(QString::fromUtf8("QDialog[objectName=\"CountDown\"]\n"
"{\n"
"background:transparent;\n"
"background-color:transparent;\n"
"	border-image: url(:/ui/ui/Messagebox_Bg.png);\n"
"border-radius:5px;\n"
"border:none;\n"
"}"));
        label_warning = new QLabel(CountDown);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        label_warning->setGeometry(QRect(125, 10, 281, 21));
        label_warning->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(CountDown);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 40, 331, 21));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 12pt \"helvetica\" bold;\n"
"background:transparent;\n"
""));
        label_Seconds = new QLabel(CountDown);
        label_Seconds->setObjectName(QString::fromUtf8("label_Seconds"));
        label_Seconds->setGeometry(QRect(314, 12, 111, 71));
        label_Seconds->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 24pt \"helvetica\" bold;\n"
"background:transparent;\n"
"color: rgb(255, 0, 4);"));
        label_3 = new QLabel(CountDown);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(354, 40, 111, 21));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"\n"
"font: 12pt \"helvetica\" bold;\n"
"background:transparent;\n"
""));
        pushButton = new QPushButton(CountDown);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 70, 161, 111));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/rectButton.png);\n"
"\n"
"\n"
"font: 24pt \"helvetica\" bold;\n"
"\n"
"border-radius:20px;\n"
""));

        retranslateUi(CountDown);

        QMetaObject::connectSlotsByName(CountDown);
    } // setupUi

    void retranslateUi(QDialog *CountDown)
    {
        CountDown->setWindowTitle(QApplication::translate("CountDown", "Dialog", 0, QApplication::UnicodeUTF8));
        label_warning->setText(QApplication::translate("CountDown", "Please insert cassete ...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CountDown", "Door will be closed in", 0, QApplication::UnicodeUTF8));
        label_Seconds->setText(QString());
        label_3->setText(QApplication::translate("CountDown", "seconds", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CountDown", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CountDown: public Ui_CountDown {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTDOWN_H
