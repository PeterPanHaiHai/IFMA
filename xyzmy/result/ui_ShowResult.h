/********************************************************************************
** Form generated from reading UI file 'ShowResult.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWRESULT_H
#define UI_SHOWRESULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton_BackUp;
    QFrame *frame_BackUp;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Delete;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(641, 305);
        Form->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/wholeBackgroundbetter_2.png);"));
        pushButton_BackUp = new QPushButton(Form);
        pushButton_BackUp->setObjectName(QString::fromUtf8("pushButton_BackUp"));
        pushButton_BackUp->setGeometry(QRect(10, 190, 161, 121));
        pushButton_BackUp->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/rectButton.png);\n"
"font-size:26px bold;\n"
"\n"
"border-radius:20px;"));
        frame_BackUp = new QFrame(Form);
        frame_BackUp->setObjectName(QString::fromUtf8("frame_BackUp"));
        frame_BackUp->setGeometry(QRect(20, 10, 601, 191));
        frame_BackUp->setFrameShape(QFrame::StyledPanel);
        frame_BackUp->setFrameShadow(QFrame::Raised);
        pushButton_Cancel = new QPushButton(Form);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(470, 190, 161, 121));
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/rectButton.png);\n"
"font-size:26px bold;\n"
"\n"
"border-radius:20px;"));
        pushButton_Delete = new QPushButton(Form);
        pushButton_Delete->setObjectName(QString::fromUtf8("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(245, 190, 161, 121));
        pushButton_Delete->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/rectButton.png);\n"
"font-size:26px bold;\n"
"\n"
"border-radius:20px;"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_BackUp->setText(QApplication::translate("Form", "BackUp", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("Form", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_Delete->setText(QApplication::translate("Form", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWRESULT_H
