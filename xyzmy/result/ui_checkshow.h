/********************************************************************************
** Form generated from reading UI file 'checkshow.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKSHOW_H
#define UI_CHECKSHOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckShow
{
public:
    QPushButton *pushButton_Out;
    QLabel *label_CurrentVersion;
    QPushButton *pushButton_Test;
    QLabel *label_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_print;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QPushButton *pushButton_Exit;
    QLabel *label_date;
    QLabel *label_Time;
    QFrame *frame;
    QLabel *label_4;
    QComboBox *comboBox_Type;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *comboBox_Gender;
    QLabel *label_11;
    QLabel *label_operator;
    QLabel *label_12;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_Age;
    QComboBox *comboBox_Stripes;
    QLabel *label_Stripes;
    QComboBox *comboBox_Batch;
    QLineEdit *lineEdit_operator;
    QLabel *Label_UserName;
    QPushButton *pushButton_LogOut;
    QLabel *label_data;
    QLabel *label_value;
    QLabel *Label_SoftWareVersioin;
    QLabel *label_Height1;
    QLabel *label_Height2;
    QLabel *label_Height5;
    QLabel *label_Height6;
    QLabel *label_Height3;
    QLabel *label_Height4;
    QLabel *Label_direction;
    QLabel *label_Area2;
    QLabel *label_Area1;
    QPushButton *pushButton;
    QPushButton *m_saveButton;
    QPushButton *m_deleteButton;
    QPushButton *mChangeAppButton;

    void setupUi(QDialog *CheckShow)
    {
        if (CheckShow->objectName().isEmpty())
            CheckShow->setObjectName(QString::fromUtf8("CheckShow"));
        CheckShow->resize(800, 480);
        CheckShow->setLayoutDirection(Qt::LeftToRight);
        CheckShow->setStyleSheet(QString::fromUtf8("QDialog[objectName=\"CheckShow\"]\n"
"{\n"
"background-image: url(:/ui/ui_new/bg_Frame.jpg);\n"
"background-color:transparent;\n"
"}"));
        pushButton_Out = new QPushButton(CheckShow);
        pushButton_Out->setObjectName(QString::fromUtf8("pushButton_Out"));
        pushButton_Out->setGeometry(QRect(91, 350, 141, 65));
        pushButton_Out->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"\n"
"font-size:20px bold;\n"
"	background-image: url(:/ui/Test_changed/Out1.png);\n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"font-size:20px bold;\n"
"	background-image: url(:/ui/Test_changed/Out_Pressed1.png);\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        label_CurrentVersion = new QLabel(CheckShow);
        label_CurrentVersion->setObjectName(QString::fromUtf8("label_CurrentVersion"));
        label_CurrentVersion->setGeometry(QRect(670, 90, 121, 17));
        label_CurrentVersion->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background:transparent;\n"
""));
        pushButton_Test = new QPushButton(CheckShow);
        pushButton_Test->setObjectName(QString::fromUtf8("pushButton_Test"));
        pushButton_Test->setGeometry(QRect(245, 349, 144, 68));
        pushButton_Test->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"\n"
"font-size:20px bold;\n"
"	background-image: url(:/ui/Test_changed/Test1.png);\n"
"color:white;\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"font-size:20px bold;\n"
"	background-image: url(:/ui/Test_changed/Test_Pressed1.png);\n"
"color:black;\n"
"border-radius:20px;\n"
"}\n"
""));
        label_2 = new QLabel(CheckShow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(433, 70, 181, 41));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/showCut/ui/show_cut/show_data.png);\n"
"\n"
"\n"
"\n"
""));
        pushButton_save = new QPushButton(CheckShow);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(397, 351, 145, 66));
        pushButton_save->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"\n"
"\n"
"	background-image: url(:/showCut/ui/show_cut/show_save.png);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"	background-image: url(:/showCut/ui/show_cut/show_save_Select.png);\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        pushButton_print = new QPushButton(CheckShow);
        pushButton_print->setObjectName(QString::fromUtf8("pushButton_print"));
        pushButton_print->setGeometry(QRect(562, 349, 145, 68));
        pushButton_print->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"\n"
"font-size:20px bold;\n"
"	background-image: url(:/showCut/ui/show_cut/show_print.png);\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"font-size:20px bold;\n"
"	background-image: url(:/showCut/ui/show_cut/show_print_select.png);\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        label_3 = new QLabel(CheckShow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(608, 71, 181, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-image: url(:/showCut/ui/show_cut/show_Result.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
""));
        label_6 = new QLabel(CheckShow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 801, 54));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui_new/Up_Frame.jpg);"));
        label = new QLabel(CheckShow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 407, 821, 73));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Test_Cut/Test_Copyright.png);"));
        pushButton_Exit = new QPushButton(CheckShow);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(704, 414, 91, 61));
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
        label_date = new QLabel(CheckShow);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(90, 10, 111, 17));
        label_date->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_Time = new QLabel(CheckShow);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(90, 30, 141, 17));
        label_Time->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        frame = new QFrame(CheckShow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 60, 381, 291));
        frame->setStyleSheet(QString::fromUtf8("QFrame[objectName=\"frame\"]\n"
"{\n"
"background:transparent;\n"
"	background-image: url(:/showCut/ui/show_cut/Show_input_bg.png);\n"
"border:none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(27, 95, 141, 41));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/type.png);"));
        comboBox_Type = new QComboBox(frame);
        comboBox_Type->setObjectName(QString::fromUtf8("comboBox_Type"));
        comboBox_Type->setGeometry(QRect(79, 99, 91, 29));
        comboBox_Type->setStyleSheet(QString::fromUtf8("\n"
"color:green;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(27, 182, 151, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/name.png);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(27, 140, 151, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/id.png);"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(191, 181, 151, 39));
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/age.png);"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(191, 96, 141, 35));
        label_10->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/gender.png);"));
        comboBox_Gender = new QComboBox(frame);
        comboBox_Gender->setObjectName(QString::fromUtf8("comboBox_Gender"));
        comboBox_Gender->setGeometry(QRect(243, 99, 91, 29));
        comboBox_Gender->setStyleSheet(QString::fromUtf8(""));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(191, 140, 151, 36));
        label_11->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Input/bach.png);"));
        label_operator = new QLabel(frame);
        label_operator->setObjectName(QString::fromUtf8("label_operator"));
        label_operator->setGeometry(QRect(248, 232, 61, 21));
        label_operator->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(174, 224, 171, 41));
        label_12->setStyleSheet(QString::fromUtf8("background-image: url(:/showCut/ui/show_cut/show_operator.png);"));
        lineEdit_ID = new QLineEdit(frame);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(81, 145, 71, 24));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        lineEdit_Name = new QLineEdit(frame);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(81, 187, 71, 24));
        lineEdit_Name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        lineEdit_Age = new QLineEdit(frame);
        lineEdit_Age->setObjectName(QString::fromUtf8("lineEdit_Age"));
        lineEdit_Age->setGeometry(QRect(247, 186, 59, 24));
        lineEdit_Age->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        comboBox_Stripes = new QComboBox(frame);
        comboBox_Stripes->setObjectName(QString::fromUtf8("comboBox_Stripes"));
        comboBox_Stripes->setGeometry(QRect(79, 227, 91, 28));
        comboBox_Stripes->setStyleSheet(QString::fromUtf8(""));
        label_Stripes = new QLabel(frame);
        label_Stripes->setObjectName(QString::fromUtf8("label_Stripes"));
        label_Stripes->setGeometry(QRect(22, 221, 61, 41));
        label_Stripes->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/strips.png);"));
        comboBox_Batch = new QComboBox(frame);
        comboBox_Batch->setObjectName(QString::fromUtf8("comboBox_Batch"));
        comboBox_Batch->setGeometry(QRect(243, 144, 93, 29));
        lineEdit_operator = new QLineEdit(frame);
        lineEdit_operator->setObjectName(QString::fromUtf8("lineEdit_operator"));
        lineEdit_operator->setGeometry(QRect(250, 230, 81, 24));
        lineEdit_operator->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        Label_UserName = new QLabel(CheckShow);
        Label_UserName->setObjectName(QString::fromUtf8("Label_UserName"));
        Label_UserName->setGeometry(QRect(614, 9, 91, 21));
        Label_UserName->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_UserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_LogOut = new QPushButton(CheckShow);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(710, 4, 51, 31));
        pushButton_LogOut->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"color:white;\n"
"\n"
""));
        label_data = new QLabel(CheckShow);
        label_data->setObjectName(QString::fromUtf8("label_data"));
        label_data->setGeometry(QRect(502, 75, 101, 31));
        label_data->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;\n"
""));
        label_value = new QLabel(CheckShow);
        label_value->setObjectName(QString::fromUtf8("label_value"));
        label_value->setGeometry(QRect(680, 75, 101, 31));
        label_value->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:green;\n"
""));
        Label_SoftWareVersioin = new QLabel(CheckShow);
        Label_SoftWareVersioin->setObjectName(QString::fromUtf8("Label_SoftWareVersioin"));
        Label_SoftWareVersioin->setEnabled(true);
        Label_SoftWareVersioin->setGeometry(QRect(686, 30, 91, 21));
        Label_SoftWareVersioin->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Height1 = new QLabel(CheckShow);
        label_Height1->setObjectName(QString::fromUtf8("label_Height1"));
        label_Height1->setGeometry(QRect(467, 151, 71, 17));
        label_Height1->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Height2 = new QLabel(CheckShow);
        label_Height2->setObjectName(QString::fromUtf8("label_Height2"));
        label_Height2->setGeometry(QRect(569, 151, 91, 17));
        label_Height2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Height5 = new QLabel(CheckShow);
        label_Height5->setObjectName(QString::fromUtf8("label_Height5"));
        label_Height5->setGeometry(QRect(569, 191, 91, 17));
        label_Height5->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Height6 = new QLabel(CheckShow);
        label_Height6->setObjectName(QString::fromUtf8("label_Height6"));
        label_Height6->setGeometry(QRect(670, 191, 91, 17));
        label_Height6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Height3 = new QLabel(CheckShow);
        label_Height3->setObjectName(QString::fromUtf8("label_Height3"));
        label_Height3->setGeometry(QRect(670, 151, 101, 17));
        label_Height3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Height4 = new QLabel(CheckShow);
        label_Height4->setObjectName(QString::fromUtf8("label_Height4"));
        label_Height4->setGeometry(QRect(467, 191, 91, 17));
        label_Height4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_direction = new QLabel(CheckShow);
        Label_direction->setObjectName(QString::fromUtf8("Label_direction"));
        Label_direction->setGeometry(QRect(530, 20, 71, 21));
        Label_direction->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:red;\n"
"\n"
""));
        label_Area2 = new QLabel(CheckShow);
        label_Area2->setObjectName(QString::fromUtf8("label_Area2"));
        label_Area2->setGeometry(QRect(660, 220, 91, 17));
        label_Area2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        label_Area1 = new QLabel(CheckShow);
        label_Area1->setObjectName(QString::fromUtf8("label_Area1"));
        label_Area1->setGeometry(QRect(471, 220, 91, 17));
        label_Area1->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        pushButton = new QPushButton(CheckShow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 370, 71, 27));
        m_saveButton = new QPushButton(CheckShow);
        m_saveButton->setObjectName(QString::fromUtf8("m_saveButton"));
        m_saveButton->setGeometry(QRect(708, 370, 91, 27));
        m_deleteButton = new QPushButton(CheckShow);
        m_deleteButton->setObjectName(QString::fromUtf8("m_deleteButton"));
        m_deleteButton->setGeometry(QRect(500, 440, 99, 27));
        mChangeAppButton = new QPushButton(CheckShow);
        mChangeAppButton->setObjectName(QString::fromUtf8("mChangeAppButton"));
        mChangeAppButton->setGeometry(QRect(290, 440, 99, 27));

        retranslateUi(CheckShow);

        QMetaObject::connectSlotsByName(CheckShow);
    } // setupUi

    void retranslateUi(QDialog *CheckShow)
    {
        CheckShow->setWindowTitle(QApplication::translate("CheckShow", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_Out->setText(QString());
        label_CurrentVersion->setText(QString());
        pushButton_Test->setText(QString());
        label_2->setText(QString());
        pushButton_save->setText(QString());
        pushButton_print->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label->setText(QString());
        pushButton_Exit->setText(QString());
        label_date->setText(QString());
        label_Time->setText(QString());
        label_4->setText(QString());
        label_7->setText(QString());
        label_5->setText(QString());
        label_8->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_operator->setText(QString());
        label_12->setText(QString());
        label_Stripes->setText(QString());
        Label_UserName->setText(QApplication::translate("CheckShow", "admin", 0, QApplication::UnicodeUTF8));
        pushButton_LogOut->setText(QApplication::translate("CheckShow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label_data->setText(QString());
        label_value->setText(QString());
        Label_SoftWareVersioin->setText(QString());
        label_Height1->setText(QApplication::translate("CheckShow", "1", 0, QApplication::UnicodeUTF8));
        label_Height2->setText(QApplication::translate("CheckShow", "2", 0, QApplication::UnicodeUTF8));
        label_Height5->setText(QApplication::translate("CheckShow", "5", 0, QApplication::UnicodeUTF8));
        label_Height6->setText(QApplication::translate("CheckShow", "6", 0, QApplication::UnicodeUTF8));
        label_Height3->setText(QApplication::translate("CheckShow", "3", 0, QApplication::UnicodeUTF8));
        label_Height4->setText(QApplication::translate("CheckShow", "4", 0, QApplication::UnicodeUTF8));
        Label_direction->setText(QString());
        label_Area2->setText(QString());
        label_Area1->setText(QString());
        pushButton->setText(QApplication::translate("CheckShow", "PushButton", 0, QApplication::UnicodeUTF8));
        m_saveButton->setText(QApplication::translate("CheckShow", "save as", 0, QApplication::UnicodeUTF8));
        m_deleteButton->setText(QApplication::translate("CheckShow", "delete", 0, QApplication::UnicodeUTF8));
        mChangeAppButton->setText(QApplication::translate("CheckShow", "changeApp", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CheckShow: public Ui_CheckShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKSHOW_H
