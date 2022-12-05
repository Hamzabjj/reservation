#-------------------------------------------------
#
# Project created by Hamza Ben Jemia 2022/2023
#
#-------------------------------------------------

QT       +=  core gui sql network multimedia multimediawidgets charts printsupport widgets axcontainer serialport
TARGET = QT_Project_On_Movie_Ticket_Booking

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    book.cpp \
    cancel.cpp \
    connection.cpp \
    dialog_map.cpp \
    dialog_stats.cpp \
    main.cpp \
    mainwindow.cpp \
    mydb.cpp \
    qcustomplot.cpp \
    reservation.cpp

HEADERS += \
    arduino.h \
    book.h \
    cancel.h \
    connection.h \
    dialog_map.h \
    dialog_stats.h \
    mainwindow.h \
    mydb.h \
    qcustomplot.h \
    reservation.h \
    webaxwidget.h

FORMS += \
    book.ui \
    cancel.ui \
    dialog_map.ui \
    dialog_stats.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    HMIZ.qrc
