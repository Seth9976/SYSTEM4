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

//void KiwiSoundEngine_SetGlobalFocus(bool GlobalFocus);
//int KiwiSoundEngine_Music_IsExist(int nNum);
//int KiwiSoundEngine_Music_Prepare(int nCh, int nNum);
//int KiwiSoundEngine_Music_Unprepare(int nCh);
//int KiwiSoundEngine_Music_Play(int nCh);
//int KiwiSoundEngine_Music_Stop(int nCh);
//int KiwiSoundEngine_Music_IsPlay(int nCh);
//int KiwiSoundEngine_Music_SetLoopCount(int nCh, int nCount);
//int KiwiSoundEngine_Music_GetLoopCount(int nCh);
//int KiwiSoundEngine_Music_Pause(int nCh);
//int KiwiSoundEngine_Music_Restart(int nCh);
//int KiwiSoundEngine_Music_IsPause(int nCh);
//int KiwiSoundEngine_Music_Fade(int nCh, int nTime, int nVolume, int bStop);
//int KiwiSoundEngine_Music_StopFade(int nCh);
//int KiwiSoundEngine_Music_IsFade(int nCh);
//int KiwiSoundEngine_Music_GetPos(int nCh);
//int KiwiSoundEngine_Music_GetLength(int nCh);
//int KiwiSoundEngine_Music_Seek(int nCh, int dwPos);
//int KiwiSoundEngine_Music_MillisecondsToSamples(int nMillisec, int nSamplesPerSec);
//int KiwiSoundEngine_Sound_IsExist(int nNum);
//int KiwiSoundEngine_Sound_Prepare(int nCh, int nNum);
//int KiwiSoundEngine_Sound_Unprepare(int nCh);
//int KiwiSoundEngine_Sound_Play(int nCh);
//int KiwiSoundEngine_Sound_Stop(int nCh);
//int KiwiSoundEngine_Sound_IsPlay(int nCh);
//int KiwiSoundEngine_Sound_Fade(int nCh, int nTime, int nVolume, int bStop);
//int KiwiSoundEngine_Sound_StopFade(int nCh);
//int KiwiSoundEngine_Sound_IsFade(int nCh);
//int KiwiSoundEngine_Sound_GetTimeLength(int nCh);
//int KiwiSoundEngine_Sound_GetGroupNum(int nCh);
//int KiwiSoundEngine_Sound_GetGroupNumFromDataNum(int nNum);
//int KiwiSoundEngine_Sound_GetDataLength(int DataNumber);
//int KiwiSoundEngine_GetMasterGroup(void);
//int KiwiSoundEngine_GetBGMGroup(void);
//int KiwiSoundEngine_GetSEGroup(void);
//int KiwiSoundEngine_GetVoiceGroup(void);
//int KiwiSoundEngine_GetGimicSEGroup(void);
//int KiwiSoundEngine_GetBackVoiceGroup(void);

HLL_LIBRARY(KiwiSoundEngine,
	    HLL_TODO_EXPORT(SetGlobalFocus, KiwiSoundEngine_SetGlobalFocus),
	    HLL_TODO_EXPORT(Music_IsExist, KiwiSoundEngine_Music_IsExist),
	    HLL_TODO_EXPORT(Music_Prepare, KiwiSoundEngine_Music_Prepare),
	    HLL_TODO_EXPORT(Music_Unprepare, KiwiSoundEngine_Music_Unprepare),
	    HLL_TODO_EXPORT(Music_Play, KiwiSoundEngine_Music_Play),
	    HLL_TODO_EXPORT(Music_Stop, KiwiSoundEngine_Music_Stop),
	    HLL_TODO_EXPORT(Music_IsPlay, KiwiSoundEngine_Music_IsPlay),
	    HLL_TODO_EXPORT(Music_SetLoopCount, KiwiSoundEngine_Music_SetLoopCount),
	    HLL_TODO_EXPORT(Music_GetLoopCount, KiwiSoundEngine_Music_GetLoopCount),
	    HLL_TODO_EXPORT(Music_Pause, KiwiSoundEngine_Music_Pause),
	    HLL_TODO_EXPORT(Music_Restart, KiwiSoundEngine_Music_Restart),
	    HLL_TODO_EXPORT(Music_IsPause, KiwiSoundEngine_Music_IsPause),
	    HLL_TODO_EXPORT(Music_Fade, KiwiSoundEngine_Music_Fade),
	    HLL_TODO_EXPORT(Music_StopFade, KiwiSoundEngine_Music_StopFade),
	    HLL_TODO_EXPORT(Music_IsFade, KiwiSoundEngine_Music_IsFade),
	    HLL_TODO_EXPORT(Music_GetPos, KiwiSoundEngine_Music_GetPos),
	    HLL_TODO_EXPORT(Music_GetLength, KiwiSoundEngine_Music_GetLength),
	    HLL_TODO_EXPORT(Music_Seek, KiwiSoundEngine_Music_Seek),
	    HLL_TODO_EXPORT(Music_MillisecondsToSamples, KiwiSoundEngine_Music_MillisecondsToSamples),
	    HLL_TODO_EXPORT(Sound_IsExist, KiwiSoundEngine_Sound_IsExist),
	    HLL_TODO_EXPORT(Sound_Prepare, KiwiSoundEngine_Sound_Prepare),
	    HLL_TODO_EXPORT(Sound_Unprepare, KiwiSoundEngine_Sound_Unprepare),
	    HLL_TODO_EXPORT(Sound_Play, KiwiSoundEngine_Sound_Play),
	    HLL_TODO_EXPORT(Sound_Stop, KiwiSoundEngine_Sound_Stop),
	    HLL_TODO_EXPORT(Sound_IsPlay, KiwiSoundEngine_Sound_IsPlay),
	    HLL_TODO_EXPORT(Sound_Fade, KiwiSoundEngine_Sound_Fade),
	    HLL_TODO_EXPORT(Sound_StopFade, KiwiSoundEngine_Sound_StopFade),
	    HLL_TODO_EXPORT(Sound_IsFade, KiwiSoundEngine_Sound_IsFade),
	    HLL_TODO_EXPORT(Sound_GetTimeLength, KiwiSoundEngine_Sound_GetTimeLength),
	    HLL_TODO_EXPORT(Sound_GetGroupNum, KiwiSoundEngine_Sound_GetGroupNum),
	    HLL_TODO_EXPORT(Sound_GetGroupNumFromDataNum, KiwiSoundEngine_Sound_GetGroupNumFromDataNum),
	    HLL_TODO_EXPORT(Sound_GetDataLength, KiwiSoundEngine_Sound_GetDataLength),
	    HLL_TODO_EXPORT(GetMasterGroup, KiwiSoundEngine_GetMasterGroup),
	    HLL_TODO_EXPORT(GetBGMGroup, KiwiSoundEngine_GetBGMGroup),
	    HLL_TODO_EXPORT(GetSEGroup, KiwiSoundEngine_GetSEGroup),
	    HLL_TODO_EXPORT(GetVoiceGroup, KiwiSoundEngine_GetVoiceGroup),
	    HLL_TODO_EXPORT(GetGimicSEGroup, KiwiSoundEngine_GetGimicSEGroup),
	    HLL_TODO_EXPORT(GetBackVoiceGroup, KiwiSoundEngine_GetBackVoiceGroup)
	    );
