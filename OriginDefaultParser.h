/***************************************************************************
    File                 : OriginDefaultParser.h
    --------------------------------------------------------------------
    Copyright            : (C) 2005-2007 Stefan Gerlach
                           (C) 2007-2008 Alex Kargovsky, Ion Vasilief
    Email (use @ for *)  : kargovsky*yumr.phys.msu.su, ion_vasilief*yahoo.fr
    Description          : Default Origin file parser class

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *  This program is free software; you can redistribute it and/or modify   *
 *  it under the terms of the GNU General Public License as published by   *
 *  the Free Software Foundation; either version 2 of the License, or      *
 *  (at your option) any later version.                                    *
 *                                                                         *
 *  This program is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *  GNU General Public License for more details.                           *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the Free Software           *
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor,                    *
 *   Boston, MA  02110-1301  USA                                           *
 *                                                                         *
 ***************************************************************************/

#ifndef ORIGIN_DEFAULT_PARSER_H
#define ORIGIN_DEFAULT_PARSER_H

#include "OriginParser.h"

using namespace std;

class OriginDefaultParser : public OriginParser
{
public:
	OriginDefaultParser(const string& fileName);
	bool parse(ProgressCallback callback = NULL, void *user_data = NULL);

private:
	string fileName;
};

#endif // ORIGIN_DEFAULT_PARSER_H
