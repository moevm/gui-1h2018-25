#-------------------------------------------------
#
# Project created by QtCreator 2018-03-14T02:36:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    table.cpp \
    gameover.cpp

HEADERS  += mainwindow.h \
    table.h \
    gameover.h

FORMS    += mainwindow.ui \
    table.ui \
    gameover.ui

RESOURCES += \
    images.qrc
