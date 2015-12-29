/********************************************************************************
** Form generated from reading UI file 'selfcheck.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFCHECK_H
#define UI_SELFCHECK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SelfCheck
{
public:
    QLabel *label_checking;
    QLabel *label_waiting;

    void setupUi(QDialog *SelfCheck)
    {
        if (SelfCheck->objectName().isEmpty())
            SelfCheck->setObjectName(QString::fromUtf8("SelfCheck"));
        SelfCheck->resize(800, 480);
        SelfCheck->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/ui/icon/SelfCheck.jpg);\n"
""));
        label_checking = new QLabel(SelfCheck);
        label_checking->setObjectName(QString::fromUtf8("label_checking"));
        label_checking->setGeometry(QRect(360, 240, 68, 38));
        label_checking->setMinimumSize(QSize(68, 38));
        label_checking->setMaximumSize(QSize(68, 38));
        label_checking->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/icon/PleaseWait.png);"));
        label_waiting = new QLabel(SelfCheck);
        label_waiting->setObjectName(QString::fromUtf8("label_waiting"));
        label_waiting->setGeometry(QRect(590, 90, 124, 124));
        label_waiting->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:5px;"));

        retranslateUi(SelfCheck);

        QMetaObject::connectSlotsByName(SelfCheck);
    } // setupUi

    void retranslateUi(QDialog *SelfCheck)
    {
        SelfCheck->setWindowTitle(QApplication::translate("SelfCheck", "Dialog", 0, QApplication::UnicodeUTF8));
        label_checking->setText(QString());
        label_waiting->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SelfCheck: public Ui_SelfCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFCHECK_H
