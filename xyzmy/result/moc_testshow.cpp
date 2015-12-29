/****************************************************************************
** Meta object code from reading C++ file 'testshow.h'
**
** Created: Tue Dec 29 16:06:45 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/testshow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TestShow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      20,    9,    9,    9, 0x08,
      32,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,
      49,    9,    9,    9, 0x08,
      61,    9,    9,    9, 0x08,
      90,   88,    9,    9, 0x08,
     118,    9,    9,    9, 0x08,
     130,    9,    9,    9, 0x08,
     139,    9,    9,    9, 0x08,
     178,  169,  165,    9, 0x08,
     214,  206,    9,    9, 0x08,
     257,  245,    9,    9, 0x08,
     340,  290,  165,    9, 0x08,
     414,  388,  165,    9, 0x08,
     439,    9,    9,    9, 0x08,
     454,    9,    9,    9, 0x08,
     463,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TestShow[] = {
    "TestShow\0\0page_up()\0page_down()\0"
    "page_go()\0home()\0find_info()\0"
    "showResult(QList<QString>)\0,\0"
    "initialize(int,QStringList)\0PrintItem()\0"
    "addtop()\0setPrintTrue(QModelIndex)\0"
    "int\0Seri_dev\0openSerialPort(const char*)\0"
    "fd,data\0miniPrintWriteAscall(int,char)\0"
    "fd,pwchello\0miniPrintWriteUnicode(int,char*)\0"
    "from_charset,to_charset,inbuf,inlen,outbuf,outlen\0"
    "code_convert(char*,char*,char*,uint,char*,uint)\0"
    "inbuf,inlen,outbuf,outlen\0"
    "u2g(char*,int,char*,int)\0view_clicked()\0"
    "logout()\0on_pushButton_clicked()\0"
};

const QMetaObject TestShow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TestShow,
      qt_meta_data_TestShow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TestShow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TestShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TestShow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestShow))
        return static_cast<void*>(const_cast< TestShow*>(this));
    return QDialog::qt_metacast(_clname);
}

int TestShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: page_up(); break;
        case 1: page_down(); break;
        case 2: page_go(); break;
        case 3: home(); break;
        case 4: find_info(); break;
        case 5: showResult((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 6: initialize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 7: PrintItem(); break;
        case 8: addtop(); break;
        case 9: setPrintTrue((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: { int _r = openSerialPort((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: miniPrintWriteAscall((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        case 12: miniPrintWriteUnicode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 13: { int _r = code_convert((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< char*(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { int _r = u2g((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: view_clicked(); break;
        case 16: logout(); break;
        case 17: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
