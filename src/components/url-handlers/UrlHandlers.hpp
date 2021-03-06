/*
 * UrlHandlers.hpp
 * Copyright (C) 2017  Belledonne Communications, Grenoble, France
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *  Created on: June 16, 2017
 *      Author: Ronan Abhamon
 */

#ifndef URL_HANDLERS_H_
#define URL_HANDLERS_H_

#include <QObject>

// =============================================================================

class UrlHandlers : public QObject {
  Q_OBJECT;

public:
  UrlHandlers (QObject *parent = Q_NULLPTR);
  ~UrlHandlers () = default;

public slots:
  void handleSip (const QUrl &url);

signals:
  void sip (const QString &sipAddress);
};

#endif // URL_HANDLERS_H_
