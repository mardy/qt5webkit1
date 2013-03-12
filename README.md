Qt5WebKit1
==========

This project aims to develop QtQuick 2.0 APIs to WebKit1. Currently, Qt5 offers
QtQuick 2.0 APIs for WebKit2 only: while most of the development effort is the
WebKit project is spent on WebKit2, there are still cases where one might want
to use the WebKit1 API (for example, to have full control over the network or
cookie handling). Using WebKit1 in Qt5 is still possible through the
WebKitWidgets API (the same used in Qt4), but that relies on QWidget and
QGraphicsView.

This projects consists of a QtQuick plugin which allows setting up a web view
in QML, and a shared library which exposes the QQuickWebView item and the
QWebPage and QWebFrame classes to C++ code.
Both modules can be used against an unmodified QtWebkit installation.

The QWebPage and QWebFrame classes aim to be as compatible as possible to the
corresponding APIs provided by WebKitWidgets (and by Qt4), in order to minimize
porting efforts.

Eventually, the goal is to merge this code into QtWebKit itself (while still
keeping the shared library separate).


How to build the module
-----------------------

It is possible to build this module without building QtWebKit. However, since
we are making use of several private APIs exposed by libQt5WebKit.so, there's
the risk that the private WebKit headers which are included within this
repository (which are those from Qt 5.0.1) might be out of sync with the
QtWebKit version currently installed on your system. If that happens, this
module will most likely still build correctly, but you might experience random
crashes at runtime. Therefore, it's also possible to specify an alternate
location for QtWebKit's sources.
That said, building this module is as simple as running the following commands:

  qmake
  make
  sudo make install

After that, you should be able to run the examples:

  qmlscene examples/test.qml


Get in touch!
-------------

If you are a developer interested in contributing to this project, you are
welcome to discuss it in either:
- the QtWebKit mailing list: http://lists.webkit.org/mailman/listinfo.cgi/webkit-qt
- #qtwebkit in the FreeNode IRC network
