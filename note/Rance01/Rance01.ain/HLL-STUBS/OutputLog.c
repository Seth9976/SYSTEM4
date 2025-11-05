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

//int OutputLog_Create(struct string *szName);
//void OutputLog_Output(int nHandle, struct string *szText);
//void OutputLog_Clear(int nHandle);
//int OutputLog_Save(int nHandle, struct string *szFileName);
//bool OutputLog_EnableAutoSave(int nHandle, struct string *szFileName);
//bool OutputLog_DisableAutoSave(int nHandle);

HLL_LIBRARY(OutputLog,
	    HLL_TODO_EXPORT(Create, OutputLog_Create),
	    HLL_TODO_EXPORT(Output, OutputLog_Output),
	    HLL_TODO_EXPORT(Clear, OutputLog_Clear),
	    HLL_TODO_EXPORT(Save, OutputLog_Save),
	    HLL_TODO_EXPORT(EnableAutoSave, OutputLog_EnableAutoSave),
	    HLL_TODO_EXPORT(DisableAutoSave, OutputLog_DisableAutoSave)
	    );
