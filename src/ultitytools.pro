#-------------------------------------------------
#
# Project created by QtCreator 2020-05-29T14:41:28
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ultitytools
TEMPLATE = app


SOURCES += main.cpp\
    SerialPort.cpp \
    ultitytools.cpp

HEADERS  += ultitytools.h \
    SerialPort.h \


FORMS    += ultitytools.ui \

