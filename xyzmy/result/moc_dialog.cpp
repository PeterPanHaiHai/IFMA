/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Wed Jan 6 19:13:14 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,
      35,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,    7,    7,    7, 0x08,
      60,    7,    7,    7, 0x08,
      71,    7,    7,    7, 0x08,
      81,    7,    7,    7, 0x08,
     105,  103,    7,    7, 0x08,
     130,    7,    7,    7, 0x08,
     143,    7,    7,    7, 0x08,
     151,    7,    7,    7, 0x08,
     160,    7,    7,    7, 0x08,
     186,    7,    7,    7, 0x08,
     205,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0\0ReceiveCommand(QByteArray)\0"
    "ClearArray()\0showCheck()\0showTest()\0"
    "showSet()\0showBackupandDelete()\0e\0"
    "timerEvent(QTimerEvent*)\0showoption()\0"
    "close()\0logout()\0handleCommand(QByteArray)\0"
    "handleClearArray()\0handleReadyRead()\0"
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ReceiveCommand((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: ClearArray(); break;
        case 2: showCheck(); break;
        case 3: showTest(); break;
        case 4: showSet(); break;
        case 5: showBackupandDelete(); break;
        case 6: timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 7: showoption(); break;
        case 8: close(); break;
        case 9: logout(); break;
        case 10: handleCommand((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: handleClearArray(); break;
        case 12: handleReadyRead(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Dialog::ReceiveCommand(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dialog::ClearArray()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
