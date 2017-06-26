#-------------------------------------------------
#
# Project created by QtCreator 2017-06-07T21:22:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjectTwo
TEMPLATE = app


SOURCES += main.cpp\
    enemy.cpp \
    control.cpp \
    game.cpp \
    health.cpp \
    teacher.cpp \
    pictures.cpp \
    mainwindow.cpp

HEADERS  += \
    enemy.h \
    control.h \
    game.h \
    health.h \
    teacher.h \
    pictures.h \
    mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc
