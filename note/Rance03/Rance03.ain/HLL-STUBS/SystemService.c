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

//int SystemService_GetMixerNumof(void);
//bool SystemService_GetMixerName(int nNum, struct string **szName);
//bool SystemService_GetMixerVolume(int nNum, int *nVolume);
//bool SystemService_GetMixerDefaultVolume(int Num, int *Volume);
//bool SystemService_GetMixerMute(int nNum, bool *bMute);
//bool SystemService_SetMixerName(int nNum, struct string *szName);
//bool SystemService_SetMixerVolume(int nNum, int nVolume);
//bool SystemService_SetMixerMute(int nNum, bool bMute);
//int SystemService_GetGameVersion(void);
//void SystemService_GetGameName(struct string **GameName);
//bool SystemService_IsFullScreen(void);
//bool SystemService_ChangeNormalScreen(void);
//bool SystemService_ChangeFullScreen(void);
//bool SystemService_InitMainWindowPosAndSize(void);
//bool SystemService_UpdateView(void);
//int SystemService_GetDefaultViewWidth(void);
//int SystemService_GetDefaultViewHeight(void);
//int SystemService_GetViewWidth(void);
//int SystemService_GetViewHeight(void);
//bool SystemService_RenderToSurfaceImage(struct page **SurfaceImage);
//bool SystemService_RenderToSurfaceImageByScale(struct page **SurfaceImage, int ReductionSize);
//void SystemService_SetViewResizableMode(bool ViewResizableMode);
//bool SystemService_IsViewResizableMode(void);
//bool SystemService_SetUsePower2Texture(bool bUse);
//bool SystemService_GetUsePower2Texture(void);
//bool SystemService_ScanFloat(struct string *Text, float *Value);
//bool SystemService_SetAntiAliasingMode(int Mode);
//int SystemService_GetAntiAliasingMode(void);
//bool SystemService_SetWaitVSyncMode(int Mode);
//int SystemService_GetWaitVSyncMode(void);
//bool SystemService_SetWindowSetting(int nType, int nValue);
//bool SystemService_GetWindowSetting(int nType, int *pnValue);
//bool SystemService_SetMouseCursorConfig(int nType, int nValue);
//bool SystemService_GetMouseCursorConfig(int nType, int *pnValue);
//void SystemService_GetGameFolderPath(struct string **pIFolderPath);
//void SystemService_GetDate(int *pnYear, int *pnMonth, int *pnDay, int *pnDayOfWeek);
//void SystemService_GetTime(int *pnHour, int *pnMinute, int *pnSecond);
//bool SystemService_IsResetOnce(void);
//void SystemService_OpenPlayingManual(void);
//bool SystemService_IsExistPlayingManual(void);
//bool SystemService_IsExistSystemMessage(void);
//bool SystemService_PopSystemMessage(int *Message);
//void SystemService_GetCPUInfo(struct string **pVenderName, int *pSignature, int *pCPUFlag, struct string **pBrandName);
//void SystemService_GetMemoryInfo(int *pMax, int *pUse);
//void SystemService_GetOSInfo(struct string **pText);
//void SystemService_GetScreenInfo(struct string **pText);
//void SystemService_RestrainScreensaver(void);
//void SystemService_GetGameTitle(struct string **Name);
//int SystemService_Debug_GetUseVideoMemorySize(void);
//void SystemService_Debug_SetShowMipmapLevel(bool DebugMipmapLevel);
//bool SystemService_Debug_IsShowMipmapLevel(void);

HLL_LIBRARY(SystemService,
	    HLL_TODO_EXPORT(GetMixerNumof, SystemService_GetMixerNumof),
	    HLL_TODO_EXPORT(GetMixerName, SystemService_GetMixerName),
	    HLL_TODO_EXPORT(GetMixerVolume, SystemService_GetMixerVolume),
	    HLL_TODO_EXPORT(GetMixerDefaultVolume, SystemService_GetMixerDefaultVolume),
	    HLL_TODO_EXPORT(GetMixerMute, SystemService_GetMixerMute),
	    HLL_TODO_EXPORT(SetMixerName, SystemService_SetMixerName),
	    HLL_TODO_EXPORT(SetMixerVolume, SystemService_SetMixerVolume),
	    HLL_TODO_EXPORT(SetMixerMute, SystemService_SetMixerMute),
	    HLL_TODO_EXPORT(GetGameVersion, SystemService_GetGameVersion),
	    HLL_TODO_EXPORT(GetGameName, SystemService_GetGameName),
	    HLL_TODO_EXPORT(IsFullScreen, SystemService_IsFullScreen),
	    HLL_TODO_EXPORT(ChangeNormalScreen, SystemService_ChangeNormalScreen),
	    HLL_TODO_EXPORT(ChangeFullScreen, SystemService_ChangeFullScreen),
	    HLL_TODO_EXPORT(InitMainWindowPosAndSize, SystemService_InitMainWindowPosAndSize),
	    HLL_TODO_EXPORT(UpdateView, SystemService_UpdateView),
	    HLL_TODO_EXPORT(GetDefaultViewWidth, SystemService_GetDefaultViewWidth),
	    HLL_TODO_EXPORT(GetDefaultViewHeight, SystemService_GetDefaultViewHeight),
	    HLL_TODO_EXPORT(GetViewWidth, SystemService_GetViewWidth),
	    HLL_TODO_EXPORT(GetViewHeight, SystemService_GetViewHeight),
	    HLL_TODO_EXPORT(RenderToSurfaceImage, SystemService_RenderToSurfaceImage),
	    HLL_TODO_EXPORT(RenderToSurfaceImageByScale, SystemService_RenderToSurfaceImageByScale),
	    HLL_TODO_EXPORT(SetViewResizableMode, SystemService_SetViewResizableMode),
	    HLL_TODO_EXPORT(IsViewResizableMode, SystemService_IsViewResizableMode),
	    HLL_TODO_EXPORT(SetUsePower2Texture, SystemService_SetUsePower2Texture),
	    HLL_TODO_EXPORT(GetUsePower2Texture, SystemService_GetUsePower2Texture),
	    HLL_TODO_EXPORT(ScanFloat, SystemService_ScanFloat),
	    HLL_TODO_EXPORT(SetAntiAliasingMode, SystemService_SetAntiAliasingMode),
	    HLL_TODO_EXPORT(GetAntiAliasingMode, SystemService_GetAntiAliasingMode),
	    HLL_TODO_EXPORT(SetWaitVSyncMode, SystemService_SetWaitVSyncMode),
	    HLL_TODO_EXPORT(GetWaitVSyncMode, SystemService_GetWaitVSyncMode),
	    HLL_TODO_EXPORT(SetWindowSetting, SystemService_SetWindowSetting),
	    HLL_TODO_EXPORT(GetWindowSetting, SystemService_GetWindowSetting),
	    HLL_TODO_EXPORT(SetMouseCursorConfig, SystemService_SetMouseCursorConfig),
	    HLL_TODO_EXPORT(GetMouseCursorConfig, SystemService_GetMouseCursorConfig),
	    HLL_TODO_EXPORT(GetGameFolderPath, SystemService_GetGameFolderPath),
	    HLL_TODO_EXPORT(GetDate, SystemService_GetDate),
	    HLL_TODO_EXPORT(GetTime, SystemService_GetTime),
	    HLL_TODO_EXPORT(IsResetOnce, SystemService_IsResetOnce),
	    HLL_TODO_EXPORT(OpenPlayingManual, SystemService_OpenPlayingManual),
	    HLL_TODO_EXPORT(IsExistPlayingManual, SystemService_IsExistPlayingManual),
	    HLL_TODO_EXPORT(IsExistSystemMessage, SystemService_IsExistSystemMessage),
	    HLL_TODO_EXPORT(PopSystemMessage, SystemService_PopSystemMessage),
	    HLL_TODO_EXPORT(GetCPUInfo, SystemService_GetCPUInfo),
	    HLL_TODO_EXPORT(GetMemoryInfo, SystemService_GetMemoryInfo),
	    HLL_TODO_EXPORT(GetOSInfo, SystemService_GetOSInfo),
	    HLL_TODO_EXPORT(GetScreenInfo, SystemService_GetScreenInfo),
	    HLL_TODO_EXPORT(RestrainScreensaver, SystemService_RestrainScreensaver),
	    HLL_TODO_EXPORT(GetGameTitle, SystemService_GetGameTitle),
	    HLL_TODO_EXPORT(Debug_GetUseVideoMemorySize, SystemService_Debug_GetUseVideoMemorySize),
	    HLL_TODO_EXPORT(Debug_SetShowMipmapLevel, SystemService_Debug_SetShowMipmapLevel),
	    HLL_TODO_EXPORT(Debug_IsShowMipmapLevel, SystemService_Debug_IsShowMipmapLevel)
	    );
