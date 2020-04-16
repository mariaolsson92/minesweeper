/****************************************************************************
** Meta object code from reading C++ file 'Gameboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Gameboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Gameboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gameboard_t {
    QByteArrayData data[15];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gameboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gameboard_t qt_meta_stringdata_Gameboard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Gameboard"
QT_MOC_LITERAL(1, 10, 13), // "escapePressed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "Gameboard*"
QT_MOC_LITERAL(4, 36, 9), // "gameboard"
QT_MOC_LITERAL(5, 46, 11), // "restartGame"
QT_MOC_LITERAL(6, 58, 6), // "size_t"
QT_MOC_LITERAL(7, 65, 4), // "rows"
QT_MOC_LITERAL(8, 70, 7), // "columns"
QT_MOC_LITERAL(9, 78, 9), // "mineCount"
QT_MOC_LITERAL(10, 88, 15), // "dontRestartGame"
QT_MOC_LITERAL(11, 104, 21), // "handleLeftButtonClick"
QT_MOC_LITERAL(12, 126, 6), // "yCoord"
QT_MOC_LITERAL(13, 133, 6), // "xCoord"
QT_MOC_LITERAL(14, 140, 22) // "handleRightButtonClick"

    },
    "Gameboard\0escapePressed\0\0Gameboard*\0"
    "gameboard\0restartGame\0size_t\0rows\0"
    "columns\0mineCount\0dontRestartGame\0"
    "handleLeftButtonClick\0yCoord\0xCoord\0"
    "handleRightButtonClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gameboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    4,   42,    2, 0x06 /* Public */,
      10,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   54,    2, 0x0a /* Public */,
      14,    2,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    4,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,   12,   13,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,   12,   13,

       0        // eod
};

void Gameboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Gameboard *_t = static_cast<Gameboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->escapePressed((*reinterpret_cast< Gameboard*(*)>(_a[1]))); break;
        case 1: _t->restartGame((*reinterpret_cast< Gameboard*(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2])),(*reinterpret_cast< size_t(*)>(_a[3])),(*reinterpret_cast< size_t(*)>(_a[4]))); break;
        case 2: _t->dontRestartGame((*reinterpret_cast< Gameboard*(*)>(_a[1]))); break;
        case 3: _t->handleLeftButtonClick((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 4: _t->handleRightButtonClick((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Gameboard* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Gameboard* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Gameboard* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Gameboard::*_t)(Gameboard * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gameboard::escapePressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Gameboard::*_t)(Gameboard * , size_t , size_t , size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gameboard::restartGame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Gameboard::*_t)(Gameboard * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gameboard::dontRestartGame)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Gameboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gameboard.data,
      qt_meta_data_Gameboard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Gameboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gameboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gameboard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gameboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Gameboard::escapePressed(Gameboard * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gameboard::restartGame(Gameboard * _t1, size_t _t2, size_t _t3, size_t _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gameboard::dontRestartGame(Gameboard * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
