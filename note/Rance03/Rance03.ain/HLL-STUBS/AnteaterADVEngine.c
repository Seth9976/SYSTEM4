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

//void AnteaterADVEngine_ADVLogList_Clear(void);
//void AnteaterADVEngine_ADVLogList_AddText(struct string *Text, int WindowNo);
//void AnteaterADVEngine_ADVLogList_AddNewLine(void);
//void AnteaterADVEngine_ADVLogList_AddNewPage(void);
//void AnteaterADVEngine_ADVLogList_AddVoice(struct string *VoiceName);
//void AnteaterADVEngine_ADVLogList_SetEnable(bool bEnable);
//bool AnteaterADVEngine_ADVLogList_IsEnable(void);
//int AnteaterADVEngine_ADVLogList_GetNumofADVLog(void);
//int AnteaterADVEngine_ADVLogList_GetNumofADVLogText(int nADVLog);
//void AnteaterADVEngine_ADVLogList_GetADVLogText(int nADVLog, int Index, struct string **Text);
//int AnteaterADVEngine_ADVLogList_GetNumofADVLogVoice(int nADVLog);
//void AnteaterADVEngine_ADVLogList_GetADVLogVoice(int nADVLog, int Index, struct string **Voice);
//bool AnteaterADVEngine_ADVLogList_Save(struct page **pIVMArray);
//bool AnteaterADVEngine_ADVLogList_Load(struct page **pIVMArray);
//bool AnteaterADVEngine_ADVSceneKeeper_AddADVScene(struct page **pIVMStruct2);
//int AnteaterADVEngine_ADVSceneKeeper_GetNumofADVScene(void);
//bool AnteaterADVEngine_ADVSceneKeeper_GetADVScene(int nIndex, struct page **pIVMStruct2);
//void AnteaterADVEngine_ADVSceneKeeper_Clear(void);
//bool AnteaterADVEngine_ADVSceneKeeper_Save(struct page **pIVMArray);
//bool AnteaterADVEngine_ADVSceneKeeper_Load(struct page **pIVMArray);

HLL_LIBRARY(AnteaterADVEngine,
	    HLL_TODO_EXPORT(ADVLogList_Clear, AnteaterADVEngine_ADVLogList_Clear),
	    HLL_TODO_EXPORT(ADVLogList_AddText, AnteaterADVEngine_ADVLogList_AddText),
	    HLL_TODO_EXPORT(ADVLogList_AddNewLine, AnteaterADVEngine_ADVLogList_AddNewLine),
	    HLL_TODO_EXPORT(ADVLogList_AddNewPage, AnteaterADVEngine_ADVLogList_AddNewPage),
	    HLL_TODO_EXPORT(ADVLogList_AddVoice, AnteaterADVEngine_ADVLogList_AddVoice),
	    HLL_TODO_EXPORT(ADVLogList_SetEnable, AnteaterADVEngine_ADVLogList_SetEnable),
	    HLL_TODO_EXPORT(ADVLogList_IsEnable, AnteaterADVEngine_ADVLogList_IsEnable),
	    HLL_TODO_EXPORT(ADVLogList_GetNumofADVLog, AnteaterADVEngine_ADVLogList_GetNumofADVLog),
	    HLL_TODO_EXPORT(ADVLogList_GetNumofADVLogText, AnteaterADVEngine_ADVLogList_GetNumofADVLogText),
	    HLL_TODO_EXPORT(ADVLogList_GetADVLogText, AnteaterADVEngine_ADVLogList_GetADVLogText),
	    HLL_TODO_EXPORT(ADVLogList_GetNumofADVLogVoice, AnteaterADVEngine_ADVLogList_GetNumofADVLogVoice),
	    HLL_TODO_EXPORT(ADVLogList_GetADVLogVoice, AnteaterADVEngine_ADVLogList_GetADVLogVoice),
	    HLL_TODO_EXPORT(ADVLogList_Save, AnteaterADVEngine_ADVLogList_Save),
	    HLL_TODO_EXPORT(ADVLogList_Load, AnteaterADVEngine_ADVLogList_Load),
	    HLL_TODO_EXPORT(ADVSceneKeeper_AddADVScene, AnteaterADVEngine_ADVSceneKeeper_AddADVScene),
	    HLL_TODO_EXPORT(ADVSceneKeeper_GetNumofADVScene, AnteaterADVEngine_ADVSceneKeeper_GetNumofADVScene),
	    HLL_TODO_EXPORT(ADVSceneKeeper_GetADVScene, AnteaterADVEngine_ADVSceneKeeper_GetADVScene),
	    HLL_TODO_EXPORT(ADVSceneKeeper_Clear, AnteaterADVEngine_ADVSceneKeeper_Clear),
	    HLL_TODO_EXPORT(ADVSceneKeeper_Save, AnteaterADVEngine_ADVSceneKeeper_Save),
	    HLL_TODO_EXPORT(ADVSceneKeeper_Load, AnteaterADVEngine_ADVSceneKeeper_Load)
	    );
