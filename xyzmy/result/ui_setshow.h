/********************************************************************************
** Form generated from reading UI file 'setshow.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETSHOW_H
#define UI_SETSHOW_H

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

class Ui_SetShow
{
public:
    QLabel *label;
    QLabel *exit;
    QLabel *label_5;
    QLabel *label_Time;
    QLabel *label_date;
    QPushButton *pushButton_Exit;
    QFrame *frame;
    QLabel *label_TSW;
    QPushButton *pushButton_TouchScreenCalibrate;
    QPushButton *pushButton_Time;
    QLabel *label_CaliW;
    QLabel *label_Calibrate;
    QLabel *label_TimeW;
    QLabel *label_UserW;
    QLabel *label_UserSet;
    QLabel *label_TimeSet;
    QLabel *label_TScreenSet;
    QPushButton *pushButton_User;
    QLabel *label_ProjectW;
    QPushButton *pushButton_Project;
    QPushButton *pushButton_Calibrate;
    QLabel *label_ProjectSet;
    QLabel *Label_UserName;
    QPushButton *pushButton_LogOut;
    QLabel *Label_SoftWareVersion;

    void setupUi(QDialog *SetShow)
    {
        if (SetShow->objectName().isEmpty())
            SetShow->setObjectName(QString::fromUtf8("SetShow"));
        SetShow->resize(800, 480);
        SetShow->setStyleSheet(QString::fromUtf8("\n"
"QDialog[objectName=\"SetShow\"]\n"
"{background:transparent;\n"
" border-radius:10px;\n"
"	background-image: url(:/ui/ui_new/bg_Frame.jpg);\n"
"}"));
        label = new QLabel(SetShow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 91, 17));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"helvetica\" light;\n"
"background:transparent;\n"
"\n"
""));
        exit = new QLabel(SetShow);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(0, 407, 821, 73));
        exit->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Test_Cut/Test_Copyright.png);"));
        label_5 = new QLabel(SetShow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 801, 54));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui_new/Up_Frame.png);"));
        label_Time = new QLabel(SetShow);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(86, 31, 131, 17));
        label_Time->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_date = new QLabel(SetShow);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(86, 11, 111, 17));
        label_date->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        pushButton_Exit = new QPushButton(SetShow);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(710, 413, 91, 71));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"	background-image: url(:/ui/Test_Cut/Test_Back.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"font-size:30px bold;\n"
"	background-image: url(:/ui/Test_Cut/Test_Back_Pressed.png);\n"
"border-radius:20px;\n"
"}\n"
""));
        frame = new QFrame(SetShow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(54, 80, 701, 321));
        frame->setStyleSheet(QString::fromUtf8("QFrame[objectName=\"frame\"]\n"
"{\n"
"background:transparent;\n"
"border:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_TSW = new QLabel(frame);
        label_TSW->setObjectName(QString::fromUtf8("label_TSW"));
        label_TSW->setGeometry(QRect(419, 262, 77, 17));
        label_TSW->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        pushButton_TouchScreenCalibrate = new QPushButton(frame);
        pushButton_TouchScreenCalibrate->setObjectName(QString::fromUtf8("pushButton_TouchScreenCalibrate"));
        pushButton_TouchScreenCalibrate->setGeometry(QRect(360, 170, 191, 121));
        pushButton_TouchScreenCalibrate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_up.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        pushButton_Time = new QPushButton(frame);
        pushButton_Time->setObjectName(QString::fromUtf8("pushButton_Time"));
        pushButton_Time->setGeometry(QRect(448, 38, 191, 121));
        pushButton_Time->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_up.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        label_CaliW = new QLabel(frame);
        label_CaliW->setObjectName(QString::fromUtf8("label_CaliW"));
        label_CaliW->setGeometry(QRect(227, 260, 62, 17));
        label_CaliW->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_Calibrate = new QLabel(frame);
        label_Calibrate->setObjectName(QString::fromUtf8("label_Calibrate"));
        label_Calibrate->setGeometry(QRect(219, 182, 71, 69));
        label_Calibrate->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/ui/System_Set/SysSet_sys_up.png);"));
        label_TimeW = new QLabel(frame);
        label_TimeW->setObjectName(QString::fromUtf8("label_TimeW"));
        label_TimeW->setGeometry(QRect(513, 128, 62, 17));
        label_TimeW->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_UserW = new QLabel(frame);
        label_UserW->setObjectName(QString::fromUtf8("label_UserW"));
        label_UserW->setGeometry(QRect(130, 128, 62, 17));
        label_UserW->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_UserSet = new QLabel(frame);
        label_UserSet->setObjectName(QString::fromUtf8("label_UserSet"));
        label_UserSet->setGeometry(QRect(123, 51, 81, 69));
        label_UserSet->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/System_Set/SysSet_user_up.png);"));
        label_TimeSet = new QLabel(frame);
        label_TimeSet->setObjectName(QString::fromUtf8("label_TimeSet"));
        label_TimeSet->setGeometry(QRect(509, 57, 68, 63));
        label_TimeSet->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/ui/System_Set/SysSet_time_up.png);"));
        label_TScreenSet = new QLabel(frame);
        label_TScreenSet->setObjectName(QString::fromUtf8("label_TScreenSet"));
        label_TScreenSet->setGeometry(QRect(419, 194, 71, 61));
        label_TScreenSet->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/ui/System_Set/SysSet_touch_up.png);"));
        pushButton_User = new QPushButton(frame);
        pushButton_User->setObjectName(QString::fromUtf8("pushButton_User"));
        pushButton_User->setGeometry(QRect(68, 38, 191, 121));
        pushButton_User->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_up.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        label_ProjectW = new QLabel(frame);
        label_ProjectW->setObjectName(QString::fromUtf8("label_ProjectW"));
        label_ProjectW->setGeometry(QRect(328, 128, 62, 17));
        label_ProjectW->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        pushButton_Project = new QPushButton(frame);
        pushButton_Project->setObjectName(QString::fromUtf8("pushButton_Project"));
        pushButton_Project->setGeometry(QRect(262, 38, 191, 121));
        pushButton_Project->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_up.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        pushButton_Calibrate = new QPushButton(frame);
        pushButton_Calibrate->setObjectName(QString::fromUtf8("pushButton_Calibrate"));
        pushButton_Calibrate->setGeometry(QRect(160, 170, 191, 121));
        pushButton_Calibrate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_up.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_down.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:!enabled{\n"
"	background-image: url(:/ui/System_Set/SysSet_ButtonBack_gray.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}"));
        label_ProjectSet = new QLabel(frame);
        label_ProjectSet->setObjectName(QString::fromUtf8("label_ProjectSet"));
        label_ProjectSet->setGeometry(QRect(309, 58, 91, 61));
        label_ProjectSet->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/System_Set/SysSet_project_up.png);"));
        pushButton_TouchScreenCalibrate->raise();
        pushButton_Time->raise();
        label_TimeW->raise();
        label_TimeSet->raise();
        label_TScreenSet->raise();
        pushButton_User->raise();
        pushButton_Project->raise();
        pushButton_Calibrate->raise();
        label_ProjectSet->raise();
        label_UserW->raise();
        label_ProjectW->raise();
        label_CaliW->raise();
        label_TSW->raise();
        label_UserSet->raise();
        label_Calibrate->raise();
        Label_UserName = new QLabel(SetShow);
        Label_UserName->setObjectName(QString::fromUtf8("Label_UserName"));
        Label_UserName->setGeometry(QRect(610, 10, 91, 21));
        Label_UserName->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_UserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_LogOut = new QPushButton(SetShow);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(710, 4, 51, 31));
        pushButton_LogOut->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"color:white;\n"
"\n"
""));
        Label_SoftWareVersion = new QLabel(SetShow);
        Label_SoftWareVersion->setObjectName(QString::fromUtf8("Label_SoftWareVersion"));
        Label_SoftWareVersion->setGeometry(QRect(686, 30, 91, 21));
        Label_SoftWareVersion->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));

        retranslateUi(SetShow);

        QMetaObject::connectSlotsByName(SetShow);
    } // setupUi

    void retranslateUi(QDialog *SetShow)
    {
        SetShow->setWindowTitle(QApplication::translate("SetShow", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        exit->setText(QString());
        label_5->setText(QString());
        label_Time->setText(QString());
        label_date->setText(QString());
        pushButton_Exit->setText(QString());
        label_TSW->setText(QApplication::translate("SetShow", "\350\247\246\346\221\270\345\261\217\346\240\241\346\255\243", 0, QApplication::UnicodeUTF8));
        pushButton_TouchScreenCalibrate->setText(QString());
        pushButton_Time->setText(QString());
        label_CaliW->setText(QApplication::translate("SetShow", "\347\263\273\347\273\237\346\240\241\346\255\243", 0, QApplication::UnicodeUTF8));
        label_Calibrate->setText(QString());
        label_TimeW->setText(QApplication::translate("SetShow", "\346\227\266\351\227\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_UserW->setText(QApplication::translate("SetShow", "\347\224\250\346\210\267\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_UserSet->setText(QString());
        label_TimeSet->setText(QString());
        label_TScreenSet->setText(QString());
        pushButton_User->setText(QString());
        label_ProjectW->setText(QApplication::translate("SetShow", "\351\241\271\347\233\256\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_Project->setText(QString());
        pushButton_Calibrate->setText(QString());
        label_ProjectSet->setText(QString());
        Label_UserName->setText(QString());
        pushButton_LogOut->setText(QApplication::translate("SetShow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion->setText(QApplication::translate("SetShow", "V1.06", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetShow: public Ui_SetShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETSHOW_H
