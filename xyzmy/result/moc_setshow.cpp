/****************************************************************************
** Meta object code from reading C++ file 'setshow.h'
**
** Created: Tue Dec 29 16:06:48 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/setshow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SetShow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      16,    8,    8,    8, 0x08,
      28,    8,    8,    8, 0x08,
      44,    8,    8,    8, 0x08,
      58,    8,    8,    8, 0x08,
      76,    8,    8,    8, 0x08,
      93,    8,    8,    8, 0x08,
     107,    8,    8,    8, 0x08,
     126,    8,    8,    8, 0x08,
     139,    8,    8,    8, 0x08,
     161,    8,    8,    8, 0x08,
     174,    8,    8,    8, 0x08,
     191,    8,    8,    8, 0x08,
     206,    8,    8,    8, 0x08,
     223,    8,    8,    8, 0x08,
     239,    8,    8,    8, 0x08,
     258,    8,    8,    8, 0x08,
     277,    8,    8,    8, 0x08,
     291,    8,    8,    8, 0x08,
     329,  315,    8,    8, 0x08,
     356,    8,    8,    8, 0x08,
     365,    8,    8,    8, 0x08,
     377,    8,    8,    8, 0x08,
     400,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetShow[] = {
    "SetShow\0\0home()\0show_exit()\0superBehavior()\0"
    "showTimeSet()\0initShowProject()\0"
    "SetMachineTime()\0TimeSetHide()\0"
    "addProjectRecord()\0realAddPro()\0"
    "deleteProjectRecord()\0realDelPro()\0"
    "quitSetProject()\0initShowUser()\0"
    "Choose_Add_Del()\0addUserRecord()\0"
    "deleteUserRecord()\0ChangeUserRecord()\0"
    "quitSetUser()\0addUserrecordCommobox()\0"
    "Firstusername\0serachRealtimepwd(QString)\0"
    "logout()\0calibrate()\0touchscreenCalibrate()\0"
    "realCalibrate()\0"
};

const QMetaObject SetShow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetShow,
      qt_meta_data_SetShow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SetShow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SetShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SetShow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetShow))
        return static_cast<void*>(const_cast< SetShow*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: home(); break;
        case 1: show_exit(); break;
        case 2: superBehavior(); break;
        case 3: showTimeSet(); break;
        case 4: initShowProject(); break;
        case 5: SetMachineTime(); break;
        case 6: TimeSetHide(); break;
        case 7: addProjectRecord(); break;
        case 8: realAddPro(); break;
        case 9: deleteProjectRecord(); break;
        case 10: realDelPro(); break;
        case 11: quitSetProject(); break;
        case 12: initShowUser(); break;
        case 13: Choose_Add_Del(); break;
        case 14: addUserRecord(); break;
        case 15: deleteUserRecord(); break;
        case 16: ChangeUserRecord(); break;
        case 17: quitSetUser(); break;
        case 18: addUserrecordCommobox(); break;
        case 19: serachRealtimepwd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: logout(); break;
        case 21: calibrate(); break;
        case 22: touchscreenCalibrate(); break;
        case 23: realCalibrate(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
