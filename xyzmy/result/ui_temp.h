/********************************************************************************
** Form generated from reading UI file 'temp.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMP_H
#define UI_TEMP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *frame;
    QPushButton *CloseButton;
    QLabel *label_Data;
    QLabel *label_T;
    QLabel *label_Id;
    QLabel *label_Name;
    QLabel *label_Time;
    QLabel *label_G;
    QLabel *label_Batch;
    QLabel *label_Age;
    QLabel *label_operator;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 480);
        Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/wholeBackgroundbetter_2.png);"));
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 50, 640, 230));
        frame->setStyleSheet(QString::fromUtf8("QFrame[objectName=\"frame\"]\n"
"{\n"
"	background-image: url(:/ui/view_bg.png);\n"
"background-color:transparent;\n"
"border-radius:10px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        CloseButton = new QPushButton(frame);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(510, 11, 51, 30));
        CloseButton->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/showDetails/X.png);\n"
"border:none;"));
        label_Data = new QLabel(frame);
        label_Data->setObjectName(QString::fromUtf8("label_Data"));
        label_Data->setGeometry(QRect(290, 28, 101, 21));
        label_Data->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_T = new QLabel(frame);
        label_T->setObjectName(QString::fromUtf8("label_T"));
        label_T->setGeometry(QRect(180, 70, 111, 21));
        label_T->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_Id = new QLabel(frame);
        label_Id->setObjectName(QString::fromUtf8("label_Id"));
        label_Id->setGeometry(QRect(180, 104, 111, 21));
        label_Id->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_Name = new QLabel(frame);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));
        label_Name->setGeometry(QRect(180, 137, 111, 21));
        label_Name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_Time = new QLabel(frame);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(414, 172, 111, 21));
        label_Time->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_G = new QLabel(frame);
        label_G->setObjectName(QString::fromUtf8("label_G"));
        label_G->setGeometry(QRect(413, 71, 111, 21));
        label_G->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_Batch = new QLabel(frame);
        label_Batch->setObjectName(QString::fromUtf8("label_Batch"));
        label_Batch->setGeometry(QRect(180, 172, 111, 21));
        label_Batch->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_Age = new QLabel(frame);
        label_Age->setObjectName(QString::fromUtf8("label_Age"));
        label_Age->setGeometry(QRect(415, 102, 111, 21));
        label_Age->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));
        label_operator = new QLabel(frame);
        label_operator->setObjectName(QString::fromUtf8("label_operator"));
        label_operator->setGeometry(QRect(414, 138, 111, 21));
        label_operator->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        CloseButton->setText(QString());
        label_Data->setText(QString());
        label_T->setText(QString());
        label_Id->setText(QString());
        label_Name->setText(QString());
        label_Time->setText(QString());
        label_G->setText(QString());
        label_Batch->setText(QString());
        label_Age->setText(QString());
        label_operator->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMP_H
