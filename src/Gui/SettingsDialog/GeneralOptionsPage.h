/*
 *  Copyright (C) 2015 Boudhayan Gupta <bgupta@kde.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef GENERALOPTIONSPAGE_H
#define GENERALOPTIONSPAGE_H

#include "SettingsPage.h"

class QButtonGroup;
class QCheckBox;
class QRadioButton;

class GeneralOptionsPage : public SettingsPage
{
    Q_OBJECT

    public:

    explicit GeneralOptionsPage(QWidget *parent = nullptr);

    public Q_SLOTS:

    void saveChanges() override;
    void resetChanges() override;

    private Q_SLOTS:

    void markDirty();

    private:

    QButtonGroup* mPrintKeyActionGroup;
    QRadioButton* mRememberAlways;
    QRadioButton* mRememberUntilClosed;
    QCheckBox *mUseLightBackground;
    QCheckBox *mShowMagnifier;
    QCheckBox *mReleaseToCapture;
};

#endif // GENERALOPTIONSPAGE_H
