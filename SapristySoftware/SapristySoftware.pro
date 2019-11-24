#-------------------------------------------------
#
# Project created by QtCreator 2019-11-21T08:02:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SapristySoftware
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++17

SOURCES += \
        core/interfaces/iplugin.cpp \
        core/interfaces/iplugininterface.cpp \
        core/utils/pluginmanager.cpp \
        main.cpp \
        mainwindow.cpp \

HEADERS += \
        core/interfaces/iplugin.h \
        core/interfaces/iplugininterface.h \
        core/utils/constants.h \
        core/utils/pluginmanager.h \
        mainwindow.h \
        ui_mainwindow.h

FORMS += \
        mainwindow.ui

SUBDIRS = \
        plugins \
        plugins/TaskManager/TaskManager.pro \
        plugins/TaskManager/TaskManager.pro

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
  plugins/TaskManager/TaskManager.json
