/****************************************************************************
** Meta object code from reading C++ file 'checkshow.h'
**
** Created: Wed Jan 6 19:13:18 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../working/checkshow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckShow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      25,   10,   10,   10, 0x05,
      45,   10,   10,   10, 0x05,
      68,   10,   10,   10, 0x05,
      93,   10,   10,   10, 0x05,
     112,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     131,   10,   10,   10, 0x08,
     143,   10,   10,   10, 0x08,
     156,   10,   10,   10, 0x08,
     168,   10,   10,   10, 0x08,
     185,   10,   10,   10, 0x08,
     220,  212,  206,   10, 0x08,
     243,  237,   10,   10, 0x08,
     268,   10,   10,   10, 0x08,
     288,   10,   10,   10, 0x08,
     313,   10,   10,   10, 0x08,
     326,   10,   10,   10, 0x08,
     349,  343,   10,   10, 0x08,
     371,   10,   10,   10, 0x08,
     387,  343,   10,   10, 0x08,
     412,   10,  408,   10, 0x08,
     432,   10,   10,   10, 0x08,
     448,   10,   10,   10, 0x08,
     466,   10,   10,   10, 0x08,
     490,  483,   10,   10, 0x08,
     525,   10,   10,   10, 0x08,
     562,  546,   10,   10, 0x08,
     587,   10,  408,   10, 0x08,
     609,   10,  206,   10, 0x08,
     624,   10,  206,   10, 0x08,
     641,   10,   10,   10, 0x08,
     656,   10,   10,   10, 0x08,
     676,   10,   10,   10, 0x08,
     685,   10,   10,   10, 0x08,
     705,  703,  698,   10, 0x08,
     730,   10,   10,   10, 0x0a,
     752,   10,   10,   10, 0x0a,
     768,   10,   10,   10, 0x0a,
     775,   10,  206,   10, 0x0a,
     791,   10,   10,   10, 0x0a,
     812,  806,   10,   10, 0x0a,
     844,   10,   10,   10, 0x0a,
     876,  866,   10,   10, 0x0a,
     939,   10,   10,   10, 0x0a,
     964,   10,   10,   10, 0x0a,
     991,  986,   10,   10, 0x0a,
    1017,   10,   10,   10, 0x0a,
    1072, 1041,  698,   10, 0x0a,
    1113,   10,   10,   10, 0x0a,
    1137,   10, 1130,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CheckShow[] = {
    "CheckShow\0\0begintodraw()\0CheckShowFinished()\0"
    "finishedDataReceived()\0RepeattestValue(QString)\0"
    "currentSelfCheck()\0Steppernotmoving()\0"
    "smooth(int)\0ResultSave()\0printInfo()\0"
    "initshowStrips()\0drawpoint(QPainter*)\0"
    "float\0i,count\0average(int,int)\0event\0"
    "paintEvent(QPaintEvent*)\0drawaxis(QPainter*)\0"
    "drawfinalshow(QPainter*)\0OptionShow()\0"
    "Step_in_or_out()\0paint\0drawCurves(QPainter*)\0"
    "ShowCountDown()\0drawBlack(QPainter*)\0"
    "int\0CheckStatusBefore()\0finished_Test()\0"
    "BeginRepeatTest()\0showAverage(int)\0"
    "paint,\0FinihedTestDraw(QPainter*,double*)\0"
    "SaveFileToSD(float*)\0ConsistencyName\0"
    "SaveConsistency(QString)\0automaticallyScales()\0"
    "correct(float)\0correct_3(float)\0"
    "sendFinished()\0ReadCalibrateFile()\0"
    "LogOut()\0Pro_change()\0bool\0,\0"
    "whetherNegative(int,int)\0acitveButton(QString)\0"
    "set_linear_in()\0home()\0gettheaverage()\0"
    "deleteCurves()\0AC,AT\0"
    "exceptionjudgement(float,float)\0"
    "onTestButtonOnClick()\0,,,,,,,,,\0"
    "onTestOkButtonOnClick(int,int,int,int,int,int,int,int,int,int)\0"
    "onChangeAppButtonClick()\0onSaveButtonOnClick()\0"
    "path\0removefilesindir(QString)\0"
    "onDeleteButtonOnClick()\0"
    "fromDir,toDir,coverFileIfExist\0"
    "copyDirectoryFiles(QString,QString,bool)\0"
    "onTestCountSet()\0qint64\0dirSize(QString)\0"
};

const QMetaObject CheckShow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CheckShow,
      qt_meta_data_CheckShow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckShow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckShow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckShow))
        return static_cast<void*>(const_cast< CheckShow*>(this));
    return QDialog::qt_metacast(_clname);
}

int CheckShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: begintodraw(); break;
        case 1: CheckShowFinished(); break;
        case 2: finishedDataReceived(); break;
        case 3: RepeattestValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: currentSelfCheck(); break;
        case 5: Steppernotmoving(); break;
        case 6: smooth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: ResultSave(); break;
        case 8: printInfo(); break;
        case 9: initshowStrips(); break;
        case 10: drawpoint((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 11: { float _r = average((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 12: paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 13: drawaxis((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 14: drawfinalshow((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 15: OptionShow(); break;
        case 16: Step_in_or_out(); break;
        case 17: drawCurves((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 18: ShowCountDown(); break;
        case 19: drawBlack((*reinterpret_cast< QPainter*(*)>(_a[1]))); break;
        case 20: { int _r = CheckStatusBefore();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 21: finished_Test(); break;
        case 22: BeginRepeatTest(); break;
        case 23: showAverage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: FinihedTestDraw((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2]))); break;
        case 25: SaveFileToSD((*reinterpret_cast< float*(*)>(_a[1]))); break;
        case 26: SaveConsistency((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: { int _r = automaticallyScales();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { float _r = correct((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 29: { float _r = correct_3((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 30: sendFinished(); break;
        case 31: ReadCalibrateFile(); break;
        case 32: LogOut(); break;
        case 33: Pro_change(); break;
        case 34: { bool _r = whetherNegative((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: acitveButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: set_linear_in(); break;
        case 37: home(); break;
        case 38: { float _r = gettheaverage();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 39: deleteCurves(); break;
        case 40: exceptionjudgement((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 41: onTestButtonOnClick(); break;
        case 42: onTestOkButtonOnClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 43: onChangeAppButtonClick(); break;
        case 44: onSaveButtonOnClick(); break;
        case 45: removefilesindir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: onDeleteButtonOnClick(); break;
        case 47: { bool _r = copyDirectoryFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: onTestCountSet(); break;
        case 49: { qint64 _r = dirSize((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void CheckShow::begintodraw()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CheckShow::CheckShowFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CheckShow::finishedDataReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CheckShow::RepeattestValue(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CheckShow::currentSelfCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void CheckShow::Steppernotmoving()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
