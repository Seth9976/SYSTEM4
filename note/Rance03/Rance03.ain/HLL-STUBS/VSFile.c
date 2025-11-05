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

//bool VSFile_OpenForWrite(struct string *pIFileName);
//bool VSFile_OpenForRead(struct string *pIFileName);
//bool VSFile_Close(void);
//bool VSFile_WriteByte(int nData);
//bool VSFile_WriteInt(int nData);
//bool VSFile_WriteFloat(float fData);
//bool VSFile_WriteString(struct string *pIString);
//bool VSFile_ReadByte(int *pnData);
//bool VSFile_ReadInt(int *pnData);
//bool VSFile_ReadFloat(float *pfData);
//bool VSFile_ReadString(struct string **pIString);

HLL_LIBRARY(VSFile,
	    HLL_TODO_EXPORT(OpenForWrite, VSFile_OpenForWrite),
	    HLL_TODO_EXPORT(OpenForRead, VSFile_OpenForRead),
	    HLL_TODO_EXPORT(Close, VSFile_Close),
	    HLL_TODO_EXPORT(WriteByte, VSFile_WriteByte),
	    HLL_TODO_EXPORT(WriteInt, VSFile_WriteInt),
	    HLL_TODO_EXPORT(WriteFloat, VSFile_WriteFloat),
	    HLL_TODO_EXPORT(WriteString, VSFile_WriteString),
	    HLL_TODO_EXPORT(ReadByte, VSFile_ReadByte),
	    HLL_TODO_EXPORT(ReadInt, VSFile_ReadInt),
	    HLL_TODO_EXPORT(ReadFloat, VSFile_ReadFloat),
	    HLL_TODO_EXPORT(ReadString, VSFile_ReadString)
	    );
