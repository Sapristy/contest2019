#-------------------------------------------------
#
# Project created by QtCreator 2019-11-22T10:28:58
#
#-------------------------------------------------
QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TaskManager
CONFIG += c++17
CONFIG += ordered
TEMPLATE = lib
#CONFIG += dll

#QMAKE_CXXFLAGS += -std=c++1y
CONFIG += plugin

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += TASK_MANAGER \
           QT_DEPRECATED_WARNINGS



# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        taskmanager.cpp \
        taskmanagerplugin.cpp \
        ../../core/interfaces/iplugin.cpp \
        ../../core/interfaces/iplugininterface.cpp \
        core/task.h \
        widgets/taskmanagerwidget.cpp

HEADERS += \
        taskmanager.h \
        taskmanagerexport.h \
        taskmanagerplugin.h \
        ../../core/interfaces/iplugin.h \
        ../../core/interfaces/iplugininterface.h \
        utils/taskmanagerconstants.h \
        core/task.h \
        widgets/taskmanagerwidget.h

DISTFILES += TaskManager.json \

unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
    INSTALLS += target
}

FORMS += \
  widgets/taskmanagerwidget.ui
