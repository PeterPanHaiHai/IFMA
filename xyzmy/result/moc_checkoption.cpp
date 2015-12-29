/****************************************************************************
** Meta object code from reading C++ file 'checkoption.h'
**
** Created: Tue Dec 29 16:06:52 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/checkoption.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkoption.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckOption[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      30,   12,   12,   12, 0x05,
      51,   12,   12,   12, 0x05,
      61,   12,   12,   12, 0x05,
      73,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   12,   12,   12, 0x08,
     114,   12,   12,   12, 0x08,
     130,   12,   12,   12, 0x08,
     148,   12,   12,   12, 0x08,
     165,   12,  161,   12, 0x08,
     170,   12,   12,   12, 0x08,
     185,   12,   12,   12, 0x0a,
     192,   12,   12,   12, 0x0a,
     214,   12,   12,   12, 0x0a,
     227,   12,   12,   12, 0x0a,
     239,   12,   12,   12, 0x0a,
     258,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CheckOption[] = {
    "CheckOption\0\0Pressed_ok(bool)\0"
    "Pressed_cancel(bool)\0active2()\0"
    "linear_in()\0shouldupdate()\0"
    "deleteandBackupfunction()\0SwitchToinput()\0"
    "removeDirectory()\0BackUpData()\0int\0"
    "OK()\0CancelOption()\0home()\0"
    "acitveButton(QString)\0ResultSave()\0"
    "printInfo()\0OptionResultShow()\0"
    "initiatemove()\0"
};

const QMetaObject CheckOption::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CheckOption,
      qt_meta_data_CheckOption, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckOption::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckOption::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckOption))
        return static_cast<void*>(const_cast< CheckOption*>(this));
    return QDialog::qt_metacast(_clname);
}

int CheckOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Pressed_ok((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: Pressed_cancel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: active2(); break;
        case 3: linear_in(); break;
        case 4: shouldupdate(); break;
        case 5: deleteandBackupfunction(); break;
        case 6: SwitchToinput(); break;
        case 7: removeDirectory(); break;
        case 8: BackUpData(); break;
        case 9: { int _r = OK();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: CancelOption(); break;
        case 11: home(); break;
        case 12: acitveButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: ResultSave(); break;
        case 14: printInfo(); break;
        case 15: OptionResultShow(); break;
        case 16: initiatemove(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void CheckOption::Pressed_ok(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CheckOption::Pressed_cancel(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CheckOption::active2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CheckOption::linear_in()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CheckOption::shouldupdate()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
