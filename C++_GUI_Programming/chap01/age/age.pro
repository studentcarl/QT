QT += core
QT += gui
QT += widgets
CONFIG += c++11

TARGET = age
CONFIG -= console
CONFIG -= app_bundle

TEMPLATE = app
SOURCES += \
    age.cpp
DEFINES += QT_DEPRECATED_WARNINGS
