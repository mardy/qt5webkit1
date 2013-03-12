include(../common-project-config.pri)
include($${TOP_SRC_DIR}/common-vars.pri)
include($${TOP_SRC_DIR}/common-installs-config.pri)

TARGET = tst_plugin

CONFIG += \
    debug

QT += \
    qml \
    testlib

SOURCES += \
    tst_plugin.cpp

INCLUDEPATH += \
    $$TOP_SRC_DIR/src

check.commands = "xvfb-run -a ./$${TARGET}"
check.depends = $${TARGET}
QMAKE_EXTRA_TARGETS += check
