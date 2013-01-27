#-------------------------------------------------
#
# Project created by QtCreator 2013-01-23T16:14:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Lattice
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    spreadsheet.cpp

HEADERS  += mainwindow.h \
    spreadsheet.h \
    latticeUI.h

FORMS    += mainwindow.ui

RESOURCES += \
    lattice.qrc
