/****************************************************************************
** Meta object code from reading C++ file 'connector.h'
**
** Created: Wed Jan 6 19:13:34 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/connector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Connector[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      25,   10,   10,   10, 0x05,
      44,   35,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   10,   10,   10, 0x08,
      81,   10,   10,   10, 0x08,
      98,   10,   10,   10, 0x08,
     110,   35,   10,   10, 0x08,
     141,  131,   10,   10, 0x0a,
     166,   10,   10,   10, 0x0a,
     180,  131,   10,   10, 0x0a,
     203,   10,   10,   10, 0x0a,
     229,  214,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Connector[] = {
    "Connector\0\0readAllData()\0writeOK()\0"
    "readData\0readOK(QByteArray)\0"
    "handleReadyRead()\0handleReadData()\0"
    "onTimeOut()\0onReadOK(QByteArray)\0"
    "start,num\0callForData(qint8,qint8)\0"
    "callForWait()\0startRead(qint8,qint8)\0"
    "stopRead()\0start,num,data\0"
    "startWrite(qint8,qint8,QByteArray)\0"
};

const QMetaObject Connector::staticMetaObject = {
    { &QSerialPort::staticMetaObject, qt_meta_stringdata_Connector,
      qt_meta_data_Connector, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Connector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Connector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Connector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Connector))
        return static_cast<void*>(const_cast< Connector*>(this));
    return QSerialPort::qt_metacast(_clname);
}

int Connector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSerialPort::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: readAllData(); break;
        case 1: writeOK(); break;
        case 2: readOK((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: handleReadyRead(); break;
        case 4: handleReadData(); break;
        case 5: onTimeOut(); break;
        case 6: onReadOK((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: callForData((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 8: callForWait(); break;
        case 9: startRead((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2]))); break;
        case 10: stopRead(); break;
        case 11: startWrite((*reinterpret_cast< qint8(*)>(_a[1])),(*reinterpret_cast< qint8(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Connector::readAllData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Connector::writeOK()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Connector::readOK(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
