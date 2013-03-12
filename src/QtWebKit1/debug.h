/*
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

#ifndef QTWEBKIT1_DEBUG_H
#define QTWEBKIT1_DEBUG_H

#include <QDebug>

#ifdef DEBUG_ENABLED
    #define DEBUG() \
        qDebug() << __FILE__ << __LINE__ << __func__
    #define WARNING() \
        qCritical() << __FILE__ << __LINE__ << __func__
#else
    #define DEBUG() while (0) qDebug()
    #define WARNING() while (0) qDebug()
#endif

#endif // QTWEBKIT1_DEBUG_H
