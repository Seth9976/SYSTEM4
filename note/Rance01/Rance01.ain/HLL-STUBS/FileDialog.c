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

//bool FileDialog_OpenLoadDialog(struct string **LoadFileName, struct string *TitleName, struct string *FolderName, struct page *FilterTitleList, struct page *FilterExtendList);
//bool FileDialog_OpenSaveDialog(struct string **SaveFileName, struct string *TitleName, struct string *FolderName, struct page *FilterTitleList, struct page *FilterExtendList);

HLL_LIBRARY(FileDialog,
	    HLL_TODO_EXPORT(OpenLoadDialog, FileDialog_OpenLoadDialog),
	    HLL_TODO_EXPORT(OpenSaveDialog, FileDialog_OpenSaveDialog)
	    );
