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

#ifndef qwebframe_p_h
#define qwebframe_p_h

#include "QWebFrameAdapter.h"

#include "qwebframe.h"
#include "qwebpage_p.h"


namespace WebCore {
class FrameLoaderClientQt;
class FrameView;
class HTMLFrameOwnerElement;
class Scrollbar;
class TextureMapperLayer;
}

class QWebPage;

class QWebFramePrivate : public QWebFrameAdapter {
public:
    QWebFramePrivate()
        : q(0)
        , page(0)
    { }
    void setPage(QWebPage*);

    inline QWebFrame *parentFrame() { return qobject_cast<QWebFrame*>(q->parent()); }

    static QWebFrame* kit(const QWebFrameAdapter*);

    // Adapter implementation
    virtual QWebFrame* apiHandle() OVERRIDE;
    virtual QObject* handle() OVERRIDE;
    virtual void contentsSizeDidChange(const QSize &) OVERRIDE;
    virtual int scrollBarPolicy(Qt::Orientation) const OVERRIDE;
    virtual void emitUrlChanged() OVERRIDE;
    virtual void didStartProvisionalLoad() OVERRIDE;
    virtual void didClearWindowObject() OVERRIDE;
    virtual bool handleProgressFinished(QPoint*) OVERRIDE;
    virtual void emitInitialLayoutCompleted() OVERRIDE;
    virtual void emitIconChanged() OVERRIDE;
    virtual void emitLoadStarted(bool originatingLoad) OVERRIDE;
    virtual void emitLoadFinished(bool originatingLoad, bool ok) OVERRIDE;
    virtual QWebFrameAdapter* createChildFrame(QWebFrameData*) OVERRIDE;

    QWebFrame *q;
    QWebPage *page;

};

#endif
