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

//bool FileOperation_ExistFile(struct string *FileName);
//bool FileOperation_DeleteFile(struct string *FileName);
//bool FileOperation_CopyFile(struct string *DestFileName, struct string *SrcFileName);
//bool FileOperation_GetFileCreationTime(struct string *FileName, int *nYear, int *nMonth, int *nDay, int *nWeek, int *nHour, int *nMin, int *nSecond);
//bool FileOperation_GetFileLastAccessTime(struct string *FileName, int *nYear, int *nMonth, int *nDay, int *nWeek, int *nHour, int *nMin, int *nSecond);
//bool FileOperation_GetFileLastWriteTime(struct string *FileName, int *nYear, int *nMonth, int *nDay, int *nWeek, int *nHour, int *nMin, int *nSecond);
//bool FileOperation_GetFileSize(struct string *FileName, int *nSize);
//bool FileOperation_ExistFolder(struct string *FolderName);
//bool FileOperation_CreateFolder(struct string *FolderName);
//bool FileOperation_DeleteFolder(struct string *FolderName);
//bool FileOperation_GetFileList(struct string *FolderName, struct page **Array);
//bool FileOperation_GetFolderList(struct string *FolderName, struct page **Array);

HLL_LIBRARY(FileOperation,
	    HLL_TODO_EXPORT(ExistFile, FileOperation_ExistFile),
	    HLL_TODO_EXPORT(DeleteFile, FileOperation_DeleteFile),
	    HLL_TODO_EXPORT(CopyFile, FileOperation_CopyFile),
	    HLL_TODO_EXPORT(GetFileCreationTime, FileOperation_GetFileCreationTime),
	    HLL_TODO_EXPORT(GetFileLastAccessTime, FileOperation_GetFileLastAccessTime),
	    HLL_TODO_EXPORT(GetFileLastWriteTime, FileOperation_GetFileLastWriteTime),
	    HLL_TODO_EXPORT(GetFileSize, FileOperation_GetFileSize),
	    HLL_TODO_EXPORT(ExistFolder, FileOperation_ExistFolder),
	    HLL_TODO_EXPORT(CreateFolder, FileOperation_CreateFolder),
	    HLL_TODO_EXPORT(DeleteFolder, FileOperation_DeleteFolder),
	    HLL_TODO_EXPORT(GetFileList, FileOperation_GetFileList),
	    HLL_TODO_EXPORT(GetFolderList, FileOperation_GetFolderList)
	    );
