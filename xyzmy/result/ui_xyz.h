/********************************************************************************
** Form generated from reading UI file 'xyz.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XYZ_H
#define UI_XYZ_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QFrame *frame_in;
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 480);
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(226, 304, 161, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Calibrate/save.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/Calibrate/SAvepressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(386, 302, 151, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Calibrate/quit.png);\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/Calibrate/quit_pressed.png);\n"
"\n"
"\n"
"border-radius:20px;\n"
"}\n"
""));
        frame_in = new QFrame(Dialog);
        frame_in->setObjectName(QString::fromUtf8("frame_in"));
        frame_in->setGeometry(QRect(130, 80, 531, 211));
        frame_in->setStyleSheet(QString::fromUtf8("QFrame[objectName=\"frame_in\"]\n"
"{background:transparent;\n"
" border-radius:10px;\n"
"	border-image: url(:/ui/showDetails/bg.png);\n"
"}"));
        frame_in->setFrameShape(QFrame::StyledPanel);
        frame_in->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_in);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(166, 9, 91, 31));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Calibrate/calibrate_project.png);"));
        comboBox = new QComboBox(frame_in);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(260, 12, 85, 27));
        comboBox_2 = new QComboBox(frame_in);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(46, 60, 186, 35));
        pushButton = new QPushButton(frame_in);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(35, 99, 101, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Calibrate/Out.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/Calibrate/Out_Pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(frame_in);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(135, 97, 111, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Calibrate/Calibrate.png);\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/Calibrate/Calibrate_pressed.png);\n"
"\n"
"\n"
"border-radius:20px;\n"
"}\n"
""));
        label_2 = new QLabel(frame_in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(291, 60, 201, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/inputproject.png);\n"
""));
        label_3 = new QLabel(frame_in);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(291, 120, 201, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Calibrate/RealValue.png);"));
        calendarWidget = new QCalendarWidget(Dialog);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(260, 280, 280, 179));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XYZ_H
