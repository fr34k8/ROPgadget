/*
** RopGadget - Release v4.0.0
** Allan Wirth - http://allanwirth.com/
** Jonathan Salwan - http://twitter.com/JonathanSalwan
** 2013-1-20
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "ropgadget.h"

void map_parse(char *str)
{
  mapmode.addr_start = (Address)strtol(str, NULL, 16);

  while (*str != '-' && *str != '\0')
    str++;
  if (*str == '-')
    str++;

  mapmode.addr_end = (Address)strtol(str, NULL, 16);
}
