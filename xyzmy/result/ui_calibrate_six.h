/********************************************************************************
** Form generated from reading UI file 'calibrate_six.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATE_SIX_H
#define UI_CALIBRATE_SIX_H

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

class Ui_Calibrate_Six
{
public:
    QPushButton *pushButton_Save;
    QFrame *frame;
    QLabel *label_4;
    QComboBox *comboBox_project;
    QComboBox *comboBox_Cassette;
    QPushButton *pushButton_out;
    QPushButton *pushButton_calibrate;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_StandardValue;
    QLineEdit *lineEdit_RealValue;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Calibrate_Six)
    {
        if (Calibrate_Six->objectName().isEmpty())
            Calibrate_Six->setObjectName(QString::fromUtf8("Calibrate_Six"));
        Calibrate_Six->resize(660, 314);
        Calibrate_Six->setStyleSheet(QString::fromUtf8("\n"
"background:transparent;\n"
"\n"
"background-color:transparent;\n"
""));
        pushButton_Save = new QPushButton(Calibrate_Six);
        pushButton_Save->setObjectName(QString::fromUtf8("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(170, 225, 155, 75));
        pushButton_Save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        frame = new QFrame(Calibrate_Six);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(13, 7, 642, 231));
        frame->setStyleSheet(QString::fromUtf8("QFrame[objectName=\"frame\"]\n"
"{background:transparent;\n"
" border-radius:10px;\n"
"	background-image: url(:/keyboard/ui/Calibrate/calibrate_bg.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(229, 10, 92, 43));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Calibrate/calibrate_project.png);"));
        comboBox_project = new QComboBox(frame);
        comboBox_project->setObjectName(QString::fromUtf8("comboBox_project"));
        comboBox_project->setGeometry(QRect(311, 16, 85, 29));
        comboBox_project->setStyleSheet(QString::fromUtf8("QComboBox[objectName=\"comboBox_project\"]\n"
"{\n"
"\n"
"background-color:white;\n"
"}"));
        comboBox_Cassette = new QComboBox(frame);
        comboBox_Cassette->setObjectName(QString::fromUtf8("comboBox_Cassette"));
        comboBox_Cassette->setGeometry(QRect(91, 86, 186, 35));
        comboBox_Cassette->setStyleSheet(QString::fromUtf8("QComboBox[objectName=\"comboBox_Cassette\"]\n"
"{\n"
"\n"
"background-color:white;\n"
"}"));
        pushButton_out = new QPushButton(frame);
        pushButton_out->setObjectName(QString::fromUtf8("pushButton_out"));
        pushButton_out->setGeometry(QRect(80, 125, 106, 71));
        pushButton_out->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_calibrate = new QPushButton(frame);
        pushButton_calibrate->setObjectName(QString::fromUtf8("pushButton_calibrate"));
        pushButton_calibrate->setGeometry(QRect(180, 123, 114, 68));
        pushButton_calibrate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(336, 86, 210, 37));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Calibrate/StandValue.png);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(336, 146, 210, 37));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/ui/Calibrate/RealValue.png);"));
        lineEdit_StandardValue = new QLineEdit(frame);
        lineEdit_StandardValue->setObjectName(QString::fromUtf8("lineEdit_StandardValue"));
        lineEdit_StandardValue->setGeometry(QRect(421, 94, 113, 21));
        lineEdit_StandardValue->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
""));
        lineEdit_RealValue = new QLineEdit(frame);
        lineEdit_RealValue->setObjectName(QString::fromUtf8("lineEdit_RealValue"));
        lineEdit_RealValue->setGeometry(QRect(421, 154, 113, 21));
        lineEdit_RealValue->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius:10px;\n"
""));
        pushButton_exit = new QPushButton(Calibrate_Six);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(330, 229, 155, 75));
        pushButton_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Calibrate_Six);

        QMetaObject::connectSlotsByName(Calibrate_Six);
    } // setupUi

    void retranslateUi(QDialog *Calibrate_Six)
    {
        Calibrate_Six->setWindowTitle(QApplication::translate("Calibrate_Six", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton_Save->setText(QString());
        label_4->setText(QString());
        comboBox_Cassette->clear();
        comboBox_Cassette->insertItems(0, QStringList()
         << QApplication::translate("Calibrate_Six", "1\345\217\267\346\240\241\346\255\243\347\272\270\346\235\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Calibrate_Six", "2\345\217\267\346\240\241\346\255\243\347\272\270\346\235\241", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Calibrate_Six", "3\345\217\267\346\240\241\346\255\243\347\272\270\346\235\241", 0, QApplication::UnicodeUTF8)
        );
        pushButton_out->setText(QString());
        pushButton_calibrate->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        pushButton_exit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Calibrate_Six: public Ui_Calibrate_Six {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATE_SIX_H
