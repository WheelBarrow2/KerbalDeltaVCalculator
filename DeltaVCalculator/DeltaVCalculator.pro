#-------------------------------------------------
#
# Project created by QtCreator 2016-03-06T11:31:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DeltaVCalculator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    deltavobject.cpp

HEADERS  += mainwindow.h \
    deltavobject.h

FORMS    += mainwindow.ui

DISTFILES += \
    deltavcalculator.rc

RC_FILE = deltavcalculator.rc

ICON = deltavcalculator.icns
