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

//void CommonSystemData_SetFullPathSaveFileName(struct string *FileName);
//bool CommonSystemData_LoadAtStartup(void);
//bool CommonSystemData_SetDataInt(struct string *Name, int Value);
//bool CommonSystemData_SetDataFloat(struct string *Name, float Value);
//bool CommonSystemData_SetDataString(struct string *Name, struct string *Value);
//bool CommonSystemData_SetDataBool(struct string *Name, bool Value);
//bool CommonSystemData_GetDataInt(struct string *Name, int *Value);
//bool CommonSystemData_GetDataFloat(struct string *Name, float *Value);
//bool CommonSystemData_GetDataString(struct string *Name, struct string **Value);
//bool CommonSystemData_GetDataBool(struct string *Name, bool *Value);

HLL_LIBRARY(CommonSystemData,
	    HLL_TODO_EXPORT(SetFullPathSaveFileName, CommonSystemData_SetFullPathSaveFileName),
	    HLL_TODO_EXPORT(LoadAtStartup, CommonSystemData_LoadAtStartup),
	    HLL_TODO_EXPORT(SetDataInt, CommonSystemData_SetDataInt),
	    HLL_TODO_EXPORT(SetDataFloat, CommonSystemData_SetDataFloat),
	    HLL_TODO_EXPORT(SetDataString, CommonSystemData_SetDataString),
	    HLL_TODO_EXPORT(SetDataBool, CommonSystemData_SetDataBool),
	    HLL_TODO_EXPORT(GetDataInt, CommonSystemData_GetDataInt),
	    HLL_TODO_EXPORT(GetDataFloat, CommonSystemData_GetDataFloat),
	    HLL_TODO_EXPORT(GetDataString, CommonSystemData_GetDataString),
	    HLL_TODO_EXPORT(GetDataBool, CommonSystemData_GetDataBool)
	    );
