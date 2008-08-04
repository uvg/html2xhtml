/***************************************************************************
 *   Copyright (C) 2007 by Jesus Arias Fisteus                             *
 *   jaf@it.uc3m.es                                                        *
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
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*
 * charset.h
 * 
 * Funtions that convert the input from any character encoding into
 * UTF-8, which is used internally by the parser and the converter.
 *
 */

#ifndef CHARSET_H
#define CHARSET_H

#define CHARSET_INTERNAL_ENC "UTF-8"
#define CHARSET_BUFFER_SIZE 32768

/*
 * Set/reset the initial state of the charset input converter
 */
void charset_init(const char *charset_in, FILE *input_file);

/*
 * Read at most 'num' bytes into the buffer 'buf', encoded
 * with the internal charset.
 */
int charset_get_input(char *buf, size_t num);

#endif