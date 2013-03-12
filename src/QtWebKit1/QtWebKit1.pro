include(../../common-project-config.pri)

TEMPLATE = lib
TARGET = QtWebKit1

CONFIG += \
    qt

QT += \
    qml \
    quick \
    sensors \
    webkit

# Error on undefined symbols
QMAKE_LFLAGS += $$QMAKE_LFLAGS_NOUNDEF
QMAKE_CXXFLAGS += -Wno-c++0x-compat

WEBKIT_DEFINES = \
    MOZ_X11 \
    XP_UNIX \
    ENABLE_NETSCAPE_PLUGIN_METADATA_CACHE=1 \
    ENABLE_GLIB_SUPPORT=1 \
    QT_OPENGL_SHIMS=1 \
    NDEBUG \
    ENABLE_3D_RENDERING=1 \
    ENABLE_BLOB=1 \
    ENABLE_CHANNEL_MESSAGING=1 \
    ENABLE_CSS_BOX_DECORATION_BREAK=1 \
    ENABLE_CSS_COMPOSITING=1 \
    ENABLE_CSS_EXCLUSIONS=1 \
    ENABLE_CSS_FILTERS=1 \
    ENABLE_CSS_IMAGE_SET=1 \
    ENABLE_CSS_REGIONS=1 \
    ENABLE_CSS_STICKY_POSITION=1 \
    ENABLE_DATALIST_ELEMENT=1 \
    ENABLE_DETAILS_ELEMENT=1 \
    ENABLE_FAST_MOBILE_SCROLLING=1 \
    ENABLE_FILTERS=1 \
    ENABLE_FTPDIR=1 \
    ENABLE_FULLSCREEN_API=1 \
    ENABLE_GESTURE_EVENTS=1 \
    ENABLE_ICONDATABASE=1 \
    ENABLE_IFRAME_SEAMLESS=1 \
    ENABLE_INPUT_TYPE_COLOR=1 \
    ENABLE_INSPECTOR=1 \
    ENABLE_INSPECTOR_SERVER=1 \
    ENABLE_JAVASCRIPT_DEBUGGER=1 \
    ENABLE_LEGACY_NOTIFICATIONS=1 \
    ENABLE_LEGACY_VIEWPORT_ADAPTION=1 \
    ENABLE_LEGACY_VENDOR_PREFIXES=1 \
    ENABLE_METER_ELEMENT=1 \
    ENABLE_MHTML=1 \
    ENABLE_MUTATION_OBSERVERS=1 \
    ENABLE_NOTIFICATIONS=1 \
    ENABLE_PAGE_VISIBILITY_API=1 \
    ENABLE_PROGRESS_ELEMENT=1 \
    ENABLE_RESOLUTION_MEDIA_QUERY=1 \
    ENABLE_REQUEST_ANIMATION_FRAME=1 \
    ENABLE_SHARED_WORKERS=1 \
    ENABLE_SMOOTH_SCROLLING=1 \
    ENABLE_SQL_DATABASE=1 \
    ENABLE_SVG=1 \
    ENABLE_SVG_FONTS=1 \
    ENABLE_TOUCH_ADJUSTMENT=1 \
    ENABLE_TOUCH_EVENTS=1 \
    ENABLE_WEB_SOCKETS=1 \
    ENABLE_WEB_TIMING=1 \
    ENABLE_WORKERS=1 \
    ENABLE_XHR_TIMEOUT=1 \
    WTF_USE_TILED_BACKING_STORE=1 \
    HAVE_QTQUICK=1 \
    HAVE_QTPRINTSUPPORT=1 \
    HAVE_QSTYLE=1 \
    HAVE_QTTESTLIB=1 \
    WTF_USE_LIBXML2=1 \
    ENABLE_XSLT=1 \
    WTF_USE_ZLIB=1 \
    WTF_USE_LIBJPEG=1 \
    WTF_USE_LIBPNG=1 \
    HAVE_XCOMPOSITE=1 \
    HAVE_XRENDER=1 \
    HAVE_GLX=1 \
    HAVE_FONTCONFIG=1 \
    ENABLE_NETSCAPE_PLUGIN_API=1 \
    WTF_USE_PLUGIN_BACKEND_XLIB=1 \
    PLUGIN_ARCHITECTURE_X11=1 \
    ENABLE_PLUGIN_PROCESS=1 \
    WTF_USE_3D_GRAPHICS=1 \
    ENABLE_WEBGL=1 \
    ENABLE_CSS_SHADERS=1 \
    ENABLE_GEOLOCATION=1 \
    ENABLE_ORIENTATION_EVENTS=1 \
    ENABLE_DEVICE_ORIENTATION=1 \
    ENABLE_VIDEO=1 \
    WTF_USE_GSTREAMER=1 \
    HAVE_SQLITE3=1 \
    ENABLE_GAMEPAD=1 \
    WTF_USE_GRAPHICS_SURFACE=1 \
    ENABLE_TOUCH_SLIDER=1 \
    ENABLE_ACCELERATED_2D_CANVAS=0 \
    ENABLE_ANIMATION_API=0 \
    ENABLE_BATTERY_STATUS=0 \
    ENABLE_CSP_NEXT=0 \
    ENABLE_CSS_GRID_LAYOUT=0 \
    ENABLE_CSS_HIERARCHIES=0 \
    ENABLE_CSS_IMAGE_ORIENTATION=0 \
    ENABLE_CSS_IMAGE_RESOLUTION=0 \
    ENABLE_CSS_VARIABLES=0 \
    ENABLE_CSS3_BACKGROUND=0 \
    ENABLE_CSS3_CONDITIONAL_RULES=0 \
    ENABLE_CSS3_TEXT=0 \
    ENABLE_DASHBOARD_SUPPORT=0 \
    ENABLE_DATAGRID=0 \
    ENABLE_DATA_TRANSFER_ITEMS=0 \
    ENABLE_DIRECTORY_UPLOAD=0 \
    ENABLE_DOWNLOAD_ATTRIBUTE=0 \
    ENABLE_FILE_SYSTEM=0 \
    ENABLE_HIGH_DPI_CANVAS=0 \
    ENABLE_INDEXED_DATABASE=0 \
    ENABLE_INPUT_SPEECH=0 \
    ENABLE_INPUT_TYPE_DATE=0 \
    ENABLE_INPUT_TYPE_DATETIME=0 \
    ENABLE_INPUT_TYPE_DATETIMELOCAL=0 \
    ENABLE_INPUT_TYPE_MONTH=0 \
    ENABLE_INPUT_TYPE_TIME=0 \
    ENABLE_INPUT_TYPE_WEEK=0 \
    ENABLE_LEGACY_CSS_VENDOR_PREFIXES=0 \
    ENABLE_LINK_PREFETCH=0 \
    ENABLE_LINK_PRERENDER=0 \
    ENABLE_MATHML=0 \
    ENABLE_MEDIA_SOURCE=0 \
    ENABLE_MEDIA_STATISTICS=0 \
    ENABLE_MEDIA_STREAM=0 \
    ENABLE_MICRODATA=0 \
    ENABLE_NAVIGATOR_CONTENT_UTILS=0 \
    ENABLE_NETWORK_INFO=0 \
    ENABLE_PROXIMITY_EVENTS=0 \
    ENABLE_QUOTA=0 \
    ENABLE_SCRIPTED_SPEECH=0 \
    ENABLE_SHADOW_DOM=0 \
    ENABLE_STYLE_SCOPED=0 \
    ENABLE_SVG_DOM_OBJC_BINDINGS=0 \
    ENABLE_TEXT_AUTOSIZING=0 \
    ENABLE_TEXT_NOTIFICATIONS_ONLY=0 \
    ENABLE_TOUCH_ICON_LOADING=0 \
    ENABLE_VIBRATION=0 \
    ENABLE_VIDEO_TRACK=0 \
    ENABLE_WEB_AUDIO=0 \
    BUILDING_WebCore \
    BUILDING_WEBKIT \
    QT_ASCII_CAST_WARNINGS \
    STATICALLY_LINKED_WITH_ANGLE \
    STATICALLY_LINKED_WITH_JavaScriptCore \
    ENABLE_GLIB_SUPPORT=1 \
    STATICALLY_LINKED_WITH_WTF \
    QT_NO_EXCEPTIONS \
    _LARGEFILE64_SOURCE \
    _LARGEFILE_SOURCE \
    QT_NO_DEBUG \
    QT_SENSORS_LIB \
    QT_SQL_LIB \
    QT_NETWORK_LIB \
    QT_GUI_LIB \
    QT_CORE_LIB

DEFINES += \
    BUILDING_QTWEBKIT1 \
    QT_NO_CONTEXTMENU \
    DEBUG_ENABLED \
    $$WEBKIT_DEFINES

INCLUDEPATH += \
    .. \
    $${WEBKIT_SRC}/Source \
    $${WEBKIT_SRC}/Source/ThirdParty/ANGLE/include/GLSLANG \
    $${WEBKIT_SRC}/Source/JavaScriptCore \
    $${WEBKIT_SRC}/Source/JavaScriptCore/API \
    $${WEBKIT_SRC}/Source/JavaScriptCore/assembler \
    $${WEBKIT_SRC}/Source/JavaScriptCore/bytecode \
    $${WEBKIT_SRC}/Source/JavaScriptCore/disassembler \
    $${WEBKIT_SRC}/Source/JavaScriptCore/heap \
    $${WEBKIT_SRC}/Source/JavaScriptCore/interpreter \
    $${WEBKIT_SRC}/Source/JavaScriptCore/jit \
    $${WEBKIT_SRC}/Source/JavaScriptCore/llint \
    $${WEBKIT_SRC}/Source/JavaScriptCore/runtime \
    $${WEBKIT_SRC}/Source/WebKit/qt/WebCoreSupport \
    $${WEBKIT_SRC}/Source/WebCore/bindings \
    $${WEBKIT_SRC}/Source/WebCore/bindings/js \
    $${WEBKIT_SRC}/Source/WebCore/bridge \
    $${WEBKIT_SRC}/Source/WebCore/bridge/jsc \
    $${WEBKIT_SRC}/Source/WebCore/css \
    $${WEBKIT_SRC}/Source/WebCore/dom \
    $${WEBKIT_SRC}/Source/WebCore/editing \
    $${WEBKIT_SRC}/Source/WebCore/generated \
    $${WEBKIT_SRC}/Source/WebCore/html \
    $${WEBKIT_SRC}/Source/WebCore/inspector \
    $${WEBKIT_SRC}/Source/WebCore/loader \
    $${WEBKIT_SRC}/Source/WebCore/loader/cache \
    $${WEBKIT_SRC}/Source/WebCore/loader/icon \
    $${WEBKIT_SRC}/Source/WebCore/page \
    $${WEBKIT_SRC}/Source/WebCore/page/animation \
    $${WEBKIT_SRC}/Source/WebCore/platform \
    $${WEBKIT_SRC}/Source/WebCore/platform/animation \
    $${WEBKIT_SRC}/Source/WebCore/platform/graphics \
    $${WEBKIT_SRC}/Source/WebCore/platform/graphics/surfaces \
    $${WEBKIT_SRC}/Source/WebCore/platform/graphics/texmap \
    $${WEBKIT_SRC}/Source/WebCore/platform/graphics/transforms \
    $${WEBKIT_SRC}/Source/WebCore/platform/network \
    $${WEBKIT_SRC}/Source/WebCore/platform/network/qt \
    $${WEBKIT_SRC}/Source/WebCore/platform/qt \
    $${WEBKIT_SRC}/Source/WebCore/platform/text \
    $${WEBKIT_SRC}/Source/WebCore/plugins \
    $${WEBKIT_SRC}/Source/WebCore/rendering \
    $${WEBKIT_SRC}/Source/WebCore/rendering/style \
    $${WEBKIT_SRC}/Source/WTF

SOURCES += \
    qquickpageclient.cpp \
    qquickwebview.cpp \
    qwebframe.cpp \
    qwebpage.cpp

HEADERS += \
    config.h \
    debug.h \
    global.h \
    qquickpageclient.h \
    qquickwebview.h \
    qwebframe.h \
    qwebpage.h

include($$TOP_SRC_DIR/common-installs-config.pri)
