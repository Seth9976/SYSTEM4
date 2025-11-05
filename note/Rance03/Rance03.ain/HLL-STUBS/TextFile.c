/* Copyright (C) 2025 (INSERT YOUR NAME)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://gnu.org/licenses/>.
 */

#include "hll.h"

//bool TextFile_Create(struct string *FileName);
//bool TextFile_Close(void);
//bool TextFile_Write(struct string *Text);
//bool TextFile_ReadAll(struct string *FileName, struct string **Text);

HLL_LIBRARY(TextFile,
	    HLL_TODO_EXPORT(Create, TextFile_Create),
	    HLL_TODO_EXPORT(Close, TextFile_Close),
	    HLL_TODO_EXPORT(Write, TextFile_Write),
	    HLL_TODO_EXPORT(ReadAll, TextFile_ReadAll)
	    );
