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

//void DrawGraph_BlendAMap(int nDest, int nDx, int nDy, int nSrc, int nSx, int nSy, int nWidth, int nHeight);
//void DrawGraph_Fill(int nDest, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB);
//void DrawGraph_FillAlphaColor(int nDest, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nRate);
//void DrawGraph_FillAMap(int nDest, int nX, int nY, int nWidth, int nHeight, int nAlpha);
//void DrawGraph_CopyReduce(int nDest, int nDx, int nDy, int nDWidth, int nDHeight, int nSrc, int nSx, int nSy, int nSWidth, int nSHeight);
//void DrawGraph_DrawLine(int nDest, int nX0, int nY0, int nX1, int nY1, int nR, int nG, int nB);
//void DrawGraph_FillWithAlpha(int nDest, int nX, int nY, int nWidth, int nHeight, int nR, int nG, int nB, int nA);

HLL_LIBRARY(DrawGraph,
	    HLL_TODO_EXPORT(BlendAMap, DrawGraph_BlendAMap),
	    HLL_TODO_EXPORT(Fill, DrawGraph_Fill),
	    HLL_TODO_EXPORT(FillAlphaColor, DrawGraph_FillAlphaColor),
	    HLL_TODO_EXPORT(FillAMap, DrawGraph_FillAMap),
	    HLL_TODO_EXPORT(CopyReduce, DrawGraph_CopyReduce),
	    HLL_TODO_EXPORT(DrawLine, DrawGraph_DrawLine),
	    HLL_TODO_EXPORT(FillWithAlpha, DrawGraph_FillWithAlpha)
	    );
