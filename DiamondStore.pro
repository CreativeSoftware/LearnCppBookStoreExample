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
    album.cpp \
    book.cpp \
    labelcolor.cpp \
    comicbook.cpp

HEADERS += \
    product.h \
    audiotrack.h \
    musiccd.h \
    gamecd.h \
    album.h \
    book.h \
    labelcolor.h \
    comicbook.h

