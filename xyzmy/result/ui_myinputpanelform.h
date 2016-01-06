/********************************************************************************
** Form generated from reading UI file 'myinputpanelform.ui'
**
** Created: Wed Jan 6 19:12:25 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYINPUTPANELFORM_H
#define UI_MYINPUTPANELFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyInputPanelForm
{
public:
    QPushButton *enterButton;
    QPushButton *panelButton_CAPS;
    QPushButton *panelButton_Chinese;
    QPushButton *panelButton_blank;
    QFrame *frame_Cn;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *listUp;
    QPushButton *font_1;
    QPushButton *font_2;
    QPushButton *font_3;
    QPushButton *font_4;
    QPushButton *font_5;
    QPushButton *font_6;
    QPushButton *font_7;
    QPushButton *font_8;
    QPushButton *listDown;
    QFrame *frame_Number;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_Number;
    QPushButton *panelButton_1;
    QPushButton *panelButton_2;
    QPushButton *panelButton_3;
    QPushButton *panelButton_4;
    QPushButton *panelButton_5;
    QPushButton *panelButton_6;
    QPushButton *panelButton_7;
    QPushButton *panelButton_8;
    QPushButton *panelButton_9;
    QPushButton *panelButton_0;
    QPushButton *panelButton_Decimal;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *panelButton_q;
    QPushButton *panelButton_w;
    QPushButton *panelButton_e;
    QPushButton *panelButton_r;
    QPushButton *panelButton_t;
    QPushButton *panelButton_y;
    QPushButton *panelButton_u;
    QPushButton *panelButton_i;
    QPushButton *panelButton_o;
    QPushButton *panelButton_p;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *panelButton_a;
    QPushButton *panelButton_s;
    QPushButton *panelButton_d;
    QPushButton *panelButton_f;
    QPushButton *panelButton_g;
    QPushButton *panelButton_h;
    QPushButton *panelButton_j;
    QPushButton *panelButton_k;
    QPushButton *panelButton_l;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *panelButton_z;
    QPushButton *panelButton_x;
    QPushButton *panelButton_c;
    QPushButton *panelButton_v;
    QPushButton *panelButton_b;
    QPushButton *panelButton_n;
    QPushButton *panelButton_m;
    QPushButton *panelButton_backspace;
    QLineEdit *lineEdit_pingyin;

    void setupUi(QWidget *MyInputPanelForm)
    {
        if (MyInputPanelForm->objectName().isEmpty())
            MyInputPanelForm->setObjectName(QString::fromUtf8("MyInputPanelForm"));
        MyInputPanelForm->resize(797, 197);
        MyInputPanelForm->setStyleSheet(QString::fromUtf8(""));
        enterButton = new QPushButton(MyInputPanelForm);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(698, 150, 91, 40));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enterButton->sizePolicy().hasHeightForWidth());
        enterButton->setSizePolicy(sizePolicy);
        enterButton->setMinimumSize(QSize(45, 40));
        enterButton->setFocusPolicy(Qt::NoFocus);
        enterButton->setStyleSheet(QString::fromUtf8(""));
        enterButton->setProperty("buttonValue", QVariant(QChar(35)));
        panelButton_CAPS = new QPushButton(MyInputPanelForm);
        panelButton_CAPS->setObjectName(QString::fromUtf8("panelButton_CAPS"));
        panelButton_CAPS->setGeometry(QRect(10, 52, 65, 40));
        sizePolicy.setHeightForWidth(panelButton_CAPS->sizePolicy().hasHeightForWidth());
        panelButton_CAPS->setSizePolicy(sizePolicy);
        panelButton_CAPS->setMinimumSize(QSize(45, 40));
        panelButton_CAPS->setFocusPolicy(Qt::NoFocus);
        panelButton_CAPS->setStyleSheet(QString::fromUtf8(""));
        panelButton_CAPS->setProperty("buttonValue", QVariant(QChar(35)));
        panelButton_Chinese = new QPushButton(MyInputPanelForm);
        panelButton_Chinese->setObjectName(QString::fromUtf8("panelButton_Chinese"));
        panelButton_Chinese->setGeometry(QRect(10, 100, 81, 40));
        sizePolicy.setHeightForWidth(panelButton_Chinese->sizePolicy().hasHeightForWidth());
        panelButton_Chinese->setSizePolicy(sizePolicy);
        panelButton_Chinese->setMinimumSize(QSize(45, 40));
        panelButton_Chinese->setFocusPolicy(Qt::NoFocus);
        panelButton_Chinese->setStyleSheet(QString::fromUtf8(""));
        panelButton_Chinese->setProperty("buttonValue", QVariant(QChar(35)));
        panelButton_blank = new QPushButton(MyInputPanelForm);
        panelButton_blank->setObjectName(QString::fromUtf8("panelButton_blank"));
        panelButton_blank->setGeometry(QRect(10, 150, 161, 42));
        sizePolicy.setHeightForWidth(panelButton_blank->sizePolicy().hasHeightForWidth());
        panelButton_blank->setSizePolicy(sizePolicy);
        panelButton_blank->setMinimumSize(QSize(45, 40));
        panelButton_blank->setFocusPolicy(Qt::NoFocus);
        panelButton_blank->setStyleSheet(QString::fromUtf8(""));
        panelButton_blank->setProperty("buttonValue", QVariant(QChar(35)));
        frame_Cn = new QFrame(MyInputPanelForm);
        frame_Cn->setObjectName(QString::fromUtf8("frame_Cn"));
        frame_Cn->setGeometry(QRect(0, 270, 801, 51));
        layoutWidget_2 = new QWidget(frame_Cn);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 0, 781, 42));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        listUp = new QPushButton(layoutWidget_2);
        listUp->setObjectName(QString::fromUtf8("listUp"));
        listUp->setMinimumSize(QSize(45, 40));
        listUp->setFocusPolicy(Qt::NoFocus);
        listUp->setStyleSheet(QString::fromUtf8(""));
        listUp->setProperty("buttonValue", QVariant(QChar(49)));

        horizontalLayout_7->addWidget(listUp);

        font_1 = new QPushButton(layoutWidget_2);
        font_1->setObjectName(QString::fromUtf8("font_1"));
        sizePolicy.setHeightForWidth(font_1->sizePolicy().hasHeightForWidth());
        font_1->setSizePolicy(sizePolicy);
        font_1->setMinimumSize(QSize(45, 40));
        font_1->setFocusPolicy(Qt::NoFocus);
        font_1->setStyleSheet(QString::fromUtf8(""));
        font_1->setProperty("buttonValue", QVariant(QChar(50)));

        horizontalLayout_7->addWidget(font_1);

        font_2 = new QPushButton(layoutWidget_2);
        font_2->setObjectName(QString::fromUtf8("font_2"));
        sizePolicy.setHeightForWidth(font_2->sizePolicy().hasHeightForWidth());
        font_2->setSizePolicy(sizePolicy);
        font_2->setMinimumSize(QSize(45, 40));
        font_2->setFocusPolicy(Qt::NoFocus);
        font_2->setStyleSheet(QString::fromUtf8(""));
        font_2->setProperty("buttonValue", QVariant(QChar(51)));

        horizontalLayout_7->addWidget(font_2);

        font_3 = new QPushButton(layoutWidget_2);
        font_3->setObjectName(QString::fromUtf8("font_3"));
        sizePolicy.setHeightForWidth(font_3->sizePolicy().hasHeightForWidth());
        font_3->setSizePolicy(sizePolicy);
        font_3->setMinimumSize(QSize(45, 40));
        font_3->setFocusPolicy(Qt::NoFocus);
        font_3->setStyleSheet(QString::fromUtf8(""));
        font_3->setProperty("buttonValue", QVariant(QChar(52)));

        horizontalLayout_7->addWidget(font_3);

        font_4 = new QPushButton(layoutWidget_2);
        font_4->setObjectName(QString::fromUtf8("font_4"));
        sizePolicy.setHeightForWidth(font_4->sizePolicy().hasHeightForWidth());
        font_4->setSizePolicy(sizePolicy);
        font_4->setMinimumSize(QSize(45, 40));
        font_4->setFocusPolicy(Qt::NoFocus);
        font_4->setStyleSheet(QString::fromUtf8(""));
        font_4->setProperty("buttonValue", QVariant(QChar(53)));

        horizontalLayout_7->addWidget(font_4);

        font_5 = new QPushButton(layoutWidget_2);
        font_5->setObjectName(QString::fromUtf8("font_5"));
        sizePolicy.setHeightForWidth(font_5->sizePolicy().hasHeightForWidth());
        font_5->setSizePolicy(sizePolicy);
        font_5->setMinimumSize(QSize(45, 40));
        font_5->setFocusPolicy(Qt::NoFocus);
        font_5->setStyleSheet(QString::fromUtf8(""));
        font_5->setProperty("buttonValue", QVariant(QChar(54)));

        horizontalLayout_7->addWidget(font_5);

        font_6 = new QPushButton(layoutWidget_2);
        font_6->setObjectName(QString::fromUtf8("font_6"));
        sizePolicy.setHeightForWidth(font_6->sizePolicy().hasHeightForWidth());
        font_6->setSizePolicy(sizePolicy);
        font_6->setMinimumSize(QSize(45, 40));
        font_6->setFocusPolicy(Qt::NoFocus);
        font_6->setStyleSheet(QString::fromUtf8(""));
        font_6->setProperty("buttonValue", QVariant(QChar(55)));

        horizontalLayout_7->addWidget(font_6);

        font_7 = new QPushButton(layoutWidget_2);
        font_7->setObjectName(QString::fromUtf8("font_7"));
        sizePolicy.setHeightForWidth(font_7->sizePolicy().hasHeightForWidth());
        font_7->setSizePolicy(sizePolicy);
        font_7->setMinimumSize(QSize(45, 40));
        font_7->setFocusPolicy(Qt::NoFocus);
        font_7->setStyleSheet(QString::fromUtf8(""));
        font_7->setProperty("buttonValue", QVariant(QChar(57)));

        horizontalLayout_7->addWidget(font_7);

        font_8 = new QPushButton(layoutWidget_2);
        font_8->setObjectName(QString::fromUtf8("font_8"));
        sizePolicy.setHeightForWidth(font_8->sizePolicy().hasHeightForWidth());
        font_8->setSizePolicy(sizePolicy);
        font_8->setMinimumSize(QSize(45, 40));
        font_8->setFocusPolicy(Qt::NoFocus);
        font_8->setStyleSheet(QString::fromUtf8(""));
        font_8->setProperty("buttonValue", QVariant(QChar(57)));

        horizontalLayout_7->addWidget(font_8);

        listDown = new QPushButton(layoutWidget_2);
        listDown->setObjectName(QString::fromUtf8("listDown"));
        listDown->setMinimumSize(QSize(45, 40));
        listDown->setFocusPolicy(Qt::NoFocus);
        listDown->setStyleSheet(QString::fromUtf8(""));
        listDown->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout_7->addWidget(listDown);

        frame_Number = new QFrame(MyInputPanelForm);
        frame_Number->setObjectName(QString::fromUtf8("frame_Number"));
        frame_Number->setGeometry(QRect(-1, 0, 911, 60));
        layoutWidget_3 = new QWidget(frame_Number);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 0, 781, 42));
        horizontalLayout_Number = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_Number->setObjectName(QString::fromUtf8("horizontalLayout_Number"));
        horizontalLayout_Number->setContentsMargins(0, 0, 0, 0);
        panelButton_1 = new QPushButton(layoutWidget_3);
        panelButton_1->setObjectName(QString::fromUtf8("panelButton_1"));
        panelButton_1->setMinimumSize(QSize(45, 40));
        panelButton_1->setFocusPolicy(Qt::NoFocus);
        panelButton_1->setStyleSheet(QString::fromUtf8(""));
        panelButton_1->setProperty("buttonValue", QVariant(QChar(49)));

        horizontalLayout_Number->addWidget(panelButton_1);

        panelButton_2 = new QPushButton(layoutWidget_3);
        panelButton_2->setObjectName(QString::fromUtf8("panelButton_2"));
        sizePolicy.setHeightForWidth(panelButton_2->sizePolicy().hasHeightForWidth());
        panelButton_2->setSizePolicy(sizePolicy);
        panelButton_2->setMinimumSize(QSize(45, 40));
        panelButton_2->setFocusPolicy(Qt::NoFocus);
        panelButton_2->setStyleSheet(QString::fromUtf8(""));
        panelButton_2->setProperty("buttonValue", QVariant(QChar(50)));

        horizontalLayout_Number->addWidget(panelButton_2);

        panelButton_3 = new QPushButton(layoutWidget_3);
        panelButton_3->setObjectName(QString::fromUtf8("panelButton_3"));
        sizePolicy.setHeightForWidth(panelButton_3->sizePolicy().hasHeightForWidth());
        panelButton_3->setSizePolicy(sizePolicy);
        panelButton_3->setMinimumSize(QSize(45, 40));
        panelButton_3->setFocusPolicy(Qt::NoFocus);
        panelButton_3->setStyleSheet(QString::fromUtf8(""));
        panelButton_3->setProperty("buttonValue", QVariant(QChar(51)));

        horizontalLayout_Number->addWidget(panelButton_3);

        panelButton_4 = new QPushButton(layoutWidget_3);
        panelButton_4->setObjectName(QString::fromUtf8("panelButton_4"));
        sizePolicy.setHeightForWidth(panelButton_4->sizePolicy().hasHeightForWidth());
        panelButton_4->setSizePolicy(sizePolicy);
        panelButton_4->setMinimumSize(QSize(45, 40));
        panelButton_4->setFocusPolicy(Qt::NoFocus);
        panelButton_4->setStyleSheet(QString::fromUtf8(""));
        panelButton_4->setProperty("buttonValue", QVariant(QChar(52)));

        horizontalLayout_Number->addWidget(panelButton_4);

        panelButton_5 = new QPushButton(layoutWidget_3);
        panelButton_5->setObjectName(QString::fromUtf8("panelButton_5"));
        sizePolicy.setHeightForWidth(panelButton_5->sizePolicy().hasHeightForWidth());
        panelButton_5->setSizePolicy(sizePolicy);
        panelButton_5->setMinimumSize(QSize(45, 40));
        panelButton_5->setFocusPolicy(Qt::NoFocus);
        panelButton_5->setStyleSheet(QString::fromUtf8(""));
        panelButton_5->setProperty("buttonValue", QVariant(QChar(53)));

        horizontalLayout_Number->addWidget(panelButton_5);

        panelButton_6 = new QPushButton(layoutWidget_3);
        panelButton_6->setObjectName(QString::fromUtf8("panelButton_6"));
        sizePolicy.setHeightForWidth(panelButton_6->sizePolicy().hasHeightForWidth());
        panelButton_6->setSizePolicy(sizePolicy);
        panelButton_6->setMinimumSize(QSize(45, 40));
        panelButton_6->setFocusPolicy(Qt::NoFocus);
        panelButton_6->setStyleSheet(QString::fromUtf8(""));
        panelButton_6->setProperty("buttonValue", QVariant(QChar(54)));

        horizontalLayout_Number->addWidget(panelButton_6);

        panelButton_7 = new QPushButton(layoutWidget_3);
        panelButton_7->setObjectName(QString::fromUtf8("panelButton_7"));
        sizePolicy.setHeightForWidth(panelButton_7->sizePolicy().hasHeightForWidth());
        panelButton_7->setSizePolicy(sizePolicy);
        panelButton_7->setMinimumSize(QSize(45, 40));
        panelButton_7->setFocusPolicy(Qt::NoFocus);
        panelButton_7->setStyleSheet(QString::fromUtf8(""));
        panelButton_7->setProperty("buttonValue", QVariant(QChar(55)));

        horizontalLayout_Number->addWidget(panelButton_7);

        panelButton_8 = new QPushButton(layoutWidget_3);
        panelButton_8->setObjectName(QString::fromUtf8("panelButton_8"));
        sizePolicy.setHeightForWidth(panelButton_8->sizePolicy().hasHeightForWidth());
        panelButton_8->setSizePolicy(sizePolicy);
        panelButton_8->setMinimumSize(QSize(45, 40));
        panelButton_8->setFocusPolicy(Qt::NoFocus);
        panelButton_8->setStyleSheet(QString::fromUtf8(""));
        panelButton_8->setProperty("buttonValue", QVariant(QChar(57)));

        horizontalLayout_Number->addWidget(panelButton_8);

        panelButton_9 = new QPushButton(layoutWidget_3);
        panelButton_9->setObjectName(QString::fromUtf8("panelButton_9"));
        sizePolicy.setHeightForWidth(panelButton_9->sizePolicy().hasHeightForWidth());
        panelButton_9->setSizePolicy(sizePolicy);
        panelButton_9->setMinimumSize(QSize(45, 40));
        panelButton_9->setFocusPolicy(Qt::NoFocus);
        panelButton_9->setStyleSheet(QString::fromUtf8(""));
        panelButton_9->setProperty("buttonValue", QVariant(QChar(57)));

        horizontalLayout_Number->addWidget(panelButton_9);

        panelButton_0 = new QPushButton(layoutWidget_3);
        panelButton_0->setObjectName(QString::fromUtf8("panelButton_0"));
        panelButton_0->setMinimumSize(QSize(45, 40));
        panelButton_0->setFocusPolicy(Qt::NoFocus);
        panelButton_0->setStyleSheet(QString::fromUtf8(""));
        panelButton_0->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout_Number->addWidget(panelButton_0);

        panelButton_Decimal = new QPushButton(layoutWidget_3);
        panelButton_Decimal->setObjectName(QString::fromUtf8("panelButton_Decimal"));
        panelButton_Decimal->setMinimumSize(QSize(45, 40));
        panelButton_Decimal->setFocusPolicy(Qt::NoFocus);
        panelButton_Decimal->setStyleSheet(QString::fromUtf8(""));
        panelButton_Decimal->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout_Number->addWidget(panelButton_Decimal);

        layoutWidget = new QWidget(MyInputPanelForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 711, 44));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        panelButton_q = new QPushButton(layoutWidget);
        panelButton_q->setObjectName(QString::fromUtf8("panelButton_q"));
        panelButton_q->setMinimumSize(QSize(45, 40));
        panelButton_q->setFocusPolicy(Qt::NoFocus);
        panelButton_q->setStyleSheet(QString::fromUtf8(""));
        panelButton_q->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_q);

        panelButton_w = new QPushButton(layoutWidget);
        panelButton_w->setObjectName(QString::fromUtf8("panelButton_w"));
        panelButton_w->setMinimumSize(QSize(45, 40));
        panelButton_w->setFocusPolicy(Qt::NoFocus);
        panelButton_w->setStyleSheet(QString::fromUtf8(""));
        panelButton_w->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_w);

        panelButton_e = new QPushButton(layoutWidget);
        panelButton_e->setObjectName(QString::fromUtf8("panelButton_e"));
        panelButton_e->setMinimumSize(QSize(45, 40));
        panelButton_e->setFocusPolicy(Qt::NoFocus);
        panelButton_e->setStyleSheet(QString::fromUtf8(""));
        panelButton_e->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_e);

        panelButton_r = new QPushButton(layoutWidget);
        panelButton_r->setObjectName(QString::fromUtf8("panelButton_r"));
        panelButton_r->setMinimumSize(QSize(45, 40));
        panelButton_r->setFocusPolicy(Qt::NoFocus);
        panelButton_r->setStyleSheet(QString::fromUtf8(""));
        panelButton_r->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_r);

        panelButton_t = new QPushButton(layoutWidget);
        panelButton_t->setObjectName(QString::fromUtf8("panelButton_t"));
        panelButton_t->setMinimumSize(QSize(45, 40));
        panelButton_t->setFocusPolicy(Qt::NoFocus);
        panelButton_t->setStyleSheet(QString::fromUtf8(""));
        panelButton_t->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_t);

        panelButton_y = new QPushButton(layoutWidget);
        panelButton_y->setObjectName(QString::fromUtf8("panelButton_y"));
        panelButton_y->setMinimumSize(QSize(45, 40));
        panelButton_y->setFocusPolicy(Qt::NoFocus);
        panelButton_y->setStyleSheet(QString::fromUtf8(""));
        panelButton_y->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_y);

        panelButton_u = new QPushButton(layoutWidget);
        panelButton_u->setObjectName(QString::fromUtf8("panelButton_u"));
        panelButton_u->setMinimumSize(QSize(45, 40));
        panelButton_u->setFocusPolicy(Qt::NoFocus);
        panelButton_u->setStyleSheet(QString::fromUtf8(""));
        panelButton_u->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_u);

        panelButton_i = new QPushButton(layoutWidget);
        panelButton_i->setObjectName(QString::fromUtf8("panelButton_i"));
        panelButton_i->setMinimumSize(QSize(45, 40));
        panelButton_i->setFocusPolicy(Qt::NoFocus);
        panelButton_i->setStyleSheet(QString::fromUtf8(""));
        panelButton_i->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_i);

        panelButton_o = new QPushButton(layoutWidget);
        panelButton_o->setObjectName(QString::fromUtf8("panelButton_o"));
        panelButton_o->setMinimumSize(QSize(45, 40));
        panelButton_o->setFocusPolicy(Qt::NoFocus);
        panelButton_o->setStyleSheet(QString::fromUtf8(""));
        panelButton_o->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_o);

        panelButton_p = new QPushButton(layoutWidget);
        panelButton_p->setObjectName(QString::fromUtf8("panelButton_p"));
        panelButton_p->setMinimumSize(QSize(45, 40));
        panelButton_p->setFocusPolicy(Qt::NoFocus);
        panelButton_p->setStyleSheet(QString::fromUtf8(""));
        panelButton_p->setProperty("buttonValue", QVariant(QChar(48)));

        horizontalLayout->addWidget(panelButton_p);

        layoutWidget1 = new QWidget(MyInputPanelForm);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(94, 100, 641, 42));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        panelButton_a = new QPushButton(layoutWidget1);
        panelButton_a->setObjectName(QString::fromUtf8("panelButton_a"));
        sizePolicy.setHeightForWidth(panelButton_a->sizePolicy().hasHeightForWidth());
        panelButton_a->setSizePolicy(sizePolicy);
        panelButton_a->setMinimumSize(QSize(45, 40));
        panelButton_a->setFocusPolicy(Qt::NoFocus);
        panelButton_a->setStyleSheet(QString::fromUtf8(""));
        panelButton_a->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_a);

        panelButton_s = new QPushButton(layoutWidget1);
        panelButton_s->setObjectName(QString::fromUtf8("panelButton_s"));
        sizePolicy.setHeightForWidth(panelButton_s->sizePolicy().hasHeightForWidth());
        panelButton_s->setSizePolicy(sizePolicy);
        panelButton_s->setMinimumSize(QSize(45, 40));
        panelButton_s->setFocusPolicy(Qt::NoFocus);
        panelButton_s->setStyleSheet(QString::fromUtf8(""));
        panelButton_s->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_s);

        panelButton_d = new QPushButton(layoutWidget1);
        panelButton_d->setObjectName(QString::fromUtf8("panelButton_d"));
        sizePolicy.setHeightForWidth(panelButton_d->sizePolicy().hasHeightForWidth());
        panelButton_d->setSizePolicy(sizePolicy);
        panelButton_d->setMinimumSize(QSize(45, 40));
        panelButton_d->setFocusPolicy(Qt::NoFocus);
        panelButton_d->setStyleSheet(QString::fromUtf8(""));
        panelButton_d->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_d);

        panelButton_f = new QPushButton(layoutWidget1);
        panelButton_f->setObjectName(QString::fromUtf8("panelButton_f"));
        sizePolicy.setHeightForWidth(panelButton_f->sizePolicy().hasHeightForWidth());
        panelButton_f->setSizePolicy(sizePolicy);
        panelButton_f->setMinimumSize(QSize(45, 40));
        panelButton_f->setFocusPolicy(Qt::NoFocus);
        panelButton_f->setStyleSheet(QString::fromUtf8(""));
        panelButton_f->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_f);

        panelButton_g = new QPushButton(layoutWidget1);
        panelButton_g->setObjectName(QString::fromUtf8("panelButton_g"));
        sizePolicy.setHeightForWidth(panelButton_g->sizePolicy().hasHeightForWidth());
        panelButton_g->setSizePolicy(sizePolicy);
        panelButton_g->setMinimumSize(QSize(45, 40));
        panelButton_g->setFocusPolicy(Qt::NoFocus);
        panelButton_g->setStyleSheet(QString::fromUtf8(""));
        panelButton_g->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_g);

        panelButton_h = new QPushButton(layoutWidget1);
        panelButton_h->setObjectName(QString::fromUtf8("panelButton_h"));
        sizePolicy.setHeightForWidth(panelButton_h->sizePolicy().hasHeightForWidth());
        panelButton_h->setSizePolicy(sizePolicy);
        panelButton_h->setMinimumSize(QSize(45, 40));
        panelButton_h->setFocusPolicy(Qt::NoFocus);
        panelButton_h->setStyleSheet(QString::fromUtf8(""));
        panelButton_h->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_h);

        panelButton_j = new QPushButton(layoutWidget1);
        panelButton_j->setObjectName(QString::fromUtf8("panelButton_j"));
        sizePolicy.setHeightForWidth(panelButton_j->sizePolicy().hasHeightForWidth());
        panelButton_j->setSizePolicy(sizePolicy);
        panelButton_j->setMinimumSize(QSize(45, 40));
        panelButton_j->setFocusPolicy(Qt::NoFocus);
        panelButton_j->setStyleSheet(QString::fromUtf8(""));
        panelButton_j->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_j);

        panelButton_k = new QPushButton(layoutWidget1);
        panelButton_k->setObjectName(QString::fromUtf8("panelButton_k"));
        sizePolicy.setHeightForWidth(panelButton_k->sizePolicy().hasHeightForWidth());
        panelButton_k->setSizePolicy(sizePolicy);
        panelButton_k->setMinimumSize(QSize(45, 40));
        panelButton_k->setFocusPolicy(Qt::NoFocus);
        panelButton_k->setStyleSheet(QString::fromUtf8(""));
        panelButton_k->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_2->addWidget(panelButton_k);

        panelButton_l = new QPushButton(layoutWidget1);
        panelButton_l->setObjectName(QString::fromUtf8("panelButton_l"));
        sizePolicy.setHeightForWidth(panelButton_l->sizePolicy().hasHeightForWidth());
        panelButton_l->setSizePolicy(sizePolicy);
        panelButton_l->setMinimumSize(QSize(45, 40));
        panelButton_l->setFocusPolicy(Qt::NoFocus);
        panelButton_l->setStyleSheet(QString::fromUtf8(""));
        panelButton_l->setProperty("buttonValue", QVariant(QChar(56)));

        horizontalLayout_2->addWidget(panelButton_l);

        layoutWidget2 = new QWidget(MyInputPanelForm);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(180, 150, 501, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        panelButton_z = new QPushButton(layoutWidget2);
        panelButton_z->setObjectName(QString::fromUtf8("panelButton_z"));
        sizePolicy.setHeightForWidth(panelButton_z->sizePolicy().hasHeightForWidth());
        panelButton_z->setSizePolicy(sizePolicy);
        panelButton_z->setMinimumSize(QSize(45, 40));
        panelButton_z->setFocusPolicy(Qt::NoFocus);
        panelButton_z->setStyleSheet(QString::fromUtf8(""));
        panelButton_z->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_z);

        panelButton_x = new QPushButton(layoutWidget2);
        panelButton_x->setObjectName(QString::fromUtf8("panelButton_x"));
        sizePolicy.setHeightForWidth(panelButton_x->sizePolicy().hasHeightForWidth());
        panelButton_x->setSizePolicy(sizePolicy);
        panelButton_x->setMinimumSize(QSize(45, 40));
        panelButton_x->setFocusPolicy(Qt::NoFocus);
        panelButton_x->setStyleSheet(QString::fromUtf8(""));
        panelButton_x->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_x);

        panelButton_c = new QPushButton(layoutWidget2);
        panelButton_c->setObjectName(QString::fromUtf8("panelButton_c"));
        sizePolicy.setHeightForWidth(panelButton_c->sizePolicy().hasHeightForWidth());
        panelButton_c->setSizePolicy(sizePolicy);
        panelButton_c->setMinimumSize(QSize(45, 40));
        panelButton_c->setFocusPolicy(Qt::NoFocus);
        panelButton_c->setStyleSheet(QString::fromUtf8(""));
        panelButton_c->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_c);

        panelButton_v = new QPushButton(layoutWidget2);
        panelButton_v->setObjectName(QString::fromUtf8("panelButton_v"));
        sizePolicy.setHeightForWidth(panelButton_v->sizePolicy().hasHeightForWidth());
        panelButton_v->setSizePolicy(sizePolicy);
        panelButton_v->setMinimumSize(QSize(45, 40));
        panelButton_v->setFocusPolicy(Qt::NoFocus);
        panelButton_v->setStyleSheet(QString::fromUtf8(""));
        panelButton_v->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_v);

        panelButton_b = new QPushButton(layoutWidget2);
        panelButton_b->setObjectName(QString::fromUtf8("panelButton_b"));
        sizePolicy.setHeightForWidth(panelButton_b->sizePolicy().hasHeightForWidth());
        panelButton_b->setSizePolicy(sizePolicy);
        panelButton_b->setMinimumSize(QSize(45, 40));
        panelButton_b->setFocusPolicy(Qt::NoFocus);
        panelButton_b->setStyleSheet(QString::fromUtf8(""));
        panelButton_b->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_b);

        panelButton_n = new QPushButton(layoutWidget2);
        panelButton_n->setObjectName(QString::fromUtf8("panelButton_n"));
        sizePolicy.setHeightForWidth(panelButton_n->sizePolicy().hasHeightForWidth());
        panelButton_n->setSizePolicy(sizePolicy);
        panelButton_n->setMinimumSize(QSize(45, 40));
        panelButton_n->setFocusPolicy(Qt::NoFocus);
        panelButton_n->setStyleSheet(QString::fromUtf8(""));
        panelButton_n->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_n);

        panelButton_m = new QPushButton(layoutWidget2);
        panelButton_m->setObjectName(QString::fromUtf8("panelButton_m"));
        sizePolicy.setHeightForWidth(panelButton_m->sizePolicy().hasHeightForWidth());
        panelButton_m->setSizePolicy(sizePolicy);
        panelButton_m->setMinimumSize(QSize(45, 40));
        panelButton_m->setFocusPolicy(Qt::NoFocus);
        panelButton_m->setStyleSheet(QString::fromUtf8(""));
        panelButton_m->setProperty("buttonValue", QVariant(QChar(35)));

        horizontalLayout_3->addWidget(panelButton_m);

        panelButton_backspace = new QPushButton(MyInputPanelForm);
        panelButton_backspace->setObjectName(QString::fromUtf8("panelButton_backspace"));
        panelButton_backspace->setGeometry(QRect(740, 100, 51, 40));
        sizePolicy.setHeightForWidth(panelButton_backspace->sizePolicy().hasHeightForWidth());
        panelButton_backspace->setSizePolicy(sizePolicy);
        panelButton_backspace->setMinimumSize(QSize(45, 40));
        panelButton_backspace->setFocusPolicy(Qt::NoFocus);
        panelButton_backspace->setStyleSheet(QString::fromUtf8(""));
        panelButton_backspace->setProperty("buttonValue", QVariant(QChar(35)));
        lineEdit_pingyin = new QLineEdit(MyInputPanelForm);
        lineEdit_pingyin->setObjectName(QString::fromUtf8("lineEdit_pingyin"));
        lineEdit_pingyin->setEnabled(true);
        lineEdit_pingyin->setGeometry(QRect(360, 320, 70, 35));
        lineEdit_pingyin->setMinimumSize(QSize(0, 20));
        lineEdit_pingyin->setMaximumSize(QSize(70, 35));
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        enterButton->raise();
        panelButton_CAPS->raise();
        panelButton_Chinese->raise();
        panelButton_blank->raise();
        frame_Cn->raise();
        frame_Number->raise();
        panelButton_backspace->raise();
        lineEdit_pingyin->raise();

        retranslateUi(MyInputPanelForm);

        QMetaObject::connectSlotsByName(MyInputPanelForm);
    } // setupUi

    void retranslateUi(QWidget *MyInputPanelForm)
    {
        MyInputPanelForm->setWindowTitle(QApplication::translate("MyInputPanelForm", "Input Panel", 0, QApplication::UnicodeUTF8));
        enterButton->setText(QApplication::translate("MyInputPanelForm", "Enter", 0, QApplication::UnicodeUTF8));
        panelButton_CAPS->setText(QApplication::translate("MyInputPanelForm", "CAPS", 0, QApplication::UnicodeUTF8));
        panelButton_Chinese->setText(QApplication::translate("MyInputPanelForm", "EN", 0, QApplication::UnicodeUTF8));
        panelButton_blank->setText(QString());
        listUp->setText(QApplication::translate("MyInputPanelForm", "<", 0, QApplication::UnicodeUTF8));
        font_1->setText(QString());
        font_2->setText(QString());
        font_3->setText(QString());
        font_4->setText(QString());
        font_5->setText(QString());
        font_6->setText(QString());
        font_7->setText(QString());
        font_8->setText(QString());
        listDown->setText(QApplication::translate("MyInputPanelForm", ">", 0, QApplication::UnicodeUTF8));
        panelButton_1->setText(QApplication::translate("MyInputPanelForm", "1", 0, QApplication::UnicodeUTF8));
        panelButton_2->setText(QApplication::translate("MyInputPanelForm", "2", 0, QApplication::UnicodeUTF8));
        panelButton_3->setText(QApplication::translate("MyInputPanelForm", "3", 0, QApplication::UnicodeUTF8));
        panelButton_4->setText(QApplication::translate("MyInputPanelForm", "4", 0, QApplication::UnicodeUTF8));
        panelButton_5->setText(QApplication::translate("MyInputPanelForm", "5", 0, QApplication::UnicodeUTF8));
        panelButton_6->setText(QApplication::translate("MyInputPanelForm", "6", 0, QApplication::UnicodeUTF8));
        panelButton_7->setText(QApplication::translate("MyInputPanelForm", "7", 0, QApplication::UnicodeUTF8));
        panelButton_8->setText(QApplication::translate("MyInputPanelForm", "8", 0, QApplication::UnicodeUTF8));
        panelButton_9->setText(QApplication::translate("MyInputPanelForm", "9", 0, QApplication::UnicodeUTF8));
        panelButton_0->setText(QApplication::translate("MyInputPanelForm", "0", 0, QApplication::UnicodeUTF8));
        panelButton_Decimal->setText(QApplication::translate("MyInputPanelForm", ".", 0, QApplication::UnicodeUTF8));
        panelButton_q->setText(QApplication::translate("MyInputPanelForm", "q", 0, QApplication::UnicodeUTF8));
        panelButton_w->setText(QApplication::translate("MyInputPanelForm", "w", 0, QApplication::UnicodeUTF8));
        panelButton_e->setText(QApplication::translate("MyInputPanelForm", "e", 0, QApplication::UnicodeUTF8));
        panelButton_r->setText(QApplication::translate("MyInputPanelForm", "r", 0, QApplication::UnicodeUTF8));
        panelButton_t->setText(QApplication::translate("MyInputPanelForm", "t", 0, QApplication::UnicodeUTF8));
        panelButton_y->setText(QApplication::translate("MyInputPanelForm", "y", 0, QApplication::UnicodeUTF8));
        panelButton_u->setText(QApplication::translate("MyInputPanelForm", "u", 0, QApplication::UnicodeUTF8));
        panelButton_i->setText(QApplication::translate("MyInputPanelForm", "i", 0, QApplication::UnicodeUTF8));
        panelButton_o->setText(QApplication::translate("MyInputPanelForm", "o", 0, QApplication::UnicodeUTF8));
        panelButton_p->setText(QApplication::translate("MyInputPanelForm", "p", 0, QApplication::UnicodeUTF8));
        panelButton_a->setText(QApplication::translate("MyInputPanelForm", "a", 0, QApplication::UnicodeUTF8));
        panelButton_s->setText(QApplication::translate("MyInputPanelForm", "s", 0, QApplication::UnicodeUTF8));
        panelButton_d->setText(QApplication::translate("MyInputPanelForm", "d", 0, QApplication::UnicodeUTF8));
        panelButton_f->setText(QApplication::translate("MyInputPanelForm", "f", 0, QApplication::UnicodeUTF8));
        panelButton_g->setText(QApplication::translate("MyInputPanelForm", "g", 0, QApplication::UnicodeUTF8));
        panelButton_h->setText(QApplication::translate("MyInputPanelForm", "h", 0, QApplication::UnicodeUTF8));
        panelButton_j->setText(QApplication::translate("MyInputPanelForm", "j", 0, QApplication::UnicodeUTF8));
        panelButton_k->setText(QApplication::translate("MyInputPanelForm", "k", 0, QApplication::UnicodeUTF8));
        panelButton_l->setText(QApplication::translate("MyInputPanelForm", "l", 0, QApplication::UnicodeUTF8));
        panelButton_z->setText(QApplication::translate("MyInputPanelForm", "z", 0, QApplication::UnicodeUTF8));
        panelButton_x->setText(QApplication::translate("MyInputPanelForm", "x", 0, QApplication::UnicodeUTF8));
        panelButton_c->setText(QApplication::translate("MyInputPanelForm", "c", 0, QApplication::UnicodeUTF8));
        panelButton_v->setText(QApplication::translate("MyInputPanelForm", "v", 0, QApplication::UnicodeUTF8));
        panelButton_b->setText(QApplication::translate("MyInputPanelForm", "b", 0, QApplication::UnicodeUTF8));
        panelButton_n->setText(QApplication::translate("MyInputPanelForm", "n", 0, QApplication::UnicodeUTF8));
        panelButton_m->setText(QApplication::translate("MyInputPanelForm", "m", 0, QApplication::UnicodeUTF8));
        panelButton_backspace->setText(QApplication::translate("MyInputPanelForm", "<\342\200\224", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MyInputPanelForm: public Ui_MyInputPanelForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYINPUTPANELFORM_H
