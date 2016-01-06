/********************************************************************************
** Form generated from reading UI file 'testshow.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTSHOW_H
#define UI_TESTSHOW_H

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
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_TestShow
{
public:
    QPushButton *pushButton_Search;
    QPushButton *pushButton_print;
    QPushButton *pushButton_Edit;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_Time;
    QLabel *label_date;
    QLabel *Label_UserName;
    QPushButton *pushButton_LogOut;
    QLabel *Label_SoftWareVersion;
    QLabel *Label_SoftWareVersion_2;
    QLineEdit *lineEdit_Name;
    QComboBox *comboBox_pro;
    QLineEdit *lineEdit_Year;
    QLabel *Label_SoftWareVersion_3;
    QLabel *Label_SoftWareVersion_4;
    QLabel *Label_SoftWareVersion_5;
    QLineEdit *lineEdit_Month;
    QLineEdit *lineEdit_Day;
    QPushButton *pushButton_down;
    QPushButton *pushButton_up;
    QLabel *label_page;
    QPushButton *pushButton_Exit;
    QLineEdit *lineEdit_Page;
    QPushButton *pushButton_go;
    QLineEdit *lineEdit_ID;
    QPushButton *pushButton;

    void setupUi(QDialog *TestShow)
    {
        if (TestShow->objectName().isEmpty())
            TestShow->setObjectName(QString::fromUtf8("TestShow"));
        TestShow->resize(800, 480);
        TestShow->setStyleSheet(QString::fromUtf8("\n"
"QDialog[objectName=\"TestShow\"]{\n"
"background-image: url(:/ui/ui_new/bg_Frame.jpg);\n"
"}"));
        pushButton_Search = new QPushButton(TestShow);
        pushButton_Search->setObjectName(QString::fromUtf8("pushButton_Search"));
        pushButton_Search->setGeometry(QRect(578, 81, 150, 87));
        pushButton_Search->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Search_Cut/Search.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/Search_Cut/Search_pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        pushButton_print = new QPushButton(TestShow);
        pushButton_print->setObjectName(QString::fromUtf8("pushButton_print"));
        pushButton_print->setGeometry(QRect(268, 356, 112, 61));
        pushButton_print->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Search_Cut/print.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/Search_Cut/print_pressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        pushButton_Edit = new QPushButton(TestShow);
        pushButton_Edit->setObjectName(QString::fromUtf8("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(398, 353, 115, 67));
        pushButton_Edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-image: url(:/ui/Search_Cut/Search_show.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-image: url(:/ui/Search_Cut/search_showPressed.png);\n"
"font-size:30px bold;\n"
"\n"
"border-radius:20px;\n"
"}\n"
"\n"
""));
        label = new QLabel(TestShow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 91, 17));
        label->setStyleSheet(QString::fromUtf8("font: 10pt \"helvetica\" light;\n"
"background:transparent;\n"
""));
        label_2 = new QLabel(TestShow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 111, 17));
        label_2->setStyleSheet(QString::fromUtf8("font: 10pt \"helvetica\" light;\n"
"background:transparent;\n"
""));
        tableView = new QTableView(TestShow);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(86, 170, 631, 185));
        tableView->setStyleSheet(QString::fromUtf8("QTableView[objectName=\"tableView\"]\n"
"{\n"
"border-image: url(:/ui/Search_Cut/bg.png);\n"
"border-radius:10px;\n"
"\n"
"}"));
        label_5 = new QLabel(TestShow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 428, 41, 51));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pictures/logo.png);\n"
"background:transparent;\n"
""));
        label_6 = new QLabel(TestShow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 407, 801, 73));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Test_Cut/Test_Copyright.png);"));
        label_8 = new QLabel(TestShow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 801, 54));
        label_8->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/ui_new/Up_Frame.jpg);"));
        label_Time = new QLabel(TestShow);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(90, 10, 131, 17));
        label_Time->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_date = new QLabel(TestShow);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(90, 30, 111, 17));
        label_date->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        Label_UserName = new QLabel(TestShow);
        Label_UserName->setObjectName(QString::fromUtf8("Label_UserName"));
        Label_UserName->setGeometry(QRect(600, 9, 101, 21));
        Label_UserName->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_UserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_LogOut = new QPushButton(TestShow);
        pushButton_LogOut->setObjectName(QString::fromUtf8("pushButton_LogOut"));
        pushButton_LogOut->setGeometry(QRect(710, 4, 51, 31));
        pushButton_LogOut->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border:none;\n"
"color:white;\n"
"\n"
""));
        Label_SoftWareVersion = new QLabel(TestShow);
        Label_SoftWareVersion->setObjectName(QString::fromUtf8("Label_SoftWareVersion"));
        Label_SoftWareVersion->setGeometry(QRect(686, 30, 91, 21));
        Label_SoftWareVersion->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;\n"
"\n"
""));
        Label_SoftWareVersion_2 = new QLabel(TestShow);
        Label_SoftWareVersion_2->setObjectName(QString::fromUtf8("Label_SoftWareVersion_2"));
        Label_SoftWareVersion_2->setGeometry(QRect(62, 80, 541, 91));
        Label_SoftWareVersion_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/ui/search_parameter.png);\n"
"color:white;\n"
"\n"
""));
        lineEdit_Name = new QLineEdit(TestShow);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(170, 92, 141, 21));
        lineEdit_Name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        comboBox_pro = new QComboBox(TestShow);
        comboBox_pro->setObjectName(QString::fromUtf8("comboBox_pro"));
        comboBox_pro->setGeometry(QRect(413, 126, 163, 28));
        lineEdit_Year = new QLineEdit(TestShow);
        lineEdit_Year->setObjectName(QString::fromUtf8("lineEdit_Year"));
        lineEdit_Year->setGeometry(QRect(412, 93, 71, 25));
        lineEdit_Year->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
""));
        Label_SoftWareVersion_3 = new QLabel(TestShow);
        Label_SoftWareVersion_3->setObjectName(QString::fromUtf8("Label_SoftWareVersion_3"));
        Label_SoftWareVersion_3->setGeometry(QRect(420, 70, 41, 21));
        Label_SoftWareVersion_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;\n"
"\n"
""));
        Label_SoftWareVersion_4 = new QLabel(TestShow);
        Label_SoftWareVersion_4->setObjectName(QString::fromUtf8("Label_SoftWareVersion_4"));
        Label_SoftWareVersion_4->setGeometry(QRect(487, 70, 31, 21));
        Label_SoftWareVersion_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;\n"
"\n"
""));
        Label_SoftWareVersion_5 = new QLabel(TestShow);
        Label_SoftWareVersion_5->setObjectName(QString::fromUtf8("Label_SoftWareVersion_5"));
        Label_SoftWareVersion_5->setGeometry(QRect(540, 70, 41, 21));
        Label_SoftWareVersion_5->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;\n"
"\n"
""));
        lineEdit_Month = new QLineEdit(TestShow);
        lineEdit_Month->setObjectName(QString::fromUtf8("lineEdit_Month"));
        lineEdit_Month->setGeometry(QRect(482, 93, 47, 25));
        lineEdit_Month->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
""));
        lineEdit_Day = new QLineEdit(TestShow);
        lineEdit_Day->setObjectName(QString::fromUtf8("lineEdit_Day"));
        lineEdit_Day->setGeometry(QRect(528, 93, 47, 25));
        lineEdit_Day->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
""));
        pushButton_down = new QPushButton(TestShow);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setGeometry(QRect(584, 375, 31, 27));
        pushButton_up = new QPushButton(TestShow);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setGeometry(QRect(510, 375, 31, 27));
        label_page = new QLabel(TestShow);
        label_page->setObjectName(QString::fromUtf8("label_page"));
        label_page->setGeometry(QRect(544, 380, 41, 17));
        label_page->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_page->setTextFormat(Qt::AutoText);
        label_page->setAlignment(Qt::AlignCenter);
        pushButton_Exit = new QPushButton(TestShow);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(700, 410, 91, 71));
        pushButton_Exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        lineEdit_Page = new QLineEdit(TestShow);
        lineEdit_Page->setObjectName(QString::fromUtf8("lineEdit_Page"));
        lineEdit_Page->setGeometry(QRect(626, 375, 41, 25));
        lineEdit_Page->setStyleSheet(QString::fromUtf8("background:gray;\n"
"\n"
""));
        pushButton_go = new QPushButton(TestShow);
        pushButton_go->setObjectName(QString::fromUtf8("pushButton_go"));
        pushButton_go->setGeometry(QRect(680, 375, 31, 27));
        lineEdit_ID = new QLineEdit(TestShow);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(170, 129, 141, 21));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
"color:green;"));
        pushButton = new QPushButton(TestShow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 380, 98, 27));

        retranslateUi(TestShow);

        QMetaObject::connectSlotsByName(TestShow);
    } // setupUi

    void retranslateUi(QDialog *TestShow)
    {
        TestShow->setWindowTitle(QApplication::translate("TestShow", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_Search->setText(QString());
        pushButton_print->setText(QString());
        pushButton_Edit->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_8->setText(QString());
        label_Time->setText(QString());
        label_date->setText(QString());
        Label_UserName->setText(QString());
        pushButton_LogOut->setText(QApplication::translate("TestShow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion->setText(QApplication::translate("TestShow", "V1.06", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion_2->setText(QString());
        lineEdit_Year->setText(QString());
        Label_SoftWareVersion_3->setText(QApplication::translate("TestShow", "\345\271\264\344\273\275", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion_4->setText(QApplication::translate("TestShow", "\346\234\210", 0, QApplication::UnicodeUTF8));
        Label_SoftWareVersion_5->setText(QApplication::translate("TestShow", "\346\227\245", 0, QApplication::UnicodeUTF8));
        lineEdit_Month->setText(QString());
        lineEdit_Day->setText(QString());
        pushButton_down->setText(QApplication::translate("TestShow", "v", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QApplication::translate("TestShow", "^", 0, QApplication::UnicodeUTF8));
        label_page->setText(QString());
        pushButton_Exit->setText(QString());
        lineEdit_Page->setText(QString());
        pushButton_go->setText(QApplication::translate("TestShow", "go", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TestShow", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestShow: public Ui_TestShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTSHOW_H
