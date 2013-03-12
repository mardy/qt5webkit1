/*
 * Copyright (C) 2008 Nokia Corporation and/or its subsidiary(-ies)
 * Copyright (C) 2007 Staikos Computing Services Inc.
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

#ifndef QTWEBKIT1_QQUICKWEBVIEW_H
#define QTWEBKIT1_QQUICKWEBVIEW_H

#include <QtWebKit1/global.h>
#include <QtWebKit1/qwebpage.h>
#include <QtCore/qurl.h>
#include <QtGui/qicon.h>
#include <QtGui/qpainter.h>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtQuick/qquickpainteditem.h>

QT_BEGIN_NAMESPACE
class QNetworkRequest;
class QQuickPaintedItem;
class QWebHistory;
class QWebSettings;
QT_END_NAMESPACE

namespace QtWebKit1 {

class QQuickWebViewPrivate;

class QTWEBKIT1_EXPORT QQuickWebView : public QQuickPaintedItem {
    Q_OBJECT
    Q_PROPERTY(QString title READ title)
    Q_PROPERTY(QUrl url READ url WRITE setUrl)
    Q_PROPERTY(QIcon icon READ icon)
    Q_PROPERTY(QString selectedText READ selectedText)
    Q_PROPERTY(QString selectedHtml READ selectedHtml)
    Q_PROPERTY(bool hasSelection READ hasSelection)
    Q_PROPERTY(bool modified READ isModified)
    Q_PROPERTY(bool resizesToContents READ resizesToContents WRITE setResizesToContents)
    //Q_PROPERTY(Qt::TextInteractionFlags textInteractionFlags READ textInteractionFlags WRITE setTextInteractionFlags)
    Q_PROPERTY(qreal textSizeMultiplier READ textSizeMultiplier WRITE setTextSizeMultiplier DESIGNABLE false)
    Q_PROPERTY(qreal zoomFactor READ zoomFactor WRITE setZoomFactor)

    Q_PROPERTY(QPainter::RenderHints renderHints READ renderHints WRITE setRenderHints)
    Q_FLAGS(QPainter::RenderHints)
public:
    explicit QQuickWebView(QQuickItem *parent = 0);
    virtual ~QQuickWebView();

    QWebPage* page() const;
    void setPage(QWebPage* page);

    void load(const QUrl& url);
    void load(const QNetworkRequest& request, QNetworkAccessManager::Operation operation = QNetworkAccessManager::GetOperation, const QByteArray &body = QByteArray());
    void setHtml(const QString& html, const QUrl& baseUrl = QUrl());
    void setContent(const QByteArray& data, const QString& mimeType = QString(), const QUrl& baseUrl = QUrl());

    QWebHistory* history() const;
    QWebSettings* settings() const;

    QString title() const;
    void setUrl(const QUrl &url);
    QUrl url() const;
    QIcon icon() const;

    bool hasSelection() const;
    QString selectedText() const;
    QString selectedHtml() const;

    void triggerPageAction(QWebPage::WebAction action, bool checked = false);

    bool isModified() const;

    void setResizesToContents(bool enabled);
    bool resizesToContents() const;

    void setInputMethodHints(Qt::InputMethodHints hints);
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const;

    QSize sizeHint() const;

    qreal zoomFactor() const;
    void setZoomFactor(qreal factor);

    void setTextSizeMultiplier(qreal factor);
    qreal textSizeMultiplier() const;

    QPainter::RenderHints renderHints() const;
    void setRenderHints(QPainter::RenderHints hints);
    void setRenderHint(QPainter::RenderHint hint, bool enabled = true);

    bool findText(const QString& subString, QWebPage::FindFlags options = 0);

    void repaint(const QRect &dirtyRect = QRect());

    virtual bool event(QEvent*);

public Q_SLOTS:
    void stop();
    void back();
    void forward();
    void reload();

Q_SIGNALS:
    void loadStarted();
    void loadProgress(int progress);
    void loadFinished(bool success);
    void titleChanged(const QString& title);
    void statusBarMessage(const QString& text);
    void linkClicked(const QUrl&);
    void selectionChanged();
    void iconChanged();
    void urlChanged(const QUrl&);

protected:
    virtual void geometryChanged(const QRectF &, const QRectF &);
    virtual void paint(QPainter*);

    virtual QQuickWebView *createWindow(QWebPage::WebWindowType type);

    virtual void hoverMoveEvent(QHoverEvent*);
    virtual void mouseMoveEvent(QMouseEvent*);
    virtual void mousePressEvent(QMouseEvent*);
    virtual void mouseDoubleClickEvent(QMouseEvent*);
    virtual void mouseReleaseEvent(QMouseEvent*);
#ifndef QT_NO_WHEELEVENT
    virtual void wheelEvent(QWheelEvent*);
#endif
    virtual void keyPressEvent(QKeyEvent*);
    virtual void keyReleaseEvent(QKeyEvent*);
    virtual void dragEnterEvent(QDragEnterEvent*);
    virtual void dragLeaveEvent(QDragLeaveEvent*);
    virtual void dragMoveEvent(QDragMoveEvent*);
    virtual void dropEvent(QDropEvent*);
    virtual void focusInEvent(QFocusEvent*);
    virtual void focusOutEvent(QFocusEvent*);
    virtual void inputMethodEvent(QInputMethodEvent*);

private:
    friend class ::QWebPage;
    QQuickWebViewPrivate* d;
    Q_PRIVATE_SLOT(d, void _q_pageDestroyed())
    Q_PRIVATE_SLOT(d, void _q_repaintReal())
    Q_PRIVATE_SLOT(d, void _q_contentsSizeChanged(const QSize&))
};

}; // namespace

#endif // QTWEBKIT1_QQUICKWEBVIEW_H
