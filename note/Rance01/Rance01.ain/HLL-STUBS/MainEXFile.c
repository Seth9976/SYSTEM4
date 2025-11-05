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

//bool MainEXFile_ReloadDebugEXFile(void);
//int MainEXFile_Handle(struct string *Name);
//int MainEXFile_AHandle(int Handle, int Index);
//int MainEXFile_A2Handle(int Handle, int Col, int Row);
//int MainEXFile_IA2Handle(int Handle, int Key, struct string *FormatName);
//int MainEXFile_SA2Handle(int Handle, struct string *Key, struct string *FormatName);
//int MainEXFile_RA2Handle(int Handle, int Row, struct string *FormatName);
//int MainEXFile_Row(int Handle);
//int MainEXFile_Col(int Handle);
//int MainEXFile_Type(int Handle);
//int MainEXFile_AType(int Handle, int Index);
//int MainEXFile_A2Type(int Handle, int Col, int Row);
//int MainEXFile_IA2Type(int Handle, int Key, struct string *FormatName);
//int MainEXFile_SA2Type(int Handle, struct string *Key, struct string *FormatName);
//int MainEXFile_RA2Type(int Handle, int Row, struct string *FormatName);
//bool MainEXFile_Exists(int Handle);
//bool MainEXFile_AExists(int Handle, int Index);
//bool MainEXFile_A2Exists(int Handle, int Col, int Row);
//bool MainEXFile_IA2Exists(int Handle, int Key, struct string *FormatName);
//bool MainEXFile_SA2Exists(int Handle, struct string *Key, struct string *FormatName);
//bool MainEXFile_RA2Exists(int Handle, int Row, struct string *FormatName);
//bool MainEXFile_Int(int Handle, int *Data);
//bool MainEXFile_Float(int Handle, float *Data);
//bool MainEXFile_String(int Handle, struct string **Data);
//bool MainEXFile_AInt(int Handle, int Index, int *Data);
//bool MainEXFile_AFloat(int Handle, int Index, float *Data);
//bool MainEXFile_AString(int Handle, int Index, struct string **Data);
//bool MainEXFile_A2Int(int Handle, int Col, int Row, int *Data);
//bool MainEXFile_A2Float(int Handle, int Col, int Row, float *Data);
//bool MainEXFile_A2String(int Handle, int Col, int Row, struct string **Data);
//int MainEXFile_GetRowAtIntKey(int Handle, int Key);
//int MainEXFile_GetRowAtStringKey(int Handle, struct string *Key);
//bool MainEXFile_IA2Int(int Handle, int Key, struct string *FormatName, int *Data);
//bool MainEXFile_IA2Float(int Handle, int Key, struct string *FormatName, float *Data);
//bool MainEXFile_IA2String(int Handle, int Key, struct string *FormatName, struct string **Data);
//bool MainEXFile_SA2Int(int Handle, struct string *Key, struct string *FormatName, int *Data);
//bool MainEXFile_SA2Float(int Handle, struct string *Key, struct string *FormatName, float *Data);
//bool MainEXFile_SA2String(int Handle, struct string *Key, struct string *FormatName, struct string **Data);
//bool MainEXFile_RA2Int(int Handle, int Row, struct string *FormatName, int *Data);
//bool MainEXFile_RA2Float(int Handle, int Row, struct string *FormatName, float *Data);
//bool MainEXFile_RA2String(int Handle, int Row, struct string *FormatName, struct string **Data);
//int MainEXFile_GetNodeNameCount(struct string *TreePath);
//int MainEXFile_GetEXNameCount(struct string *TreePath);
//bool MainEXFile_GetNodeName(struct string *TreePath, int Index, struct string **NodeName);
//bool MainEXFile_GetEXName(struct string *TreePath, int Index, struct string **EXName);

HLL_LIBRARY(MainEXFile,
	    HLL_TODO_EXPORT(ReloadDebugEXFile, MainEXFile_ReloadDebugEXFile),
	    HLL_TODO_EXPORT(Handle, MainEXFile_Handle),
	    HLL_TODO_EXPORT(AHandle, MainEXFile_AHandle),
	    HLL_TODO_EXPORT(A2Handle, MainEXFile_A2Handle),
	    HLL_TODO_EXPORT(IA2Handle, MainEXFile_IA2Handle),
	    HLL_TODO_EXPORT(SA2Handle, MainEXFile_SA2Handle),
	    HLL_TODO_EXPORT(RA2Handle, MainEXFile_RA2Handle),
	    HLL_TODO_EXPORT(Row, MainEXFile_Row),
	    HLL_TODO_EXPORT(Col, MainEXFile_Col),
	    HLL_TODO_EXPORT(Type, MainEXFile_Type),
	    HLL_TODO_EXPORT(AType, MainEXFile_AType),
	    HLL_TODO_EXPORT(A2Type, MainEXFile_A2Type),
	    HLL_TODO_EXPORT(IA2Type, MainEXFile_IA2Type),
	    HLL_TODO_EXPORT(SA2Type, MainEXFile_SA2Type),
	    HLL_TODO_EXPORT(RA2Type, MainEXFile_RA2Type),
	    HLL_TODO_EXPORT(Exists, MainEXFile_Exists),
	    HLL_TODO_EXPORT(AExists, MainEXFile_AExists),
	    HLL_TODO_EXPORT(A2Exists, MainEXFile_A2Exists),
	    HLL_TODO_EXPORT(IA2Exists, MainEXFile_IA2Exists),
	    HLL_TODO_EXPORT(SA2Exists, MainEXFile_SA2Exists),
	    HLL_TODO_EXPORT(RA2Exists, MainEXFile_RA2Exists),
	    HLL_TODO_EXPORT(Int, MainEXFile_Int),
	    HLL_TODO_EXPORT(Float, MainEXFile_Float),
	    HLL_TODO_EXPORT(String, MainEXFile_String),
	    HLL_TODO_EXPORT(AInt, MainEXFile_AInt),
	    HLL_TODO_EXPORT(AFloat, MainEXFile_AFloat),
	    HLL_TODO_EXPORT(AString, MainEXFile_AString),
	    HLL_TODO_EXPORT(A2Int, MainEXFile_A2Int),
	    HLL_TODO_EXPORT(A2Float, MainEXFile_A2Float),
	    HLL_TODO_EXPORT(A2String, MainEXFile_A2String),
	    HLL_TODO_EXPORT(GetRowAtIntKey, MainEXFile_GetRowAtIntKey),
	    HLL_TODO_EXPORT(GetRowAtStringKey, MainEXFile_GetRowAtStringKey),
	    HLL_TODO_EXPORT(IA2Int, MainEXFile_IA2Int),
	    HLL_TODO_EXPORT(IA2Float, MainEXFile_IA2Float),
	    HLL_TODO_EXPORT(IA2String, MainEXFile_IA2String),
	    HLL_TODO_EXPORT(SA2Int, MainEXFile_SA2Int),
	    HLL_TODO_EXPORT(SA2Float, MainEXFile_SA2Float),
	    HLL_TODO_EXPORT(SA2String, MainEXFile_SA2String),
	    HLL_TODO_EXPORT(RA2Int, MainEXFile_RA2Int),
	    HLL_TODO_EXPORT(RA2Float, MainEXFile_RA2Float),
	    HLL_TODO_EXPORT(RA2String, MainEXFile_RA2String),
	    HLL_TODO_EXPORT(GetNodeNameCount, MainEXFile_GetNodeNameCount),
	    HLL_TODO_EXPORT(GetEXNameCount, MainEXFile_GetEXNameCount),
	    HLL_TODO_EXPORT(GetNodeName, MainEXFile_GetNodeName),
	    HLL_TODO_EXPORT(GetEXName, MainEXFile_GetEXName)
	    );
