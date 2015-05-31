#-------------------------------------------------
#
# Project created by QtCreator 2015-05-30T00:34:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 2048
TEMPLATE = app


SOURCES += main.cpp\
        startwindow.cpp \
    game.cpp \
    result_win.cpp \
    result_lose.cpp

HEADERS  += startwindow.h \
    game.h \
    result_win.h \
    result_lose.h

FORMS    += startwindow.ui \
    game.ui \
    result_win.ui \
    result_lose.ui

RESOURCES += \
    pics.qrc
