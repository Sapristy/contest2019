/****************************************************************************
** Meta object code from reading C++ file 'taskmanagerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/taskmanagerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskmanagerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TaskManagerWidget_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TaskManagerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TaskManagerWidget_t qt_meta_stringdata_TaskManagerWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TaskManagerWidget"
QT_MOC_LITERAL(1, 18, 10), // "createTask"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "taskListHasUpdated"
QT_MOC_LITERAL(4, 49, 17), // "updatePeriodicity"
QT_MOC_LITERAL(5, 67, 13), // "QRadioButton*"
QT_MOC_LITERAL(6, 81, 6), // "button"
QT_MOC_LITERAL(7, 88, 12), // "getTasksList"
QT_MOC_LITERAL(8, 101, 41), // "QList<QSharedPointer<TaskMana..."
QT_MOC_LITERAL(9, 143, 12), // "setTasksList"
QT_MOC_LITERAL(10, 156, 9), // "tasksList"
QT_MOC_LITERAL(11, 166, 31) // "on_createTaskPushButton_clicked"

    },
    "TaskManagerWidget\0createTask\0\0"
    "taskListHasUpdated\0updatePeriodicity\0"
    "QRadioButton*\0button\0getTasksList\0"
    "QList<QSharedPointer<TaskManager::Task> >\0"
    "setTasksList\0tasksList\0"
    "on_createTaskPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TaskManagerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,
       9,    1,   50,    2, 0x0a /* Public */,
      11,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8,   10,
    QMetaType::Void,

       0        // eod
};

void TaskManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskManagerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createTask(); break;
        case 1: _t->taskListHasUpdated(); break;
        case 2: _t->updatePeriodicity((*reinterpret_cast< QRadioButton*(*)>(_a[1]))); break;
        case 3: { QList<QSharedPointer<TaskManager::Task> > _r = _t->getTasksList();
            if (_a[0]) *reinterpret_cast< QList<QSharedPointer<TaskManager::Task> >*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setTasksList((*reinterpret_cast< const QList<QSharedPointer<TaskManager::Task> >(*)>(_a[1]))); break;
        case 5: _t->on_createTaskPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioButton* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSharedPointer<TaskManager::Task> > >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskManagerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskManagerWidget::createTask)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TaskManagerWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskManagerWidget::taskListHasUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TaskManagerWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TaskManagerWidget.data,
    qt_meta_data_TaskManagerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TaskManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TaskManagerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TaskManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TaskManagerWidget::createTask()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TaskManagerWidget::taskListHasUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
