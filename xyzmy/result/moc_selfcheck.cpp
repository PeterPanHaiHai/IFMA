/****************************************************************************
** Meta object code from reading C++ file 'selfcheck.h'
**
** Created: Tue Dec 29 16:06:55 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/selfcheck.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selfcheck.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelfCheck[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      24,   10,   10,   10, 0x0a,
      45,   10,   10,   10, 0x0a,
      79,   71,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SelfCheck[] = {
    "SelfCheck\0\0startCheck()\0finished_SelfCheck()\0"
    "SteppernotMovingWarning()\0Version\0"
    "setVersion(QString)\0"
};

const QMetaObject SelfCheck::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelfCheck,
      qt_meta_data_SelfCheck, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelfCheck::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelfCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelfCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelfCheck))
        return static_cast<void*>(const_cast< SelfCheck*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelfCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startCheck(); break;
        case 1: finished_SelfCheck(); break;
        case 2: SteppernotMovingWarning(); break;
        case 3: setVersion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE