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

//bool Sys43VM_GetFunctionNameList(struct page **FunctionNameList);
//bool Sys43VM_BeginProfiler(void);
//bool Sys43VM_EndProfiler(void);
//int Sys43VM_GetActualNumofPage(void);
//int Sys43VM_GetActualMemorySize(void);

HLL_LIBRARY(Sys43VM,
	    HLL_TODO_EXPORT(GetFunctionNameList, Sys43VM_GetFunctionNameList),
	    HLL_TODO_EXPORT(BeginProfiler, Sys43VM_BeginProfiler),
	    HLL_TODO_EXPORT(EndProfiler, Sys43VM_EndProfiler),
	    HLL_TODO_EXPORT(GetActualNumofPage, Sys43VM_GetActualNumofPage),
	    HLL_TODO_EXPORT(GetActualMemorySize, Sys43VM_GetActualMemorySize)
	    );
