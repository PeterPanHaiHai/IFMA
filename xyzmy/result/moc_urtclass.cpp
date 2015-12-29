/****************************************************************************
** Meta object code from reading C++ file 'urtclass.h'
**
** Created: Tue Dec 29 16:07:00 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/urtclass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'urtclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UrtClass[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   10,    9,    9, 0x05,
      32,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,    9,    9,    9, 0x0a,
      76,   71,   67,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UrtClass[] = {
    "UrtClass\0\0,\0sendNoti(char*,int)\0"
    "sendID(char*)\0remoteDataIncoming()\0"
    "int\0mode\0DataIn(int)\0"
};

const QMetaObject UrtClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UrtClass,
      qt_meta_data_UrtClass, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UrtClass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UrtClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UrtClass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UrtClass))
        return static_cast<void*>(const_cast< UrtClass*>(this));
    return QObject::qt_metacast(_clname);
}

int UrtClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendNoti((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: sendID((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 2: remoteDataIncoming(); break;
        case 3: { int _r = DataIn((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UrtClass::sendNoti(char * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UrtClass::sendID(char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
