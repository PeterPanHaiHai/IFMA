/****************************************************************************
** Meta object code from reading C++ file 'myinputpanel.h'
**
** Created: Wed Jan 6 19:13:22 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/myinputpanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myinputpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyInputPanel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   51,   13,   13, 0x08,
     105,  103,   13,   13, 0x08,
     129,   13,   13,   13, 0x08,
     141,   13,   13,   13, 0x08,
     153,   13,   13,   13, 0x08,
     164,   13,   13,   13, 0x08,
     186,   13,   13,   13, 0x08,
     200,   13,   13,   13, 0x08,
     223,   13,   13,   13, 0x08,
     245,   13,   13,   13, 0x08,
     267,   13,   13,   13, 0x08,
     289,   13,   13,   13, 0x08,
     311,   13,   13,   13, 0x08,
     333,   13,   13,   13, 0x08,
     355,   13,   13,   13, 0x08,
     377,   13,   13,   13, 0x08,
     399,   13,   13,   13, 0x08,
     408,   13,   13,   13, 0x08,
     419,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyInputPanel[] = {
    "MyInputPanel\0\0character\0"
    "characterGenerated(QChar*)\0oldFocus,newFocs\0"
    "saveFocusWidget(QWidget*,QWidget*)\0w\0"
    "buttonClicked(QWidget*)\0ShowInput()\0"
    "backSpace()\0CapsShow()\0InputChinese(QString)\0"
    "showPage(int)\0chineseEbglishSwitch()\0"
    "chineseSelectFont_1()\0chineseSelectFont_2()\0"
    "chineseSelectFont_3()\0chineseSelectFont_4()\0"
    "chineseSelectFont_5()\0chineseSelectFont_6()\0"
    "chineseSelectFont_7()\0chineseSelectFont_8()\0"
    "pageUp()\0pageDown()\0reloadChinese(QString)\0"
};

const QMetaObject MyInputPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MyInputPanel,
      qt_meta_data_MyInputPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyInputPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyInputPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyInputPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyInputPanel))
        return static_cast<void*>(const_cast< MyInputPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int MyInputPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: characterGenerated((*reinterpret_cast< QChar*(*)>(_a[1]))); break;
        case 1: saveFocusWidget((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: buttonClicked((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: ShowInput(); break;
        case 4: backSpace(); break;
        case 5: CapsShow(); break;
        case 6: InputChinese((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: showPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: chineseEbglishSwitch(); break;
        case 9: chineseSelectFont_1(); break;
        case 10: chineseSelectFont_2(); break;
        case 11: chineseSelectFont_3(); break;
        case 12: chineseSelectFont_4(); break;
        case 13: chineseSelectFont_5(); break;
        case 14: chineseSelectFont_6(); break;
        case 15: chineseSelectFont_7(); break;
        case 16: chineseSelectFont_8(); break;
        case 17: pageUp(); break;
        case 18: pageDown(); break;
        case 19: reloadChinese((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MyInputPanel::characterGenerated(QChar * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
