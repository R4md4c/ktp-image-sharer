/*
 * Copyright (C) 2014  Ahmed I. Khalil <ahmedibrahimkhali@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef SIMPLESTIMAGEHOSTINGSHARER_H
#define SIMPLESTIMAGEHOSTINGSHARER_H

#include "abstractsharer.h"
#include "mpform.h"

class SimplestImageHostingSharer : public AbstractSharer
{
public:
    SimplestImageHostingSharer(const QString& contentPath);

    KUrl url() const;
    void parseResponse(const QByteArray& responseData);
    QByteArray postBody(const QByteArray& imageData);
};

#endif // SIMPLESTIMAGEHOSTINGSHARER_H
