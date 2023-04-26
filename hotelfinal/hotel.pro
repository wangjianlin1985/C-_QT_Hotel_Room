#-------------------------------------------------
#
# Project created by QtCreator 2011-10-17T18:17:09
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hotel
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    chgpwd.cpp \
    login.cpp

HEADERS  += mainwindow.h \
    login.h \
    databaseconnection.h \
    chgpwd.h

FORMS    += mainwindow.ui \
    login.ui \
    chgpwd.ui

RESOURCES += \
    qss.qrc








