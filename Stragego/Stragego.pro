#-------------------------------------------------
#
# Project created by QtCreator 2017-10-30T10:23:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Stragego

TEMPLATE = app

macx: LIBS += -L$$PWD/../googletest-master/googlemock/ -lgmock -lgmock_main
macx: LIBS += -L$$PWD/../googletest-master/googlemock/gtest/ -lgtest -lgtest_main
INCLUDEPATH += $$PWD/../googletest-master/googlemock/include
INCLUDEPATH += $$PWD/../googletest-master/googletest/include
DEPENDPATH += $$PWD/../googletest-master/googlemock
DEPENDPATH += $$PWD/../googletest-master/googlemock/gtest
macx: PRE_TARGETDEPS += $$PWD/../googletest-master/googlemock/libgmock.a
macx: PRE_TARGETDEPS += $$PWD/../googletest-master/googlemock/libgmock_main.a
macx: PRE_TARGETDEPS += $$PWD/../googletest-master/googlemock/gtest/libgtest.a
macx: PRE_TARGETDEPS += $$PWD/../googletest-master/googlemock/gtest/libgtest_main.a

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    engine/ruleengine.cpp \
    engine/loaderengine.cpp \
    models/team.cpp \
    test/engine/ruleenginetests.cpp \
    engine/moveengine.cpp \
    test/engine/moveenginetest.cpp

HEADERS += \
        mainwindow.h \
    engine/ruleengine.h \
    engine/loaderengine.h \
    models/team.h \
    structs/piece.h \
    engine/moveengine.h

FORMS += \
        mainwindow.ui
