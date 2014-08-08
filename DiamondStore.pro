TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    product.cpp \
    audiotrack.cpp \
    musiccd.cpp \
    gamecd.cpp \
    album.cpp

HEADERS += \
    product.h \
    audiotrack.h \
    musiccd.h \
    gamecd.h \
    album.h

