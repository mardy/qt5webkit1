/*
 * Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2008 Holger Hans Peter Freyther
 * Copyright (C) 2009 Girish Ramakrishnan <girish@forwardbias.in>
 * Copyright (C) 2013 Canonical Ltd.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@canonical.com>
 *
 * This library is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "config.h"
#include "qquickwebview.h"

#include "QWebPageClient.h"
#include "qwebframe.h"
#include "qwebpage_p.h"
#include <qbitmap.h>
#include <qdir.h>
#include <qevent.h>
#include <qfile.h>
#include <qpainter.h>

using namespace QtWebKit1;

namespace QtWebKit1 {

class QQuickWebViewPrivate {
public:
    QQuickWebViewPrivate(QQuickWebView *view)
        : q(view)
        , page(0)
        , repaintQueued(false)
        , inputMethodHints(Qt::ImhNone)
        , resizesToContents(false)
        , renderHints(QPainter::TextAntialiasing | QPainter::SmoothPixmapTransform)
    {
        Q_ASSERT(view);
    }

    virtual ~QQuickWebViewPrivate();

    void updateResizesToContentsForPage();

    void _q_pageDestroyed();
    void _q_repaintReal();
    void _q_contentsSizeChanged(const QSize&);
    void detachCurrentPage();

    QQuickWebView *q;
    QWebPage *page;

    bool repaintQueued;
    QRect repaintRect;
    Qt::InputMethodHints inputMethodHints;
    bool resizesToContents;
    QPainter::RenderHints renderHints;
    QPixmap renderedPage;
};

} // namespace

QQuickWebViewPrivate::~QQuickWebViewPrivate()
{
    detachCurrentPage();
}

void QQuickWebViewPrivate::_q_pageDestroyed()
{
    page = 0;
    q->setPage(0);
}

void QQuickWebViewPrivate::_q_repaintReal()
{
    qDebug() << Q_FUNC_INFO << "start" << repaintRect;
    repaintQueued = false;
    QPainter p;
    if (!p.begin(&renderedPage)) {
        qDebug() << "Painter error!";
        return;
    }
    QWebFrame *frame = page->mainFrame();
    frame->render(&p, QWebFrame::ContentsLayer, QRegion(repaintRect));
    q->update(repaintRect);
    repaintRect = QRect();
    qDebug() << Q_FUNC_INFO << "end";
}

void QQuickWebViewPrivate::updateResizesToContentsForPage()
{
    ASSERT(page);
    if (resizesToContents) {
        // resizes to contents mode requires preferred contents size to be set
        if (!page->preferredContentsSize().isValid())
            page->setPreferredContentsSize(QSize(960, 800));

        QObject::connect(page->mainFrame(), SIGNAL(contentsSizeChanged(QSize)),
            q, SLOT(_q_contentsSizeChanged(const QSize&)), Qt::UniqueConnection);
    } else {
        QObject::disconnect(page->mainFrame(), SIGNAL(contentsSizeChanged(QSize)),
            q, SLOT(_q_contentsSizeChanged(const QSize&)));
    }
}

void QQuickWebViewPrivate::_q_contentsSizeChanged(const QSize& size)
{
    if (!resizesToContents)
        return;
    q->setContentsSize(size);
}

/*!
    \class QQuickWebView
    \since 4.4
    \brief The QQuickWebView class provides a widget that is used to view and edit
    web documents.
    \ingroup advanced

    \inmodule QtWebKit

    QQuickWebView is the main widget component of the QtWebKit web browsing module.
    It can be used in various applications to display web content live from the
    Internet.

    The image below shows QQuickWebView previewed in \QD with a Nokia website.

    \image qwebview-url.png

    A web site can be loaded onto QQuickWebView with the load() function. Like all
    Qt widgets, the show() function must be invoked in order to display
    QQuickWebView. The snippet below illustrates this:

    \snippet webkitsnippets/simple/main.cpp Using QQuickWebView

    Alternatively, setUrl() can also be used to load a web site. If you have
    the HTML content readily available, you can use setHtml() instead.

    The loadStarted() signal is emitted when the view begins loading. The
    loadProgress() signal, on the other hand, is emitted whenever an element of
    the web view completes loading, such as an embedded image, a script, etc.
    Finally, the loadFinished() signal is emitted when the view has loaded
    completely. It's argument - either \c true or \c false - indicates
    load success or failure.

    The page() function returns a pointer to the web page object. See
    \l{Elements of QQuickWebView} for an explanation of how the web page
    is related to the view. To modify your web view's settings, you can access
    the QWebSettings object with the settings() function. With QWebSettings,
    you can change the default fonts, enable or disable features such as
    JavaScript and plugins.

    The title of an HTML document can be accessed with the title() property.
    Additionally, a web site may also specify an icon, which can be accessed
    using the icon() property. If the title or the icon changes, the corresponding
    titleChanged() and iconChanged() signals will be emitted. The
    textSizeMultiplier() property can be used to change the overall size of
    the text displayed in the web view.

    If you require a custom context menu, you can implement it by reimplementing
    \l{QWidget::}{contextMenuEvent()} and populating your QMenu with the actions
    obtained from pageAction(). More functionality such as reloading the view,
    copying selected text to the clipboard, or pasting into the view, is also
    encapsulated within the QAction objects returned by pageAction(). These
    actions can be programmatically triggered using triggerPageAction().
    Alternatively, the actions can be added to a toolbar or a menu directly.
    QQuickWebView maintains the state of the returned actions but allows
    modification of action properties such as \l{QAction::}{text} or
    \l{QAction::}{icon}.

    A QQuickWebView can be printed onto a QPrinter using the print() function.
    This function is marked as a slot and can be conveniently connected to
    \l{QPrintPreviewDialog}'s \l{QPrintPreviewDialog::}{paintRequested()}
    signal.

    If you want to provide support for web sites that allow the user to open
    new windows, such as pop-up windows, you can subclass QQuickWebView and
    reimplement the createWindow() function.

    \section1 Elements of QQuickWebView

    QQuickWebView consists of other objects such as QWebFrame and QWebPage. The
    flowchart below shows these elements are related.

    \image qwebview-diagram.png

    \note It is possible to use QWebPage and QWebFrame, without using QQuickWebView,
    if you do not require QWidget attributes. Nevertheless, QtWebKit depends
    on QtGui, so you should use a QApplication instead of QCoreApplication.

    \sa {Previewer Example}, {Web Browser}, {Form Extractor Example},
    {Google Chat Example}, {Fancy Browser Example}
*/

/*!
    Constructs an empty QQuickWebView with parent \a parent.

    \sa load()
*/
QQuickWebView::QQuickWebView(QQuickItem *parent)
    : QQuickPaintedItem(parent)
{
    d = new QQuickWebViewPrivate(this);

    setFlags(QQuickItem::ItemAcceptsInputMethod |
             QQuickItem::ItemHasContents |
             QQuickItem::ItemAcceptsDrops);
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::LeftButton);
}

/*!
    Destroys the web view.
*/
QQuickWebView::~QQuickWebView()
{
    delete d;
}

/*!
    Returns a pointer to the underlying web page.

    \sa setPage()
*/
QWebPage *QQuickWebView::page() const
{
    if (!d->page) {
        QQuickWebView *that = const_cast<QQuickWebView *>(this);
        that->setPage(new QWebPage(that));
    }
    return d->page;
}

void QQuickWebViewPrivate::detachCurrentPage()
{
    if (!page)
        return;

    page->d->view = 0;

    // if the page client is the special client constructed for
    // delegating the responsibilities to a QWidget, we need
    // to destroy it.

    if (page->d->client && page->d->client->isQWidgetClient())
        page->d->client.reset();

    page->d->client.take();

    // if the page was created by us, we own it and need to
    // destroy it as well.

    if (page->parent() == q)
        delete page;
    else
        page->disconnect(q);

    page = 0;
}

/*!
    Makes \a page the new web page of the web view.

    The parent QObject of the provided page remains the owner
    of the object. If the current page is a child of the web
    view, it will be deleted.

    \sa page()
*/
void QQuickWebView::setPage(QWebPage* page)
{
    if (d->page == page)
        return;

    d->detachCurrentPage();
    d->page = page;

    if (d->page) {
        d->page->setView(this);

        d->page->setViewportSize(QSize(width(), height()));

        if (d->resizesToContents)
            d->updateResizesToContentsForPage();

        // #### connect signals
        QWebFrame *mainFrame = d->page->mainFrame();
        connect(mainFrame, SIGNAL(titleChanged(QString)),
            this, SIGNAL(titleChanged(QString)));
        connect(mainFrame, SIGNAL(iconChanged()),
            this, SIGNAL(iconChanged()));
        connect(mainFrame, SIGNAL(urlChanged(QUrl)),
            this, SIGNAL(urlChanged(QUrl)));

        connect(d->page, SIGNAL(loadStarted()),
            this, SIGNAL(loadStarted()));
        connect(d->page, SIGNAL(loadProgress(int)),
            this, SIGNAL(loadProgress(int)));
        connect(d->page, SIGNAL(loadFinished(bool)),
            this, SIGNAL(loadFinished(bool)));
        connect(d->page, SIGNAL(statusBarMessage(QString)),
            this, SIGNAL(statusBarMessage(QString)));
        connect(d->page, SIGNAL(linkClicked(QUrl)),
            this, SIGNAL(linkClicked(QUrl)));
        connect(d->page, SIGNAL(selectionChanged()),
            this, SIGNAL(selectionChanged()));

        connect(d->page, SIGNAL(microFocusChanged()),
            this, SLOT(updateMicroFocus()));
        connect(d->page, SIGNAL(destroyed()),
            this, SLOT(_q_pageDestroyed()));
    }
    update();
}

/*!
    Loads the specified \a url and displays it.

    \note The view remains the same until enough data has arrived to display the new \a url.

    \sa setUrl(), url(), urlChanged(), QUrl::fromUserInput()
*/
void QQuickWebView::load(const QUrl &url)
{
    page()->mainFrame()->load(url);
}

/*!
    \fn void QQuickWebView::load(const QNetworkRequest &request, QNetworkAccessManager::Operation operation, const QByteArray &body)

    Loads a network request, \a request, using the method specified in \a operation.

    \a body is optional and is only used for POST operations.

    \note The view remains the same until enough data has arrived to display the new url.

    \sa url(), urlChanged()
*/

void QQuickWebView::load(const QNetworkRequest &request, QNetworkAccessManager::Operation operation, const QByteArray &body)
{
    page()->mainFrame()->load(request, operation, body);
}

/*!
    Sets the content of the web view to the specified \a html.

    External objects such as stylesheets or images referenced in the HTML
    document are located relative to \a baseUrl.

    The \a html is loaded immediately; external objects are loaded asynchronously.

    When using this method, WebKit assumes that external resources such as
    JavaScript programs or style sheets are encoded in UTF-8 unless otherwise
    specified. For example, the encoding of an external script can be specified
    through the charset attribute of the HTML script tag. Alternatively, the
    encoding can also be specified by the web server.

    This is a convenience function equivalent to setContent(html, "text/html", baseUrl).

    \warning This function works only for HTML, for other mime types (i.e. XHTML, SVG)
    setContent() should be used instead.

    \sa load(), setContent(), QWebFrame::toHtml(), QWebFrame::setContent()
*/
void QQuickWebView::setHtml(const QString &html, const QUrl &baseUrl)
{
    page()->mainFrame()->setHtml(html, baseUrl);
}

/*!
    Sets the content of the web view to the specified content \a data. If the \a mimeType argument
    is empty it is currently assumed that the content is HTML but in future versions we may introduce
    auto-detection.

    External objects referenced in the content are located relative to \a baseUrl.

    The \a data is loaded immediately; external objects are loaded asynchronously.

    \sa load(), setHtml(), QWebFrame::toHtml()
*/
void QQuickWebView::setContent(const QByteArray &data, const QString &mimeType, const QUrl &baseUrl)
{
    page()->mainFrame()->setContent(data, mimeType, baseUrl);
}

/*!
    Returns a pointer to the view's history of navigated web pages.

    It is equivalent to

    \snippet webkitsnippets/qtwebkit_qwebview_snippet.cpp 0
*/
QWebHistory *QQuickWebView::history() const
{
    return page()->history();
}

/*!
    Returns a pointer to the view/page specific settings object.

    It is equivalent to

    \snippet webkitsnippets/qtwebkit_qwebview_snippet.cpp 1

    \sa QWebSettings::globalSettings()
*/
QWebSettings *QQuickWebView::settings() const
{
    return page()->settings();
}

/*!
    \property QQuickWebView::title
    \brief the title of the web page currently viewed

    By default, this property contains an empty string.

    \sa titleChanged()
*/
QString QQuickWebView::title() const
{
    if (d->page)
        return d->page->mainFrame()->title();
    return QString();
}

/*!
    \property QQuickWebView::url
    \brief the url of the web page currently viewed

    Setting this property clears the view and loads the URL.

    By default, this property contains an empty, invalid URL.

    \sa load(), urlChanged()
*/

void QQuickWebView::setUrl(const QUrl &url)
{
    qDebug() << Q_FUNC_INFO << url;
    page()->mainFrame()->setUrl(url);
}

QUrl QQuickWebView::url() const
{
    if (d->page)
        return d->page->mainFrame()->url();
    return QUrl();
}

/*!
    \property QQuickWebView::icon
    \brief the icon associated with the web page currently viewed

    By default, this property contains a null icon.

    \sa iconChanged(), QWebSettings::iconForUrl()
*/
QIcon QQuickWebView::icon() const
{
    if (d->page)
        return d->page->mainFrame()->icon();
    return QIcon();
}

/*!
    \property QQuickWebView::hasSelection
    \brief whether this page contains selected content or not.

    By default, this property is false.

    \sa selectionChanged()
*/
bool QQuickWebView::hasSelection() const
{
    if (d->page)
        return d->page->hasSelection();
    return false;
}

/*!
    \property QQuickWebView::selectedText
    \brief the text currently selected

    By default, this property contains an empty string.

    \sa findText(), selectionChanged(), selectedHtml()
*/
QString QQuickWebView::selectedText() const
{
    if (d->page)
        return d->page->selectedText();
    return QString();
}

/*!
    \since 4.8
    \property QQuickWebView::selectedHtml
    \brief the HTML currently selected

    By default, this property contains an empty string.

    \sa findText(), selectionChanged(), selectedText()
*/
QString QQuickWebView::selectedHtml() const
{
    if (d->page)
        return d->page->selectedHtml();
    return QString();
}

/*!
    Triggers the specified \a action. If it is a checkable action the specified
    \a checked state is assumed.

    The following example triggers the copy action and therefore copies any
    selected text to the clipboard.

    \snippet webkitsnippets/qtwebkit_qwebview_snippet.cpp 2

    \sa pageAction()
*/
void QQuickWebView::triggerPageAction(QWebPage::WebAction action, bool checked)
{
    page()->triggerAction(action, checked);
}

/*!
    \property QQuickWebView::modified
    \brief whether the document was modified by the user

    Parts of HTML documents can be editable for example through the
    \c{contenteditable} attribute on HTML elements.

    By default, this property is false.
*/
bool QQuickWebView::isModified() const
{
    if (d->page)
        return d->page->isModified();
    return false;
}

/*!
    \property QQuickWebView::resizesToContents
    \brief whether the size of the QQuickWebView and its viewport changes to match the contents size
    \since 4.7 

    If this property is set, the QQuickWebView will automatically change its
    size to match the size of the main frame contents. As a result the top level frame
    will never have scrollbars. It will also make CSS fixed positioning to behave like absolute positioning
    with elements positioned relative to the document instead of the viewport.

    This property should be used in conjunction with the QWebPage::preferredContentsSize property.
    If not explicitly set, the preferredContentsSize is automatically set to a reasonable value.

    \sa QWebPage::setPreferredContentsSize()
*/
void QQuickWebView::setResizesToContents(bool enabled)
{
    if (d->resizesToContents == enabled)
        return;
    d->resizesToContents = enabled;
    if (d->page)
        d->updateResizesToContentsForPage();
}

bool QQuickWebView::resizesToContents() const
{
    return d->resizesToContents;
}

/*
Qt::TextInteractionFlags QQuickWebView::textInteractionFlags() const
{
    // ### FIXME (add to page)
    return Qt::TextInteractionFlags();
}
*/

/*
    \property QQuickWebView::textInteractionFlags
    \brief how the view should handle user input

    Specifies how the user can interact with the text on the page.
*/

/*
void QQuickWebView::setTextInteractionFlags(Qt::TextInteractionFlags flags)
{
    Q_UNUSED(flags)
    // ### FIXME (add to page)
}
*/

/*!
    \reimp
*/
QSize QQuickWebView::sizeHint() const
{
    return QSize(800, 600); // ####...
}

/*!
    \property QQuickWebView::zoomFactor
    \since 4.5
    \brief the zoom factor for the view
*/

void QQuickWebView::setZoomFactor(qreal factor)
{
    page()->mainFrame()->setZoomFactor(factor);
}

qreal QQuickWebView::zoomFactor() const
{
    return page()->mainFrame()->zoomFactor();
}

/*!
  \property QQuickWebView::textSizeMultiplier
  \brief the scaling factor for all text in the frame
  \obsolete

  Use setZoomFactor instead, in combination with the
  ZoomTextOnly attribute in QWebSettings.

  \note Setting this property also enables the
  ZoomTextOnly attribute in QWebSettings.

  By default, this property contains a value of 1.0.
*/

/*!
    Sets the value of the multiplier used to scale the text in a Web page to
    the \a factor specified.
*/
void QQuickWebView::setTextSizeMultiplier(qreal factor)
{
    page()->mainFrame()->setTextSizeMultiplier(factor);
}

/*!
    Returns the value of the multiplier used to scale the text in a Web page.
*/
qreal QQuickWebView::textSizeMultiplier() const
{
    return page()->mainFrame()->textSizeMultiplier();
}

/*!
    \property QQuickWebView::renderHints
    \since 4.6
    \brief the default render hints for the view

    These hints are used to initialize QPainter before painting the Web page.

    QPainter::TextAntialiasing and QPainter::SmoothPixmapTransform are enabled by default.

    \sa QPainter::renderHints()
*/

/*!
    \since 4.6
    Returns the render hints used by the view to render content.

    \sa QPainter::renderHints()
*/
QPainter::RenderHints QQuickWebView::renderHints() const
{
    return d->renderHints;
}

/*!
    \since 4.6
    Sets the render hints used by the view to the specified \a hints.

    \sa QPainter::setRenderHints()
*/
void QQuickWebView::setRenderHints(QPainter::RenderHints hints)
{
    if (hints == d->renderHints)
        return;
    d->renderHints = hints;
    update();
}

/*!
    \since 4.6
    If \a enabled is true, enables the specified render \a hint; otherwise
    disables it.

    \sa renderHints, QPainter::renderHints()
*/
void QQuickWebView::setRenderHint(QPainter::RenderHint hint, bool enabled)
{
    QPainter::RenderHints oldHints = d->renderHints;
    if (enabled)
        d->renderHints |= hint;
    else
        d->renderHints &= ~hint;
    if (oldHints != d->renderHints)
        update();
}


/*!
    Finds the specified string, \a subString, in the page, using the given \a options.

    If the HighlightAllOccurrences flag is passed, the function will highlight all occurrences
    that exist in the page. All subsequent calls will extend the highlight, rather than
    replace it, with occurrences of the new string.

    If the HighlightAllOccurrences flag is not passed, the function will select an occurrence
    and all subsequent calls will replace the current occurrence with the next one.

    To clear the selection, just pass an empty string.

    Returns true if \a subString was found; otherwise returns false.

    \sa selectedText(), selectionChanged()
*/
bool QQuickWebView::findText(const QString &subString, QWebPage::FindFlags options)
{
    if (d->page)
        return d->page->findText(subString, options);
    return false;
}

/*! \reimp
*/
bool QQuickWebView::event(QEvent *e)
{
    if (d->page) {
#ifndef QT_NO_CONTEXTMENU
        if (e->type() == QEvent::ContextMenu) {
            if (!isEnabled())
                return false;
            QContextMenuEvent *event = static_cast<QContextMenuEvent *>(e);
            if (d->page->swallowContextMenuEvent(event)) {
                e->accept();
                return true;
            }
            d->page->updatePositionDependentActions(event->pos());
        } else
#endif // QT_NO_CONTEXTMENU
        if (e->type() == QEvent::ShortcutOverride) {
            d->page->event(e);
#ifndef QT_NO_CURSOR
        } else if (e->type() == QEvent::CursorChange) {
            // An unsetCursor will set the cursor to Qt::ArrowCursor.
            // Thus this cursor change might be a QWidget::unsetCursor()
            // If this is not the case and it came from WebCore, the
            // QWebPageClient already has set its cursor internally
            // to Qt::ArrowCursor, so updating the cursor is always
            // right, as it falls back to the last cursor set by
            // WebCore.
            // FIXME: Add a QEvent::CursorUnset or similar to Qt.
            if (cursor().shape() == Qt::ArrowCursor)
                d->page->d->client->resetCursor();
#endif
        } else if (e->type() == QEvent::TouchBegin 
            || e->type() == QEvent::TouchEnd
            || e->type() == QEvent::TouchUpdate
            || e->type() == QEvent::TouchCancel) {
            d->page->event(e);

            // Always return true so that we'll receive also TouchUpdate and TouchEnd events
            return true;
        } else if (e->type() == QEvent::Leave)
            d->page->event(e);
    }

    return QQuickPaintedItem::event(e);
}

/*!
    Convenience slot that stops loading the document.

    It is equivalent to

    \snippet webkitsnippets/qtwebkit_qwebview_snippet.cpp 3

    \sa reload(), pageAction(), loadFinished()
*/
void QQuickWebView::stop()
{
    if (d->page)
        d->page->triggerAction(QWebPage::Stop);
}

/*!
    Convenience slot that loads the previous document in the list of documents
    built by navigating links. Does nothing if there is no previous document.

    It is equivalent to

    \snippet webkitsnippets/qtwebkit_qwebview_snippet.cpp 4

    \sa forward(), pageAction()
*/
void QQuickWebView::back()
{
    if (d->page)
        d->page->triggerAction(QWebPage::Back);
}

/*!
    Convenience slot that loads the next document in the list of documents
    built by navigating links. Does nothing if there is no next document.

    It is equivalent to

    \snippet webkitsnippets/qtwebkit_qwebview_snippet.cpp 5

    \sa back(), pageAction()
*/
void QQuickWebView::forward()
{
    if (d->page)
        d->page->triggerAction(QWebPage::Forward);
}

/*!
    Reloads the current document.

    \sa stop(), pageAction(), loadStarted()
*/
void QQuickWebView::reload()
{
    if (d->page)
        d->page->triggerAction(QWebPage::Reload);
}

/*! \reimp
*/
void QQuickWebView::geometryChanged(const QRectF &newGeometry,
                                    const QRectF &oldGeometry)
{
    QSize size = newGeometry.size().toSize();
    if (d->page)
        d->page->setViewportSize(size);
    d->renderedPage = QPixmap(size);
    QQuickPaintedItem::geometryChanged(newGeometry, oldGeometry);
}

void QQuickWebView::repaint(const QRect &dirtyRect)
{
    d->repaintRect = d->repaintRect.united(dirtyRect);
    if (d->repaintQueued) return;
    d->repaintQueued = true;
    QMetaObject::invokeMethod(this, "_q_repaintReal", Qt::QueuedConnection);
}

/*! \reimp
*/
void QQuickWebView::paint(QPainter *p)
{
    qDebug() << Q_FUNC_INFO;
    if (!d->page)
        return;
#ifdef QWEBKIT_TIME_RENDERING
    QTime time;
    time.start();
#endif

    p->setRenderHints(d->renderHints);

    qDebug() << "Rendering frame";
    p->drawPixmap(QPoint(0, 0), d->renderedPage);

#ifdef    QWEBKIT_TIME_RENDERING
    int elapsed = time.elapsed();
    qDebug() << "paint event on " << ev->region() << ", took to render =  " << elapsed;
#endif
}

/*!
    This function is called from the createWindow() method of the associated QWebPage,
    each time the page wants to create a new window of the given \a type. This might
    be the result, for example, of a JavaScript request to open a document in a new window.

    \note If the createWindow() method of the associated page is reimplemented, this
    method is not called, unless explicitly done so in the reimplementation.

    \note In the cases when the window creation is being triggered by JavaScript, apart from
    reimplementing this method application must also set the JavaScriptCanOpenWindows attribute
    of QWebSettings to true in order for it to get called.

    \sa QWebPage::createWindow(), QWebPage::acceptNavigationRequest()
*/
QQuickWebView *QQuickWebView::createWindow(QWebPage::WebWindowType type)
{
    Q_UNUSED(type)
    return 0;
}

/*! \reimp
*/
void QQuickWebView::hoverMoveEvent(QHoverEvent* ev)
{
    if (d->page) {
        const bool accepted = ev->isAccepted();
        d->page->event(ev);
        ev->setAccepted(accepted);
    }
}

/*! \reimp
*/
void QQuickWebView::mouseMoveEvent(QMouseEvent* ev)
{
    if (d->page) {
        const bool accepted = ev->isAccepted();
        d->page->event(ev);
        ev->setAccepted(accepted);
    }
}

/*! \reimp
*/
void QQuickWebView::mousePressEvent(QMouseEvent* ev)
{
    if (d->page) {
        forceActiveFocus();
        const bool accepted = ev->isAccepted();
        d->page->event(ev);
        ev->setAccepted(accepted);
    }
}

/*! \reimp
*/
void QQuickWebView::mouseDoubleClickEvent(QMouseEvent* ev)
{
    if (d->page) {
        const bool accepted = ev->isAccepted();
        d->page->event(ev);
        ev->setAccepted(accepted);
    }
}

/*! \reimp
*/
void QQuickWebView::mouseReleaseEvent(QMouseEvent* ev)
{
    if (d->page) {
        const bool accepted = ev->isAccepted();
        d->page->event(ev);
        ev->setAccepted(accepted);
    }
}

#ifndef QT_NO_WHEELEVENT
/*! \reimp
*/
void QQuickWebView::wheelEvent(QWheelEvent* ev)
{
    if (d->page) {
        const bool accepted = ev->isAccepted();
        d->page->event(ev);
        ev->setAccepted(accepted);
    }
}
#endif // QT_NO_WHEELEVENT

/*! \reimp
*/
void QQuickWebView::keyPressEvent(QKeyEvent* ev)
{
    if (d->page)
        d->page->event(ev);
    if (!ev->isAccepted())
        QQuickPaintedItem::keyPressEvent(ev);
}

/*! \reimp
*/
void QQuickWebView::keyReleaseEvent(QKeyEvent* ev)
{
    if (d->page)
        d->page->event(ev);
    if (!ev->isAccepted())
        QQuickPaintedItem::keyReleaseEvent(ev);
}

/*! \reimp
*/
void QQuickWebView::focusInEvent(QFocusEvent* ev)
{
    if (d->page)
        d->page->event(ev);
    else
        QQuickPaintedItem::focusInEvent(ev);
}

/*! \reimp
*/
void QQuickWebView::focusOutEvent(QFocusEvent* ev)
{
    if (d->page)
        d->page->event(ev);
    else
        QQuickPaintedItem::focusOutEvent(ev);
}

/*! \reimp
*/
void QQuickWebView::dragEnterEvent(QDragEnterEvent* ev)
{
#ifndef QT_NO_DRAGANDDROP
    if (d->page)
        d->page->event(ev);
#endif
}

/*! \reimp
*/
void QQuickWebView::dragLeaveEvent(QDragLeaveEvent* ev)
{
#ifndef QT_NO_DRAGANDDROP
    if (d->page)
        d->page->event(ev);
#endif
}

/*! \reimp
*/
void QQuickWebView::dragMoveEvent(QDragMoveEvent* ev)
{
#ifndef QT_NO_DRAGANDDROP
    if (d->page)
        d->page->event(ev);
#endif
}

/*! \reimp
*/
void QQuickWebView::dropEvent(QDropEvent* ev)
{
#ifndef QT_NO_DRAGANDDROP
    if (d->page)
        d->page->event(ev);
#endif
}

void QQuickWebView::setInputMethodHints(Qt::InputMethodHints hints)
{
    if (hints == d->inputMethodHints) return;
    d->inputMethodHints = hints;
    updateInputMethod(Qt::ImHints);
}

/*!\reimp
*/
QVariant QQuickWebView::inputMethodQuery(Qt::InputMethodQuery property) const
{
    if (property == Qt::ImHints)
        return int(d->inputMethodHints);
    if (d->page)
        return d->page->inputMethodQuery(property);
    return QVariant();
}

/*!\reimp
*/
void QQuickWebView::inputMethodEvent(QInputMethodEvent *e)
{
    if (d->page)
        d->page->event(e);
}

/*!
    \fn void QQuickWebView::titleChanged(const QString &title)

    This signal is emitted whenever the \a title of the main frame changes.

    \sa title()
*/

/*!
    \fn void QQuickWebView::urlChanged(const QUrl &url)

    This signal is emitted when the \a url of the view changes.

    \sa url(), load()
*/

/*!
    \fn void QQuickWebView::statusBarMessage(const QString& text)

    This signal is emitted when the status bar \a text is changed by the page.
*/

/*!
    \fn void QQuickWebView::iconChanged()

    This signal is emitted whenever the icon of the page is loaded or changes.

    In order for icons to be loaded, you will need to set an icon database path
    using QWebSettings::setIconDatabasePath().

    \sa icon(), QWebSettings::setIconDatabasePath()
*/

/*!
    \fn void QQuickWebView::loadStarted()

    This signal is emitted when a new load of the page is started.

    \sa loadProgress(), loadFinished()
*/

/*!
    \fn void QQuickWebView::loadFinished(bool ok)

    This signal is emitted when a load of the page is finished.
    \a ok will indicate whether the load was successful or any error occurred.

    \sa loadStarted()
*/

/*!
    \fn void QQuickWebView::selectionChanged()

    This signal is emitted whenever the selection changes.

    \sa selectedText()
*/

/*!
    \fn void QQuickWebView::loadProgress(int progress)

    This signal is emitted every time an element in the web page
    completes loading and the overall loading progress advances.

    This signal tracks the progress of all child frames.

    The current value is provided by \a progress and scales from 0 to 100,
    which is the default range of QProgressBar.

    \sa loadStarted(), loadFinished()
*/

/*!
    \fn void QQuickWebView::linkClicked(const QUrl &url)

    This signal is emitted whenever the user clicks on a link and the page's linkDelegationPolicy
    property is set to delegate the link handling for the specified \a url.

    \sa QWebPage::linkDelegationPolicy()
*/

#include "moc_qquickwebview.cpp"

