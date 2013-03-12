#-----------------------------------------------------------------------------
# Common configuration for all projects.
#-----------------------------------------------------------------------------

QMAKE_CXXFLAGS += -Wno-write-strings
# Disable RTTI
QMAKE_CXXFLAGS += -fno-exceptions -fno-rtti

TOP_SRC_DIR     = $$PWD
TOP_BUILD_DIR   = $${TOP_SRC_DIR}/$${BUILD_DIR}

QMAKE_LIBDIR += $${TOP_BUILD_DIR}/src/QtWebKit1

WEBKIT_SRC=$${TOP_SRC_DIR}/3rdparty/qtwebkit-opensource-src-5.0.1

#-----------------------------------------------------------------------------
# setup the installation prefix
#-----------------------------------------------------------------------------
INSTALL_PREFIX = /usr  # default installation prefix

# default prefix can be overriden by defining PREFIX when running qmake
isEmpty(PREFIX) {
    message("====")
    message("==== NOTE: To override the installation path run: `qmake PREFIX=/custom/path'")
    message("==== (current installation path is `$${INSTALL_PREFIX}')")
} else {
    INSTALL_PREFIX = $${PREFIX}
    message("====")
    message("==== install prefix set to `$${INSTALL_PREFIX}'")
}

ARCH = $$system(uname -m)

contains(ARCH, x86_64) {
    INSTALL_LIBDIR = $${INSTALL_PREFIX}/lib64
} else {
    INSTALL_LIBDIR = $${INSTALL_PREFIX}/lib
}

# default library directory can be overriden by defining LIBDIR when
# running qmake
isEmpty(LIBDIR) {
    message("====")
    message("==== NOTE: To override the library installation path run: `qmake LIBDIR=/custom/path'")
    message("==== (current installation path is `$${INSTALL_LIBDIR}')")
} else {
    INSTALL_LIBDIR = $${LIBDIR}
    message("====")
    message("==== library install path set to `$${INSTALL_LIBDIR}'")
}

include(coverage.pri)
