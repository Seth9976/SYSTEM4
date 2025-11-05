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
//int KiwiSoundEngine_GetFreeSeID(int MinSeID, int MaxSeID);
//bool KiwiSoundEngine_IsExistSeID(int SeID);
//bool KiwiSoundEngine_SetSeParam(int SeID, int PlaySpan, bool bMultiPlay);
//bool KiwiSoundEngine_PlaySe(int SeID, struct string *SoundName);
//bool KiwiSoundEngine_StopSe(int SeID);
//bool KiwiSoundEngine_IsPlaySe(int SeID);
//int KiwiSoundEngine_GetFreeID(int MinID, int MaxID);
//bool KiwiSoundEngine_IsExistID(int ID);
//bool KiwiSoundEngine_Prepare(int ID, struct string *SoundName, bool bStreaming);
//bool KiwiSoundEngine_Unprepare(int ID);
//bool KiwiSoundEngine_Play(int ID);
//bool KiwiSoundEngine_Stop(int ID);
//bool KiwiSoundEngine_IsPlay(int ID);
//bool KiwiSoundEngine_SetLoopCount(int ID, int nCount);
//int KiwiSoundEngine_GetLoopCount(int ID);
//bool KiwiSoundEngine_Pause(int ID);
//bool KiwiSoundEngine_Restart(int ID);
//bool KiwiSoundEngine_IsPause(int ID);
//bool KiwiSoundEngine_Fade(int ID, int nTime, float fVolume, bool bStop, int FadeType);
//bool KiwiSoundEngine_StopFade(int ID);
//bool KiwiSoundEngine_IsFade(int ID);
//bool KiwiSoundEngine_Seek(int ID, int nMillisec);
//int KiwiSoundEngine_GetPos(int ID);
//int KiwiSoundEngine_GetLength(int ID);
//int KiwiSoundEngine_GetGroupNum(int ID);
//bool KiwiSoundEngine_IsExistFile(struct string *SoundName);
//int KiwiSoundEngine_GetLengthFromFile(struct string *SoundName);
//int KiwiSoundEngine_GetGroupNumFromFile(struct string *SoundName);
//float KiwiSoundEngine_GetGroupVolume(int nGroupNum);
//int KiwiSoundEngine_MillisecondsToSamples(int nMillisec, int nSamplesPerSec);
//int KiwiSoundEngine_GetSoundFileName(int nNum, struct string **FileName);

HLL_LIBRARY(KiwiSoundEngine,
	    HLL_TODO_EXPORT(SetGlobalFocus, KiwiSoundEngine_SetGlobalFocus),
	    HLL_TODO_EXPORT(GetFreeSeID, KiwiSoundEngine_GetFreeSeID),
	    HLL_TODO_EXPORT(IsExistSeID, KiwiSoundEngine_IsExistSeID),
	    HLL_TODO_EXPORT(SetSeParam, KiwiSoundEngine_SetSeParam),
	    HLL_TODO_EXPORT(PlaySe, KiwiSoundEngine_PlaySe),
	    HLL_TODO_EXPORT(StopSe, KiwiSoundEngine_StopSe),
	    HLL_TODO_EXPORT(IsPlaySe, KiwiSoundEngine_IsPlaySe),
	    HLL_TODO_EXPORT(GetFreeID, KiwiSoundEngine_GetFreeID),
	    HLL_TODO_EXPORT(IsExistID, KiwiSoundEngine_IsExistID),
	    HLL_TODO_EXPORT(Prepare, KiwiSoundEngine_Prepare),
	    HLL_TODO_EXPORT(Unprepare, KiwiSoundEngine_Unprepare),
	    HLL_TODO_EXPORT(Play, KiwiSoundEngine_Play),
	    HLL_TODO_EXPORT(Stop, KiwiSoundEngine_Stop),
	    HLL_TODO_EXPORT(IsPlay, KiwiSoundEngine_IsPlay),
	    HLL_TODO_EXPORT(SetLoopCount, KiwiSoundEngine_SetLoopCount),
	    HLL_TODO_EXPORT(GetLoopCount, KiwiSoundEngine_GetLoopCount),
	    HLL_TODO_EXPORT(Pause, KiwiSoundEngine_Pause),
	    HLL_TODO_EXPORT(Restart, KiwiSoundEngine_Restart),
	    HLL_TODO_EXPORT(IsPause, KiwiSoundEngine_IsPause),
	    HLL_TODO_EXPORT(Fade, KiwiSoundEngine_Fade),
	    HLL_TODO_EXPORT(StopFade, KiwiSoundEngine_StopFade),
	    HLL_TODO_EXPORT(IsFade, KiwiSoundEngine_IsFade),
	    HLL_TODO_EXPORT(Seek, KiwiSoundEngine_Seek),
	    HLL_TODO_EXPORT(GetPos, KiwiSoundEngine_GetPos),
	    HLL_TODO_EXPORT(GetLength, KiwiSoundEngine_GetLength),
	    HLL_TODO_EXPORT(GetGroupNum, KiwiSoundEngine_GetGroupNum),
	    HLL_TODO_EXPORT(IsExistFile, KiwiSoundEngine_IsExistFile),
	    HLL_TODO_EXPORT(GetLengthFromFile, KiwiSoundEngine_GetLengthFromFile),
	    HLL_TODO_EXPORT(GetGroupNumFromFile, KiwiSoundEngine_GetGroupNumFromFile),
	    HLL_TODO_EXPORT(GetGroupVolume, KiwiSoundEngine_GetGroupVolume),
	    HLL_TODO_EXPORT(MillisecondsToSamples, KiwiSoundEngine_MillisecondsToSamples),
	    HLL_TODO_EXPORT(GetSoundFileName, KiwiSoundEngine_GetSoundFileName)
	    );
