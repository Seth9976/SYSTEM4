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

//int ChipmunkSpriteEngine_Init(void *pIMainSystem);
//int ChipmunkSpriteEngine_Update(void);
//int ChipmunkSpriteEngine_SP_GetUnuseNum(int nMin);
//int ChipmunkSpriteEngine_SP_SaveCG(int nSP, struct string *pIStringFileName);
//int ChipmunkSpriteEngine_SP_CreatePixelOnly(int nSP, int nWidth, int nHeight);
//int ChipmunkSpriteEngine_SP_Delete(int nSP);
//bool ChipmunkSpriteEngine_SP_DeleteAll(void);
//int ChipmunkSpriteEngine_SP_SetZ(int nSP, int nZ);
//int ChipmunkSpriteEngine_SP_SetShow(int nSP, int nfShow);
//bool ChipmunkSpriteEngine_SP_RenderView(int SpriteNumber);
//void ChipmunkSpriteEngine_SP_SetTextSpriteType(int nType);
//void ChipmunkSpriteEngine_SP_SetTextSpriteSize(int nSize);
//void ChipmunkSpriteEngine_SP_SetTextSpriteColor(int nR, int nG, int nB);
//void ChipmunkSpriteEngine_SP_SetTextSpriteBoldWeight(float fBoldWeight);
//void ChipmunkSpriteEngine_SP_SetTextSpriteEdgeWeight(float fEdgeWeight);
//void ChipmunkSpriteEngine_SP_SetTextSpriteEdgeColor(int nR, int nG, int nB);
//bool ChipmunkSpriteEngine_SP_GetFontWidth(struct string *Text, int *Width);
//float ChipmunkSpriteEngine_FPS_Get(void);
//int ChipmunkSpriteEngine_CG_IsExist(struct string *CGName);
//int ChipmunkSpriteEngine_CG_GetMetrics(struct string *CGName, struct page **cm);
//bool ChipmunkSpriteEngine_TRANS_Begin(int nNum);
//bool ChipmunkSpriteEngine_TRANS_Update(float fRate);
//bool ChipmunkSpriteEngine_TRANS_End(void);
//bool ChipmunkSpriteEngine_VIEW_SetMode(int nMode);
//int ChipmunkSpriteEngine_VIEW_GetMode(void);
//void ChipmunkSpriteEngine_VIEW_SetOffsetPos(int nX, int nY);
//bool ChipmunkSpriteEngine_KeepPreviousView_SetMode(bool KeepPreviousViewMode);
//bool ChipmunkSpriteEngine_KeepPreviousView_GetMode(void);
//bool ChipmunkSpriteEngine_KeepPreviousView(void);
//void ChipmunkSpriteEngine_Sleep(void);
//void ChipmunkSpriteEngine_SYSTEM_SetConfigOverFrameRateSleep(bool bConfigOverFrameRateSleep);
//bool ChipmunkSpriteEngine_SYSTEM_GetConfigOverFrameRateSleep(void);
//void ChipmunkSpriteEngine_SYSTEM_SetConfigSleepByInactiveWindow(bool bSleepByInactiveWindow);
//bool ChipmunkSpriteEngine_SYSTEM_GetConfigSleepByInactiveWindow(void);
//void ChipmunkSpriteEngine_SYSTEM_SetReadMessageSkipping(bool bReadMessageSkipping);
//bool ChipmunkSpriteEngine_SYSTEM_GetReadMessageSkipping(void);
//void ChipmunkSpriteEngine_SYSTEM_SetConfigFrameSkipWhileMessageSkip(bool bConfigFrameSkipWhileMessageSkip);
//bool ChipmunkSpriteEngine_SYSTEM_GetConfigFrameSkipWhileMessageSkip(void);
//void ChipmunkSpriteEngine_SYSTEM_SetInvalidateFrameSkipWhileMessageSkip(bool bInvalidateFrameSkipWhileMessageSkip);
//bool ChipmunkSpriteEngine_SYSTEM_GetInvalidateFrameSkipWhileMessageSkip(void);
//int ChipmunkSpriteEngine_Debug_GetCurrentAllocatedMemorySize(void);
//int ChipmunkSpriteEngine_Debug_GetMaxAllocatedMemorySize(void);
//int ChipmunkSpriteEngine_Debug_GetFillRate(void);
//void ChipmunkSpriteEngine_CombineTexture(void);
//void ChipmunkSpriteEngine_ReleaseCombinedTexture(void);

HLL_LIBRARY(ChipmunkSpriteEngine,
	    HLL_TODO_EXPORT(Init, ChipmunkSpriteEngine_Init),
	    HLL_TODO_EXPORT(Update, ChipmunkSpriteEngine_Update),
	    HLL_TODO_EXPORT(SP_GetUnuseNum, ChipmunkSpriteEngine_SP_GetUnuseNum),
	    HLL_TODO_EXPORT(SP_SaveCG, ChipmunkSpriteEngine_SP_SaveCG),
	    HLL_TODO_EXPORT(SP_CreatePixelOnly, ChipmunkSpriteEngine_SP_CreatePixelOnly),
	    HLL_TODO_EXPORT(SP_Delete, ChipmunkSpriteEngine_SP_Delete),
	    HLL_TODO_EXPORT(SP_DeleteAll, ChipmunkSpriteEngine_SP_DeleteAll),
	    HLL_TODO_EXPORT(SP_SetZ, ChipmunkSpriteEngine_SP_SetZ),
	    HLL_TODO_EXPORT(SP_SetShow, ChipmunkSpriteEngine_SP_SetShow),
	    HLL_TODO_EXPORT(SP_RenderView, ChipmunkSpriteEngine_SP_RenderView),
	    HLL_TODO_EXPORT(SP_SetTextSpriteType, ChipmunkSpriteEngine_SP_SetTextSpriteType),
	    HLL_TODO_EXPORT(SP_SetTextSpriteSize, ChipmunkSpriteEngine_SP_SetTextSpriteSize),
	    HLL_TODO_EXPORT(SP_SetTextSpriteColor, ChipmunkSpriteEngine_SP_SetTextSpriteColor),
	    HLL_TODO_EXPORT(SP_SetTextSpriteBoldWeight, ChipmunkSpriteEngine_SP_SetTextSpriteBoldWeight),
	    HLL_TODO_EXPORT(SP_SetTextSpriteEdgeWeight, ChipmunkSpriteEngine_SP_SetTextSpriteEdgeWeight),
	    HLL_TODO_EXPORT(SP_SetTextSpriteEdgeColor, ChipmunkSpriteEngine_SP_SetTextSpriteEdgeColor),
	    HLL_TODO_EXPORT(SP_GetFontWidth, ChipmunkSpriteEngine_SP_GetFontWidth),
	    HLL_TODO_EXPORT(FPS_Get, ChipmunkSpriteEngine_FPS_Get),
	    HLL_TODO_EXPORT(CG_IsExist, ChipmunkSpriteEngine_CG_IsExist),
	    HLL_TODO_EXPORT(CG_GetMetrics, ChipmunkSpriteEngine_CG_GetMetrics),
	    HLL_TODO_EXPORT(TRANS_Begin, ChipmunkSpriteEngine_TRANS_Begin),
	    HLL_TODO_EXPORT(TRANS_Update, ChipmunkSpriteEngine_TRANS_Update),
	    HLL_TODO_EXPORT(TRANS_End, ChipmunkSpriteEngine_TRANS_End),
	    HLL_TODO_EXPORT(VIEW_SetMode, ChipmunkSpriteEngine_VIEW_SetMode),
	    HLL_TODO_EXPORT(VIEW_GetMode, ChipmunkSpriteEngine_VIEW_GetMode),
	    HLL_TODO_EXPORT(VIEW_SetOffsetPos, ChipmunkSpriteEngine_VIEW_SetOffsetPos),
	    HLL_TODO_EXPORT(KeepPreviousView_SetMode, ChipmunkSpriteEngine_KeepPreviousView_SetMode),
	    HLL_TODO_EXPORT(KeepPreviousView_GetMode, ChipmunkSpriteEngine_KeepPreviousView_GetMode),
	    HLL_TODO_EXPORT(KeepPreviousView, ChipmunkSpriteEngine_KeepPreviousView),
	    HLL_TODO_EXPORT(Sleep, ChipmunkSpriteEngine_Sleep),
	    HLL_TODO_EXPORT(SYSTEM_SetConfigOverFrameRateSleep, ChipmunkSpriteEngine_SYSTEM_SetConfigOverFrameRateSleep),
	    HLL_TODO_EXPORT(SYSTEM_GetConfigOverFrameRateSleep, ChipmunkSpriteEngine_SYSTEM_GetConfigOverFrameRateSleep),
	    HLL_TODO_EXPORT(SYSTEM_SetConfigSleepByInactiveWindow, ChipmunkSpriteEngine_SYSTEM_SetConfigSleepByInactiveWindow),
	    HLL_TODO_EXPORT(SYSTEM_GetConfigSleepByInactiveWindow, ChipmunkSpriteEngine_SYSTEM_GetConfigSleepByInactiveWindow),
	    HLL_TODO_EXPORT(SYSTEM_SetReadMessageSkipping, ChipmunkSpriteEngine_SYSTEM_SetReadMessageSkipping),
	    HLL_TODO_EXPORT(SYSTEM_GetReadMessageSkipping, ChipmunkSpriteEngine_SYSTEM_GetReadMessageSkipping),
	    HLL_TODO_EXPORT(SYSTEM_SetConfigFrameSkipWhileMessageSkip, ChipmunkSpriteEngine_SYSTEM_SetConfigFrameSkipWhileMessageSkip),
	    HLL_TODO_EXPORT(SYSTEM_GetConfigFrameSkipWhileMessageSkip, ChipmunkSpriteEngine_SYSTEM_GetConfigFrameSkipWhileMessageSkip),
	    HLL_TODO_EXPORT(SYSTEM_SetInvalidateFrameSkipWhileMessageSkip, ChipmunkSpriteEngine_SYSTEM_SetInvalidateFrameSkipWhileMessageSkip),
	    HLL_TODO_EXPORT(SYSTEM_GetInvalidateFrameSkipWhileMessageSkip, ChipmunkSpriteEngine_SYSTEM_GetInvalidateFrameSkipWhileMessageSkip),
	    HLL_TODO_EXPORT(Debug_GetCurrentAllocatedMemorySize, ChipmunkSpriteEngine_Debug_GetCurrentAllocatedMemorySize),
	    HLL_TODO_EXPORT(Debug_GetMaxAllocatedMemorySize, ChipmunkSpriteEngine_Debug_GetMaxAllocatedMemorySize),
	    HLL_TODO_EXPORT(Debug_GetFillRate, ChipmunkSpriteEngine_Debug_GetFillRate),
	    HLL_TODO_EXPORT(CombineTexture, ChipmunkSpriteEngine_CombineTexture),
	    HLL_TODO_EXPORT(ReleaseCombinedTexture, ChipmunkSpriteEngine_ReleaseCombinedTexture)
	    );
