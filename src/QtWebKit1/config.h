/*
 * Copyright (C) 2013 Canonical Ltd.
 *
 * Contact: Alberto Mardegan <alberto.mardegan@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QTWEBKIT1_CONFIG_H
#define QTWEBKIT1_CONFIG_H

#define BUILDING_QT__

#include "wtf/ExportMacros.h"
#include "PlatformExportMacros.h"
#include "JSExportMacros.h"

#ifdef WTF_USE_ACCELERATED_COMPOSITING
#undef WTF_USE_ACCELERATED_COMPOSITING
#define WTF_USE_ACCELERATED_COMPOSITING 0
#endif


#endif // QTWEBKIT1_CONFIG_H
