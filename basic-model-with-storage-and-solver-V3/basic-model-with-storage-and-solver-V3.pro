QT += quick

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        blockdatasource.cpp \
        blockitem.cpp \
        blockmodel.cpp \
        constant.cpp \
        equation.cpp \
        equationsolver.cpp \
        main.cpp \
        variable.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    blockdatasource.h \
    blockitem.h \
    blockmodel.h \
    constant.h \
    equation.h \
    equationsolver.h \
    variable.h

win32: LIBS += -L$$PWD/../libbuilds/z3/z3-z3-4.8.8-install/lib/ -llibz3

INCLUDEPATH += $$PWD/../libbuilds/z3/z3-z3-4.8.8-install/include
DEPENDPATH += $$PWD/../libbuilds/z3/z3-z3-4.8.8-install/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../libbuilds/z3/z3-z3-4.8.8-install/lib/libz3.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../libbuilds/z3/z3-z3-4.8.8-install/lib/liblibz3.a
