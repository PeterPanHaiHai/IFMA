/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created: Tue Dec 29 16:05:57 2015
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_13;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *mSpiSymbol;
    QLineEdit *mLedSymbol;
    QLineEdit *mPmwEnable;
    QLineEdit *mPmwDirection;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *mPmwHz;
    QLineEdit *mSwdr;
    QLineEdit *mLedHight;
    QLineEdit *mLedLow;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *mbindi;
    QLineEdit *m_testCount;

    void setupUi(QDialog *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QString::fromUtf8("test"));
        test->resize(569, 240);
        pushButton = new QPushButton(test);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 180, 99, 27));
        layoutWidget = new QWidget(test);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 12, 218, 130));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout->addWidget(label_13);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mSpiSymbol = new QLineEdit(layoutWidget);
        mSpiSymbol->setObjectName(QString::fromUtf8("mSpiSymbol"));

        verticalLayout_2->addWidget(mSpiSymbol);

        mLedSymbol = new QLineEdit(layoutWidget);
        mLedSymbol->setObjectName(QString::fromUtf8("mLedSymbol"));

        verticalLayout_2->addWidget(mLedSymbol);

        mPmwEnable = new QLineEdit(layoutWidget);
        mPmwEnable->setObjectName(QString::fromUtf8("mPmwEnable"));

        verticalLayout_2->addWidget(mPmwEnable);

        mPmwDirection = new QLineEdit(layoutWidget);
        mPmwDirection->setObjectName(QString::fromUtf8("mPmwDirection"));

        verticalLayout_2->addWidget(mPmwDirection);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(test);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(280, 10, 249, 130));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_3->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_3->addWidget(label_11);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mPmwHz = new QLineEdit(layoutWidget1);
        mPmwHz->setObjectName(QString::fromUtf8("mPmwHz"));

        verticalLayout_4->addWidget(mPmwHz);

        mSwdr = new QLineEdit(layoutWidget1);
        mSwdr->setObjectName(QString::fromUtf8("mSwdr"));

        verticalLayout_4->addWidget(mSwdr);

        mLedHight = new QLineEdit(layoutWidget1);
        mLedHight->setObjectName(QString::fromUtf8("mLedHight"));

        verticalLayout_4->addWidget(mLedHight);

        mLedLow = new QLineEdit(layoutWidget1);
        mLedLow->setObjectName(QString::fromUtf8("mLedLow"));

        verticalLayout_4->addWidget(mLedLow);


        horizontalLayout_2->addLayout(verticalLayout_4);

        widget = new QWidget(test);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 150, 203, 64));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        mbindi = new QLineEdit(widget);
        mbindi->setObjectName(QString::fromUtf8("mbindi"));

        verticalLayout_6->addWidget(mbindi);

        m_testCount = new QLineEdit(widget);
        m_testCount->setObjectName(QString::fromUtf8("m_testCount"));

        verticalLayout_6->addWidget(m_testCount);


        horizontalLayout_3->addLayout(verticalLayout_6);


        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QDialog *test)
    {
        test->setWindowTitle(QApplication::translate("test", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("test", "OK", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("test", "SPI\346\240\207\345\277\227", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("test", "LED\346\240\207\345\277\227", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("test", "\347\224\265\346\234\272\344\275\277\350\203\275", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("test", "\347\224\265\346\234\272\346\226\271\345\220\221", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("test", "\347\224\265\346\234\272\351\242\221\347\216\207", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("test", "\346\226\271\346\263\242\345\215\240\347\251\272\346\257\224", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("test", "LED\344\272\256\345\272\246 \351\253\230\344\275\215", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("test", "LED\344\272\256\345\272\246\344\275\216\344\275\215", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("test", "\350\203\214\346\231\257\345\200\274", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("test", "\346\265\213\350\257\225\346\225\260", 0, QApplication::UnicodeUTF8));
        m_testCount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
