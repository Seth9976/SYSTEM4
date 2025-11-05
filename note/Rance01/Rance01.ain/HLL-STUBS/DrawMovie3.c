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

//void DrawMovie3_Release(void);
//bool DrawMovie3_Load(struct string *pIFileName);
//bool DrawMovie3_Run(void);
//bool DrawMovie3_Draw(int nSprite);
//void DrawMovie3_SetInnerVolume(int nInnerVolume);
//void DrawMovie3_UpdateVolume(bool IsMuteByInactiveWindow);
//bool DrawMovie3_IsEnd(void);
//int DrawMovie3_GetCount(void);

HLL_LIBRARY(DrawMovie3,
	    HLL_TODO_EXPORT(Release, DrawMovie3_Release),
	    HLL_TODO_EXPORT(Load, DrawMovie3_Load),
	    HLL_TODO_EXPORT(Run, DrawMovie3_Run),
	    HLL_TODO_EXPORT(Draw, DrawMovie3_Draw),
	    HLL_TODO_EXPORT(SetInnerVolume, DrawMovie3_SetInnerVolume),
	    HLL_TODO_EXPORT(UpdateVolume, DrawMovie3_UpdateVolume),
	    HLL_TODO_EXPORT(IsEnd, DrawMovie3_IsEnd),
	    HLL_TODO_EXPORT(GetCount, DrawMovie3_GetCount)
	    );
