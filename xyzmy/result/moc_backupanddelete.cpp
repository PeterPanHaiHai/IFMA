/****************************************************************************
** Meta object code from reading C++ file 'backupanddelete.h'
**
** Created: Wed Jan 6 19:13:31 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/backupanddelete.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backupanddelete.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BackUpandDelete[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   17,   16, 0x08,
      40,   16,   16,   16, 0x08,
      53,   16,   16,   16, 0x08,
      66,   16,   16,   16, 0x08,
      75,   16,   16,   16, 0x08,
      88,   16,   16,   16, 0x08,
     103,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BackUpandDelete[] = {
    "BackUpandDelete\0\0bool\0BackUPandDelete()\0"
    "DeleteData()\0BackUpData()\0LogOut()\0"
    "unlinkdata()\0ReallyBackup()\0home()\0"
};

const QMetaObject BackUpandDelete::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BackUpandDelete,
      qt_meta_data_BackUpandDelete, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BackUpandDelete::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BackUpandDelete::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BackUpandDelete::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BackUpandDelete))
        return static_cast<void*>(const_cast< BackUpandDelete*>(this));
    return QDialog::qt_metacast(_clname);
}

int BackUpandDelete::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = BackUPandDelete();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: DeleteData(); break;
        case 2: BackUpData(); break;
        case 3: LogOut(); break;
        case 4: unlinkdata(); break;
        case 5: ReallyBackup(); break;
        case 6: home(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
