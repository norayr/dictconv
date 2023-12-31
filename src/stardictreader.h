/***************************************************************************
 *   Copyright (C) 2007 by Raul Fernandes                                  *
 *   rgbr@yahoo.com.br                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 ***************************************************************************/
#ifndef STARDICTREADER_H
#define STARDICTREADER_H

#include "dictreader.h"
#include "stardict.h"

#include <string>
#include <fstream>
#include <vector>

/**
@author Raul Fernandes
*/
class StarDictReader : public DictReader
{
public:
    StarDictReader( std::string filename, DictBuilder *builder );

    bool convert();
    inline DictBuilder* product() const { return m_builder; };
    inline std::string filename() const { return m_stardict->filename(); };

  protected:
    DictBuilder *m_builder;
    StarDict *m_stardict;
};

#endif // STARDICTREADER_H
