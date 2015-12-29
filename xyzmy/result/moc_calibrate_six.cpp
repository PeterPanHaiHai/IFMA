/****************************************************************************
** Meta object code from reading C++ file 'calibrate_six.h'
**
** Created: Tue Dec 29 16:06:57 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/calibrate_six.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibrate_six.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Calibrate_Six[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   14,   14,   14, 0x08,
      57,   14,   14,   14, 0x08,
      79,   14,   14,   14, 0x08,
      90,   14,   14,   14, 0x08,
     104,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Calibrate_Six[] = {
    "Calibrate_Six\0\0calibrateFinished()\0"
    "saveCalibrateResult()\0showfinished(QString)\0"
    "quitshow()\0disabledOut()\0weatherSavefile()\0"
};

const QMetaObject Calibrate_Six::staticMetaObject = {
    { &CheckShow::staticMetaObject, qt_meta_stringdata_Calibrate_Six,
      qt_meta_data_Calibrate_Six, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Calibrate_Six::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Calibrate_Six::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Calibrate_Six::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Calibrate_Six))
        return static_cast<void*>(const_cast< Calibrate_Six*>(this));
    return CheckShow::qt_metacast(_clname);
}

int Calibrate_Six::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CheckShow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: calibrateFinished(); break;
        case 1: saveCalibrateResult(); break;
        case 2: showfinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: quitshow(); break;
        case 4: disabledOut(); break;
        case 5: weatherSavefile(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Calibrate_Six::calibrateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
