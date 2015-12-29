/********************************************************************************
** Form generated from reading UI file 'chinesebar.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHINESEBAR_H
#define UI_CHINESEBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chinesebar
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *listDown;
    QPushButton *font_2;
    QLineEdit *lineEdit;
    QPushButton *listUp;
    QPushButton *font_1;
    QPushButton *font_3;
    QPushButton *font_4;
    QPushButton *font_5;
    QPushButton *font_6;
    QPushButton *font_7;
    QPushButton *font_8;

    void setupUi(QDialog *chinesebar)
    {
        if (chinesebar->objectName().isEmpty())
            chinesebar->setObjectName(QString::fromUtf8("chinesebar"));
        chinesebar->resize(767, 91);
        gridLayoutWidget = new QWidget(chinesebar);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 750, 28));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        listDown = new QPushButton(gridLayoutWidget);
        listDown->setObjectName(QString::fromUtf8("listDown"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(6);
        font.setBold(true);
        font.setWeight(75);
        listDown->setFont(font);

        gridLayout->addWidget(listDown, 1, 11, 1, 1);

        font_2 = new QPushButton(gridLayoutWidget);
        font_2->setObjectName(QString::fromUtf8("font_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        font_2->setFont(font1);

        gridLayout->addWidget(font_2, 1, 4, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 2);

        listUp = new QPushButton(gridLayoutWidget);
        listUp->setObjectName(QString::fromUtf8("listUp"));
        listUp->setFont(font);

        gridLayout->addWidget(listUp, 1, 0, 1, 1);

        font_1 = new QPushButton(gridLayoutWidget);
        font_1->setObjectName(QString::fromUtf8("font_1"));
        font_1->setFont(font1);

        gridLayout->addWidget(font_1, 1, 3, 1, 1);

        font_3 = new QPushButton(gridLayoutWidget);
        font_3->setObjectName(QString::fromUtf8("font_3"));
        font_3->setFont(font1);

        gridLayout->addWidget(font_3, 1, 5, 1, 1);

        font_4 = new QPushButton(gridLayoutWidget);
        font_4->setObjectName(QString::fromUtf8("font_4"));
        font_4->setFont(font1);

        gridLayout->addWidget(font_4, 1, 6, 1, 1);

        font_5 = new QPushButton(gridLayoutWidget);
        font_5->setObjectName(QString::fromUtf8("font_5"));
        font_5->setFont(font1);

        gridLayout->addWidget(font_5, 1, 7, 1, 1);

        font_6 = new QPushButton(gridLayoutWidget);
        font_6->setObjectName(QString::fromUtf8("font_6"));
        font_6->setFont(font1);

        gridLayout->addWidget(font_6, 1, 8, 1, 1);

        font_7 = new QPushButton(gridLayoutWidget);
        font_7->setObjectName(QString::fromUtf8("font_7"));
        font_7->setFont(font1);

        gridLayout->addWidget(font_7, 1, 9, 1, 1);

        font_8 = new QPushButton(gridLayoutWidget);
        font_8->setObjectName(QString::fromUtf8("font_8"));
        font_8->setFont(font1);

        gridLayout->addWidget(font_8, 1, 10, 1, 1);


        retranslateUi(chinesebar);

        QMetaObject::connectSlotsByName(chinesebar);
    } // setupUi

    void retranslateUi(QDialog *chinesebar)
    {
        chinesebar->setWindowTitle(QApplication::translate("chinesebar", "Dialog", 0, QApplication::UnicodeUTF8));
        listDown->setText(QApplication::translate("chinesebar", ">", 0, QApplication::UnicodeUTF8));
        font_2->setText(QString());
        listUp->setText(QApplication::translate("chinesebar", "<", 0, QApplication::UnicodeUTF8));
        font_1->setText(QString());
        font_3->setText(QString());
        font_4->setText(QString());
        font_5->setText(QString());
        font_6->setText(QString());
        font_7->setText(QString());
        font_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chinesebar: public Ui_chinesebar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHINESEBAR_H
