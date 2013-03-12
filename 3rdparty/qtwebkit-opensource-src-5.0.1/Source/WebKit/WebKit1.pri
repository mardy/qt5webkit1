# -------------------------------------------------------------------
# This file contains shared rules used both when building WebKit1
# itself, and by targets that use WebKit1.
#
# See 'Tools/qmake/README' for an overview of the build system
# -------------------------------------------------------------------

SOURCE_DIR = $${ROOT_WEBKIT_DIR}/Source/WebKit

equals(QT_ARCH, s390)|equals(QT_ARCH, arm)|equals(QT_ARCH, mips)|equals(QT_ARCH, i386)|equals(QT_ARCH, i686) {
    message("s390, armel, armhf, mipsel, i386 workaround for QtWebkit: do not build with -g, but with -gstabs")
    QMAKE_CXXFLAGS -= -g
    QMAKE_CXXFLAGS += -gstabs
}

INCLUDEPATH += \
    $$SOURCE_DIR/qt/Api \
    $$SOURCE_DIR/qt/WebCoreSupport \
    $$ROOT_WEBKIT_DIR/Source/WTF/wtf/qt

enable?(DEVICE_ORIENTATION)|enable?(ORIENTATION_EVENTS) {
    QT += sensors
}

enable?(GEOLOCATION): QT += location

contains(CONFIG, texmap): DEFINES += WTF_USE_TEXTURE_MAPPER=1

use?(PLUGIN_BACKEND_XLIB): PKGCONFIG += x11

QT += network

