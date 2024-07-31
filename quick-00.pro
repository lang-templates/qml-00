QT += quick

CONFIG += c++17
CONFIG += console

SOURCES += \
        main.cpp \
        piechart.cpp

#resources.files = main.qml MyToolbar.qml
#resources.prefix = /$${TARGET}
#RESOURCES += resources

CONFIG += qmltypes
QML_IMPORT_NAME = Charts
QML_IMPORT_MAJOR_VERSION = 1

HEADERS += \
    piechart.h

RESOURCES += qml.qrc
