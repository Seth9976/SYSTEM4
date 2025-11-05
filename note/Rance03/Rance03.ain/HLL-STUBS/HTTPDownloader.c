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

//bool HTTPDownloader_Get(struct string *pIURL);
//bool HTTPDownloader_Post(struct string *pIURL, struct string *pIParam);
//bool HTTPDownloader_IsRun(void);
//void HTTPDownloader_Stop(void);
//int HTTPDownloader_GetReadSize(void);
//bool HTTPDownloader_ReadString(struct string **pIString);
//bool HTTPDownloader_UTF8ToSJIS(struct string **pIString);
//bool HTTPDownloader_SJISToUTF8(struct string **pIString);
//bool HTTPDownloader_EncodeString(struct string **pIString);
//bool HTTPDownloader_DecodeString(struct string **pIString);

HLL_LIBRARY(HTTPDownloader,
	    HLL_TODO_EXPORT(Get, HTTPDownloader_Get),
	    HLL_TODO_EXPORT(Post, HTTPDownloader_Post),
	    HLL_TODO_EXPORT(IsRun, HTTPDownloader_IsRun),
	    HLL_TODO_EXPORT(Stop, HTTPDownloader_Stop),
	    HLL_TODO_EXPORT(GetReadSize, HTTPDownloader_GetReadSize),
	    HLL_TODO_EXPORT(ReadString, HTTPDownloader_ReadString),
	    HLL_TODO_EXPORT(UTF8ToSJIS, HTTPDownloader_UTF8ToSJIS),
	    HLL_TODO_EXPORT(SJISToUTF8, HTTPDownloader_SJISToUTF8),
	    HLL_TODO_EXPORT(EncodeString, HTTPDownloader_EncodeString),
	    HLL_TODO_EXPORT(DecodeString, HTTPDownloader_DecodeString)
	    );
