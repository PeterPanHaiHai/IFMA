/****************************************************************************
** Meta object code from reading C++ file 'countdown.h'
**
** Created: Wed Jan 6 19:13:27 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/countdown.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'countdown.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CountDown[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      23,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CountDown[] = {
    "CountDown\0\0insert_ok()\0timeOutOK()\0"
    "send_signals()\0"
};

const QMetaObject CountDown::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CountDown,
      qt_meta_data_CountDown, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CountDown::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CountDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CountDown::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CountDown))
        return static_cast<void*>(const_cast< CountDown*>(this));
    return QDialog::qt_metacast(_clname);
}

int CountDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: insert_ok(); break;
        case 1: timeOutOK(); break;
        case 2: send_signals(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CountDown::insert_ok()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CountDown::timeOutOK()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
