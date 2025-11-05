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

//bool PassRegister_SetFileName(int nHandle, struct string *pIText);
//bool PassRegister_RegistNumber(int nHandle, int nNumber);
//bool PassRegister_RegistText(int nHandle, struct string *pIText);
//bool PassRegister_UnregistNumber(int nHandle, int nNumber);
//bool PassRegister_UnregistText(int nHandle, struct string *pIText);
//bool PassRegister_UnregistAll(int nHandle);
//bool PassRegister_ExistNumber(int nHandle, int nNumber);
//bool PassRegister_ExistText(int nHandle, struct string *pIText);

HLL_LIBRARY(PassRegister,
	    HLL_TODO_EXPORT(SetFileName, PassRegister_SetFileName),
	    HLL_TODO_EXPORT(RegistNumber, PassRegister_RegistNumber),
	    HLL_TODO_EXPORT(RegistText, PassRegister_RegistText),
	    HLL_TODO_EXPORT(UnregistNumber, PassRegister_UnregistNumber),
	    HLL_TODO_EXPORT(UnregistText, PassRegister_UnregistText),
	    HLL_TODO_EXPORT(UnregistAll, PassRegister_UnregistAll),
	    HLL_TODO_EXPORT(ExistNumber, PassRegister_ExistNumber),
	    HLL_TODO_EXPORT(ExistText, PassRegister_ExistText)
	    );
