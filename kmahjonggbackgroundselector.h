/*
    Copyright (C) 2006 Mauricio Piacentini  <mauricio@tabuleiro.com>

    Libkmahjongg is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef KMAHJONGGBACKGROUNDSELECTOR_H
#define KMAHJONGGBACKGROUNDSELECTOR_H

// Qt
#include <QMap>

// KDE
#include <KConfigSkeleton>

// LibKMahjongg
#include "ui_kmahjonggbackgroundselector.h"

class KMahjonggBackground;

class KMahjonggBackgroundSelector : public QWidget, public Ui::KMahjonggBackgroundSelector
{
Q_OBJECT
  public:
    explicit KMahjonggBackgroundSelector( QWidget* parent, KConfigSkeleton * aconfig );
    ~KMahjonggBackgroundSelector();
    void setupData(KConfigSkeleton * aconfig);

    QMap<QString, KMahjonggBackground *> backgroundMap;
  public slots:
    void backgroundChanged();
};

#endif // KMAHJONGGBACKGROUNDSELECTOR_H
