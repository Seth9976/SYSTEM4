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

//float Math_Cos(float fDeg);
//float Math_Sin(float fDeg);
//float Math_Tan(float fDeg);
//float Math_Sqrt(float fValue);
//float Math_Asin(float x);
//float Math_Acos(float x);
//float Math_Atan(float x);
//float Math_Atan2(float y, float x);
//int Math_Abs(int nValue);
//float Math_AbsF(float fValue);
//float Math_Pow(float fBase, float fExponent);
//void Math_SetSeed(int nSeed);
//void Math_SetSeedByCurrentTime(void);
//int Math_Rand(void);
//float Math_RandF(void);
//int Math_Min(int x, int y);
//float Math_MinF(float x, float y);
//int Math_Max(int x, int y);
//float Math_MaxF(float x, float y);
//void Math_Swap(int *x, int *y);
//void Math_SwapF(float *x, float *y);
//float Math_Log(float fValue);
//float Math_Log10(float fValue);
//int Math_Ceil(float fValue);
//bool Math_BezierCurve(struct page **anX, struct page **anY, int nNumof, float fT, int *nResultX, int *pnResultY);

HLL_LIBRARY(Math,
	    HLL_TODO_EXPORT(Cos, Math_Cos),
	    HLL_TODO_EXPORT(Sin, Math_Sin),
	    HLL_TODO_EXPORT(Tan, Math_Tan),
	    HLL_TODO_EXPORT(Sqrt, Math_Sqrt),
	    HLL_TODO_EXPORT(Asin, Math_Asin),
	    HLL_TODO_EXPORT(Acos, Math_Acos),
	    HLL_TODO_EXPORT(Atan, Math_Atan),
	    HLL_TODO_EXPORT(Atan2, Math_Atan2),
	    HLL_TODO_EXPORT(Abs, Math_Abs),
	    HLL_TODO_EXPORT(AbsF, Math_AbsF),
	    HLL_TODO_EXPORT(Pow, Math_Pow),
	    HLL_TODO_EXPORT(SetSeed, Math_SetSeed),
	    HLL_TODO_EXPORT(SetSeedByCurrentTime, Math_SetSeedByCurrentTime),
	    HLL_TODO_EXPORT(Rand, Math_Rand),
	    HLL_TODO_EXPORT(RandF, Math_RandF),
	    HLL_TODO_EXPORT(Min, Math_Min),
	    HLL_TODO_EXPORT(MinF, Math_MinF),
	    HLL_TODO_EXPORT(Max, Math_Max),
	    HLL_TODO_EXPORT(MaxF, Math_MaxF),
	    HLL_TODO_EXPORT(Swap, Math_Swap),
	    HLL_TODO_EXPORT(SwapF, Math_SwapF),
	    HLL_TODO_EXPORT(Log, Math_Log),
	    HLL_TODO_EXPORT(Log10, Math_Log10),
	    HLL_TODO_EXPORT(Ceil, Math_Ceil),
	    HLL_TODO_EXPORT(BezierCurve, Math_BezierCurve)
	    );
